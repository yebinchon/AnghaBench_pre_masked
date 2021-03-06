
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pinned_obj_table {int table; } ;
struct pinned_obj {int id; int hash; int path; } ;
struct mntent {char* mnt_dir; int mnt_type; } ;
struct bpf_prog_info {int id; int hash; int path; } ;
typedef int pinned_info ;
typedef enum bpf_obj_type { ____Placeholder_bpf_obj_type } bpf_obj_type ;
typedef int __u32 ;
struct TYPE_3__ {int fts_info; int fts_path; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;
typedef int FILE ;


 int FTS_F ;
 int bpf_obj_get_info_by_fd (int,struct pinned_obj*,int*) ;
 int close (int) ;
 int fclose (int *) ;
 int fts_close (int *) ;
 int * fts_open (char**,int ,int *) ;
 TYPE_1__* fts_read (int *) ;
 int get_fd_type (int) ;
 struct mntent* getmntent (int *) ;
 int hash_add (int ,int *,int ) ;
 struct pinned_obj* malloc (int) ;
 int memset (struct pinned_obj*,int ,int) ;
 int open_obj_pinned (int ,int) ;
 int * setmntent (char*,char*) ;
 int strdup (int ) ;
 scalar_t__ strncmp (int ,char*,int) ;

int build_pinned_obj_table(struct pinned_obj_table *tab,
      enum bpf_obj_type type)
{
 struct bpf_prog_info pinned_info = {};
 struct pinned_obj *obj_node = ((void*)0);
 __u32 len = sizeof(pinned_info);
 struct mntent *mntent = ((void*)0);
 enum bpf_obj_type objtype;
 FILE *mntfile = ((void*)0);
 FTSENT *ftse = ((void*)0);
 FTS *fts = ((void*)0);
 int fd, err;

 mntfile = setmntent("/proc/mounts", "r");
 if (!mntfile)
  return -1;

 while ((mntent = getmntent(mntfile))) {
  char *path[] = { mntent->mnt_dir, ((void*)0) };

  if (strncmp(mntent->mnt_type, "bpf", 3) != 0)
   continue;

  fts = fts_open(path, 0, ((void*)0));
  if (!fts)
   continue;

  while ((ftse = fts_read(fts))) {
   if (!(ftse->fts_info & FTS_F))
    continue;
   fd = open_obj_pinned(ftse->fts_path, 1);
   if (fd < 0)
    continue;

   objtype = get_fd_type(fd);
   if (objtype != type) {
    close(fd);
    continue;
   }
   memset(&pinned_info, 0, sizeof(pinned_info));
   err = bpf_obj_get_info_by_fd(fd, &pinned_info, &len);
   if (err) {
    close(fd);
    continue;
   }

   obj_node = malloc(sizeof(*obj_node));
   if (!obj_node) {
    close(fd);
    fts_close(fts);
    fclose(mntfile);
    return -1;
   }

   memset(obj_node, 0, sizeof(*obj_node));
   obj_node->id = pinned_info.id;
   obj_node->path = strdup(ftse->fts_path);
   hash_add(tab->table, &obj_node->hash, obj_node->id);

   close(fd);
  }
  fts_close(fts);
 }
 fclose(mntfile);
 return 0;
}

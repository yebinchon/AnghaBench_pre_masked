
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_hfsplus_iterate_dir_closure {int (* hook ) (char*,int,struct grub_fshelp_node*,int ) ;int ret; int closure; TYPE_2__* dir; } ;
struct grub_hfsplus_catkey {int keylen; int namelen; int* name; int parent; } ;
struct TYPE_6__ {int size; int extents; } ;
struct grub_hfsplus_catfile {int type; int mode; int fileid; TYPE_3__ data; int mtime; } ;
struct grub_fshelp_node {scalar_t__ fileid; int size; scalar_t__ mtime; int extents; TYPE_1__* data; } ;
typedef int grub_uint8_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
struct TYPE_5__ {scalar_t__ fileid; TYPE_1__* data; } ;
struct TYPE_4__ {int case_sensitive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int*,int) ;
 int FUNC_8 (char*,int,struct grub_fshelp_node*,int ) ;

__attribute__((used)) static int
FUNC_9 (void *VAR_10, void *VAR_11)
{
  struct grub_hfsplus_iterate_dir_closure *VAR_12 = VAR_11;
  struct grub_hfsplus_catkey *VAR_13;
  char *VAR_14;
  int VAR_15;
  struct grub_fshelp_node *VAR_16;
  struct grub_hfsplus_catfile *VAR_17;
  enum grub_fshelp_filetype VAR_18 = VAR_4;

  VAR_13 = (struct grub_hfsplus_catkey *) VAR_10;

  VAR_17 =
    (struct grub_hfsplus_catfile *) ((char *) VAR_10
         + FUNC_0 (VAR_13->keylen)
         + 2 + (FUNC_0(VAR_13->keylen)
         % 2));


  if (FUNC_1 (VAR_13->parent) != VAR_12->dir->fileid)
    return 1;


  if (FUNC_0 (VAR_17->type) == VAR_9)
    {
      int VAR_19 = (FUNC_0 (VAR_17->mode)
    & VAR_5);

      if (VAR_19 == VAR_6)
 VAR_18 = VAR_2;
      else if (VAR_19 == VAR_7)
 VAR_18 = VAR_3;
      else
 VAR_18 = VAR_4;
    }
  else if (FUNC_0 (VAR_17->type) == VAR_8)
    VAR_18 = VAR_1;

  if (VAR_18 == VAR_4)
    return 0;


  for (VAR_15 = 0; VAR_15 < FUNC_0 (VAR_13->namelen); VAR_15++)
    {
      VAR_13->name[VAR_15] = FUNC_0 (VAR_13->name[VAR_15]);


      if (VAR_13->name[VAR_15] == 0)
 return 0;
    }

  VAR_14 = FUNC_4 (FUNC_0 (VAR_13->namelen) + 1);
  if (! VAR_14)
    return 0;

  if (! FUNC_7 ((grub_uint8_t *) VAR_14, VAR_13->name,
       FUNC_0 (VAR_13->namelen)))
    {
      FUNC_3 (VAR_14);
      return 0;
    }

  VAR_14[FUNC_0 (VAR_13->namelen)] = '\0';


  for (VAR_15 = 0; VAR_15 < FUNC_0 (VAR_13->namelen); VAR_15++)
    VAR_13->name[VAR_15] = FUNC_0 (VAR_13->name[VAR_15]);


  if (! VAR_12->dir->data->case_sensitive)
    VAR_18 |= VAR_0;


  if (FUNC_6 (VAR_14) == FUNC_0 (VAR_13->namelen))
    {


      VAR_16 = FUNC_4 (sizeof (*VAR_16));
      VAR_16->data = VAR_12->dir->data;

      FUNC_5 (VAR_16->extents, VAR_17->data.extents,
     sizeof (VAR_16->extents));
      VAR_16->mtime = FUNC_1 (VAR_17->mtime) - 2082844800;
      VAR_16->size = FUNC_2 (VAR_17->data.size);
      VAR_16->fileid = FUNC_1 (VAR_17->fileid);

      if (VAR_12->hook == ((void*)0))
        VAR_12->ret = 0;
      else
        VAR_12->ret = VAR_12->hook (VAR_14, VAR_18, VAR_16, VAR_12->closure);
    }

  FUNC_3 (VAR_14);

  return VAR_12->ret;
}

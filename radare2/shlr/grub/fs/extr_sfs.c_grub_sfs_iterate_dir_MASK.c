
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct grub_sfs_objc {int next; int * objects; } ;
struct TYPE_10__ {int size; int first_block; } ;
struct TYPE_9__ {int dir_objc; } ;
struct TYPE_11__ {TYPE_2__ file; TYPE_1__ dir; } ;
struct grub_sfs_obj {int type; TYPE_3__ file_dir; scalar_t__ filename; } ;
struct grub_sfs_data {int blocksize; int disk; } ;
typedef TYPE_4__* grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
struct TYPE_12__ {unsigned int block; struct grub_sfs_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int ,int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,unsigned int,unsigned int,int,struct grub_sfs_data*,int (*) (char const*,int,TYPE_4__*,void*),void*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6 (grub_fshelp_node_t VAR_7,
        int (*VAR_8) (const char *VAR_9,
       enum grub_fshelp_filetype VAR_10,
       grub_fshelp_node_t VAR_11, void *VAR_12),
        void *VAR_13)
{
  struct grub_sfs_data *VAR_14 = VAR_7->data;
  char *VAR_15;
  struct grub_sfs_objc *VAR_16;
  unsigned int VAR_17 = VAR_7->block;
  int VAR_18;

  VAR_15 = FUNC_3 (VAR_14->blocksize);
  if (!VAR_15)
    goto fail;



  while (VAR_17)
    {
      FUNC_1 (VAR_14->disk, VAR_17, 0, VAR_14->blocksize, VAR_15);
      if (VAR_6)
 goto fail;

      VAR_16 = (struct grub_sfs_objc *) VAR_15;

      VAR_18 = (char *) &VAR_16->objects[0] - (char *) VAR_16;


      while (VAR_18 + sizeof (struct grub_sfs_obj) < VAR_14->blocksize)
 {
   struct grub_sfs_obj *VAR_19;
   VAR_19 = (struct grub_sfs_obj *) ((char *) VAR_16 + VAR_18);
   char *VAR_20 = (char *) (VAR_19->filename);
   int VAR_21;
   enum grub_fshelp_filetype VAR_22;
   unsigned int VAR_23;



   VAR_21 = FUNC_5 (VAR_20);
   VAR_21 += FUNC_5 (VAR_20 + VAR_21 + 1);

   VAR_18 += sizeof (*VAR_19) + VAR_21;

   VAR_18 = ((VAR_18 + 1) >> 1) << 1;

   if (FUNC_5 (VAR_20) == 0)
     continue;


   if (VAR_19->type & VAR_3)
     continue;
   else if (VAR_19->type & VAR_5)
     VAR_22 = VAR_2;
   else if (VAR_19->type & VAR_4)
     VAR_22 = VAR_0;
   else
     VAR_22 = VAR_1;

   if (VAR_22 == VAR_0)
     VAR_23 = FUNC_0 (VAR_19->file_dir.dir.dir_objc);
   else
     VAR_23 = FUNC_0 (VAR_19->file_dir.file.first_block);

   if (FUNC_4 (VAR_20, VAR_23,
        FUNC_0 (VAR_19->file_dir.file.size),
        VAR_22, VAR_14, VAR_8, VAR_13))
     {
       FUNC_2 (VAR_15);
       return 1;
     }
 }

      VAR_17 = FUNC_0 (VAR_16->next);
    }

 fail:
  FUNC_2 (VAR_15);
  return 0;
}

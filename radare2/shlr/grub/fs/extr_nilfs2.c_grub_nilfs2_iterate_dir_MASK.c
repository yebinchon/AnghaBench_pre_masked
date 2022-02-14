
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_nilfs2_dir_entry {scalar_t__ rec_len; int name_len; scalar_t__ file_type; int inode; } ;
struct TYPE_2__ {scalar_t__ i_mode; int i_size; } ;
struct grub_fshelp_node {int inode_read; unsigned int ino; TYPE_1__ inode; int data; } ;
typedef struct grub_fshelp_node* grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct grub_fshelp_node*) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct grub_fshelp_node*,int ,int ,int ,unsigned int,int,char*) ;
 int FUNC_5 (int ,unsigned int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6 (grub_fshelp_node_t VAR_13,
    int (*VAR_14) (const char *VAR_15,
          enum grub_fshelp_filetype VAR_16,
          grub_fshelp_node_t VAR_17,
          void *VAR_18),
    void *VAR_19)
{
  unsigned int VAR_20 = 0;
  struct grub_fshelp_node *VAR_21 = (struct grub_fshelp_node *) VAR_13;

  if (!VAR_21->inode_read)
    {
      FUNC_5 (VAR_21->data, VAR_21->ino, &VAR_21->inode);
      if (VAR_12)
 return 0;
    }


  if (VAR_14)
  while (VAR_20 < FUNC_2 (VAR_21->inode.i_size))
    {
      struct grub_nilfs2_dir_entry VAR_22;

      FUNC_4 (VAR_21, 0, 0, 0, VAR_20,
        sizeof (struct grub_nilfs2_dir_entry),
        (char *) &VAR_22);
      if (VAR_12)
 return 0;

      if (VAR_22.rec_len == 0)
 return 0;

      if (VAR_22.name_len != 0)
 {

   char VAR_23[VAR_22.name_len + 1];



   struct grub_fshelp_node *VAR_24;
   enum grub_fshelp_filetype VAR_25 = VAR_7;

   FUNC_4 (VAR_21, 0, 0, 0,
     VAR_20 + sizeof (struct grub_nilfs2_dir_entry),
     VAR_22.name_len, VAR_23);
   if (VAR_12)
     return 0;

   VAR_24 = FUNC_3 (sizeof (struct grub_fshelp_node));
   if (!VAR_24)
     return 0;

   VAR_24->data = VAR_21->data;
   VAR_24->ino = FUNC_2 (VAR_22.inode);

   VAR_23[VAR_22.name_len] = '\0';

   if (VAR_22.file_type != VAR_11)
     {
       VAR_24->inode_read = 0;

       if (VAR_22.file_type == VAR_8)
  VAR_25 = VAR_4;
       else if (VAR_22.file_type == VAR_10)
  VAR_25 = VAR_6;
       else if (VAR_22.file_type == VAR_9)
  VAR_25 = VAR_5;
     }
   else
     {


       FUNC_5 (VAR_21->data,
          FUNC_2 (VAR_22.inode),
          &VAR_24->inode);
       if (VAR_12)
  {
    FUNC_0 (VAR_24);
    return 0;
  }

       VAR_24->inode_read = 1;

       if ((FUNC_1 (VAR_24->inode.i_mode)
     & VAR_1) == VAR_0)
  VAR_25 = VAR_4;
       else if ((FUNC_1 (VAR_24->inode.i_mode)
   & VAR_1) == VAR_3)
  VAR_25 = VAR_6;
       else if ((FUNC_1 (VAR_24->inode.i_mode)
   & VAR_1) == VAR_2)
  VAR_25 = VAR_5;
     }

   if (VAR_14 (VAR_23, VAR_25, VAR_24, VAR_19))
     return 1;
 }

      VAR_20 += FUNC_1 (VAR_22.rec_len);
    }

  return 0;
}

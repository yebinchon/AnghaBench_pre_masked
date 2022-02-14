
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_inode {int dummy; } ;
struct grub_nilfs2_data {int ifile; int disk; } ;
typedef int grub_uint64_t ;
typedef int grub_err_t ;
typedef int grub_disk_t ;


 int VAR_0 ;
 int FUNC_0 (struct grub_nilfs2_data*) ;
 int FUNC_1 (struct grub_nilfs2_data*) ;
 int FUNC_2 (int ,int,unsigned int,int,struct grub_nilfs2_inode*) ;
 int FUNC_3 (int,int ,unsigned int*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct grub_nilfs2_data*,int *,int,int) ;
 int FUNC_6 (struct grub_nilfs2_data*,int,int) ;

__attribute__((used)) static grub_err_t
FUNC_7 (struct grub_nilfs2_data *VAR_1,
   grub_uint64_t VAR_2, struct grub_nilfs2_inode *VAR_3)
{
  grub_uint64_t VAR_4;
  unsigned int VAR_5;
  grub_uint64_t VAR_6;
  grub_disk_t VAR_7 = VAR_1->disk;
  unsigned int VAR_8 = (1 << FUNC_0 (VAR_1));

  VAR_4 = FUNC_6 (VAR_1, VAR_2,
          sizeof (struct
           grub_nilfs2_inode));

  FUNC_3 (sizeof (struct grub_nilfs2_inode) * VAR_2,
   FUNC_1 (VAR_1), &VAR_5);
  VAR_6 = FUNC_5 (VAR_1, &VAR_1->ifile, VAR_4, 1);
  if (VAR_6 == (grub_uint64_t) - 1)
    {
      return FUNC_4 (VAR_0, "btree lookup failure");
    }

  return FUNC_2 (VAR_7, VAR_6 * VAR_8, VAR_5,
    sizeof (struct grub_nilfs2_inode), VAR_3);
}

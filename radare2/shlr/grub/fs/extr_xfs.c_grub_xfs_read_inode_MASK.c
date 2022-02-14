
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_xfs_inode {scalar_t__ magic; } ;
struct TYPE_2__ {int log2_inode; } ;
struct grub_xfs_data {TYPE_1__ sblock; int disk; } ;
typedef int grub_uint64_t ;
typedef int grub_err_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int,int,struct grub_xfs_inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct grub_xfs_data*,int ) ;
 int FUNC_4 (struct grub_xfs_data*,int ) ;

__attribute__((used)) static grub_err_t
FUNC_5 (struct grub_xfs_data *VAR_2, grub_uint64_t VAR_3,
       struct grub_xfs_inode *VAR_4)
{
  grub_uint64_t VAR_5 = FUNC_3 (VAR_2, VAR_3);
  int VAR_6 = FUNC_4 (VAR_2, VAR_3);


  if (FUNC_0 (VAR_2->disk, VAR_5, VAR_6,
        1 << VAR_2->sblock.log2_inode, VAR_4))
    return VAR_1;

  if (FUNC_2 ((char *) VAR_4->magic, "IN", 2))
    return FUNC_1 (VAR_0, "not a correct XFS inode");

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first_data_block; } ;
struct grub_ext2_data {TYPE_1__ sblock; int disk; } ;
struct grub_ext2_block_group {int dummy; } ;
typedef int grub_err_t ;


 int FUNC_0 (struct grub_ext2_data*) ;
 int FUNC_1 (int ,int,int,int,struct grub_ext2_block_group*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) inline static grub_err_t
FUNC_3 (struct grub_ext2_data *VAR_0, int VAR_1,
        struct grub_ext2_block_group *VAR_2)
{
  return FUNC_1 (VAR_0->disk,
                         ((FUNC_2 (VAR_0->sblock.first_data_block) + 1)
                          << FUNC_0 (VAR_0)),
    VAR_1 * sizeof (struct grub_ext2_block_group),
    sizeof (struct grub_ext2_block_group), VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_last_cno; } ;
struct grub_nilfs2_data {TYPE_1__ sblock; } ;
struct grub_nilfs2_checkpoint {int dummy; } ;
typedef int grub_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct grub_nilfs2_data*,int ,struct grub_nilfs2_checkpoint*) ;

__attribute__((used)) static inline grub_err_t
FUNC_2 (struct grub_nilfs2_data *VAR_0,
      struct grub_nilfs2_checkpoint *VAR_1)
{
  return FUNC_1 (VAR_0,
          FUNC_0 (VAR_0->
       sblock.s_last_cno),
          VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_data {int dummy; } ;
typedef int grub_uint32_t ;


 int FUNC_0 (struct grub_nilfs2_data*,unsigned long) ;
 unsigned long FUNC_1 (struct grub_nilfs2_data*) ;

__attribute__((used)) static inline grub_uint32_t
FUNC_2 (struct grub_nilfs2_data *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2)
{
  grub_uint32_t VAR_3 =
    VAR_1 / FUNC_1 (VAR_0);
  return VAR_3 * FUNC_0 (VAR_0, VAR_2);
}

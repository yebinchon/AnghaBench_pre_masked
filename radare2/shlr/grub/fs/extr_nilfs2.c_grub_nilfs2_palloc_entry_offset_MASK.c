
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_data {int dummy; } ;
typedef int grub_uint64_t ;
typedef int grub_uint32_t ;


 int FUNC_0 (struct grub_nilfs2_data*,unsigned long) ;
 int FUNC_1 (struct grub_nilfs2_data*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct grub_nilfs2_data*,int ,int*) ;

__attribute__((used)) static inline grub_uint32_t
FUNC_3 (struct grub_nilfs2_data *VAR_0,
     grub_uint64_t VAR_1, unsigned long VAR_2)
{
  unsigned long VAR_3;
  grub_uint32_t VAR_4;

  VAR_3 = FUNC_2 (VAR_0, VAR_1, &VAR_4);

  return FUNC_1 (VAR_0, VAR_3,
       VAR_2) + 1 +
    VAR_4 / FUNC_0 (VAR_0, VAR_2);

}

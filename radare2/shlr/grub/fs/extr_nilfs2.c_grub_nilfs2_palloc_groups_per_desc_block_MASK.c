
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_palloc_group_desc {int dummy; } ;
struct grub_nilfs2_data {int dummy; } ;
typedef int grub_uint32_t ;


 int FUNC_0 (struct grub_nilfs2_data*) ;

__attribute__((used)) static inline grub_uint32_t
FUNC_1 (struct grub_nilfs2_data *VAR_0)
{
  return FUNC_0 (VAR_0) /
    sizeof (struct grub_nilfs2_palloc_group_desc);
}

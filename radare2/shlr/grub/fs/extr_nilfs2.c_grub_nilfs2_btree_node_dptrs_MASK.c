
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_data {int dummy; } ;
struct grub_nilfs2_btree_node {int dummy; } ;
typedef int grub_uint64_t ;


 scalar_t__ FUNC_0 (struct grub_nilfs2_btree_node*) ;
 scalar_t__ FUNC_1 (struct grub_nilfs2_data*,struct grub_nilfs2_btree_node*) ;

__attribute__((used)) static inline grub_uint64_t *
FUNC_2 (struct grub_nilfs2_data *VAR_0,
         struct grub_nilfs2_btree_node *VAR_1)
{
  return (grub_uint64_t *) (FUNC_0 (VAR_1) +
       FUNC_1 (VAR_0,
          VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_data {int dummy; } ;
struct grub_nilfs2_btree_node {int bn_flags; } ;
typedef int grub_uint64_t ;


 int FUNC_0 (struct grub_nilfs2_data*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_1 (struct grub_nilfs2_data *VAR_2,
          struct grub_nilfs2_btree_node *VAR_3)
{
  int VAR_4 = ((FUNC_0 (VAR_2) -
       sizeof (struct grub_nilfs2_btree_node) -
       VAR_0) /
      (sizeof (grub_uint64_t) + sizeof (grub_uint64_t)));

  return (VAR_3->bn_flags & VAR_1) ? 3 : VAR_4;
}

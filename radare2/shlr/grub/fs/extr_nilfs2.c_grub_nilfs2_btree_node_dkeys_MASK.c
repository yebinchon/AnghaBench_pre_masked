
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_btree_node {int bn_flags; } ;
typedef int grub_uint64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline grub_uint64_t *
FUNC_0 (struct grub_nilfs2_btree_node *VAR_2)
{
  return (grub_uint64_t *) ((char *) (VAR_2 + 1) +
       ((VAR_2->bn_flags & VAR_1) ?
        0 : VAR_0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_inode {int * i_bmap; } ;
struct grub_nilfs2_btree_node {int dummy; } ;



__attribute__((used)) static inline struct grub_nilfs2_btree_node *
FUNC_0 (struct grub_nilfs2_inode *VAR_0)
{
  return (struct grub_nilfs2_btree_node *) &VAR_0->i_bmap[0];
}

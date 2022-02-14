
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_inode {int dummy; } ;
struct grub_nilfs2_data {int dummy; } ;
struct grub_nilfs2_btree_node {int bn_flags; } ;
typedef int grub_uint64_t ;


 int VAR_0 ;
 struct grub_nilfs2_btree_node* FUNC_0 (struct grub_nilfs2_inode*) ;
 int FUNC_1 (struct grub_nilfs2_data*,struct grub_nilfs2_inode*,int ,int) ;
 int FUNC_2 (struct grub_nilfs2_data*,int ) ;
 int FUNC_3 (struct grub_nilfs2_inode*,int ) ;

__attribute__((used)) static inline grub_uint64_t
FUNC_4 (struct grub_nilfs2_data *VAR_1,
    struct grub_nilfs2_inode *VAR_2,
    grub_uint64_t VAR_3, int VAR_4)
{
  struct grub_nilfs2_btree_node *VAR_5 = FUNC_0 (VAR_2);
  if (VAR_5->bn_flags & VAR_0)
    return FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
  else
    {
      grub_uint64_t VAR_6;
      VAR_6 = FUNC_3 (VAR_2, VAR_3);
      if (VAR_4)
 VAR_6 = FUNC_2 (VAR_1, VAR_6);
      return VAR_6;
    }
}

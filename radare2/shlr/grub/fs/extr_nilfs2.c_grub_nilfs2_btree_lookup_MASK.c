
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_inode {int dummy; } ;
struct grub_nilfs2_data {int dummy; } ;
struct grub_nilfs2_btree_node {int bn_level; } ;
typedef int grub_uint64_t ;


 int VAR_0 ;
 int FUNC_0 (struct grub_nilfs2_data*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (struct grub_nilfs2_btree_node*) ;
 int FUNC_4 (struct grub_nilfs2_data*,int,unsigned char*) ;
 struct grub_nilfs2_btree_node* FUNC_5 (struct grub_nilfs2_inode*) ;
 int FUNC_6 (struct grub_nilfs2_data*,struct grub_nilfs2_btree_node*,int) ;
 int FUNC_7 (struct grub_nilfs2_btree_node*,int,int*) ;
 int FUNC_8 (struct grub_nilfs2_data*,struct grub_nilfs2_btree_node*) ;
 int FUNC_9 (struct grub_nilfs2_data*,int) ;

__attribute__((used)) static grub_uint64_t
FUNC_10 (struct grub_nilfs2_data *VAR_3,
     struct grub_nilfs2_inode *VAR_4,
     grub_uint64_t VAR_5, int VAR_6)
{
  struct grub_nilfs2_btree_node *VAR_7;

  unsigned char VAR_8[FUNC_0 (VAR_3)];



  grub_uint64_t VAR_9;
  int VAR_10, VAR_11, VAR_12;

  VAR_7 = FUNC_5 (VAR_4);
  VAR_10 = FUNC_3 (VAR_7);

  VAR_11 = FUNC_7 (VAR_7, VAR_5, &VAR_12);
  VAR_9 = FUNC_6 (VAR_3, VAR_7, VAR_12);
  if (VAR_6)
    VAR_9 = FUNC_9 (VAR_3, VAR_9);

  for (VAR_10--; VAR_10 >= VAR_1; VAR_10--)
    {
      FUNC_4 (VAR_3, VAR_9, VAR_8);
      if (VAR_2)
 {
   return -1;
 }
      VAR_7 = (struct grub_nilfs2_btree_node *) VAR_8;

      if (VAR_7->bn_level != VAR_10)
 {
   FUNC_1 (VAR_0, "btree level mismatch\n");
   return -1;
 }

      if (!VAR_11)
 VAR_11 = FUNC_7 (VAR_7, VAR_5, &VAR_12);
      else
 VAR_12 = 0;

      if (VAR_12 < FUNC_8 (VAR_3, VAR_7))
 {
   VAR_9 = FUNC_6 (VAR_3, VAR_7, VAR_12);
   if (VAR_6)
     VAR_9 = FUNC_9 (VAR_3, VAR_9);
 }
      else
 {
   FUNC_1 (VAR_0, "btree corruption\n");
   return -1;
 }
    }

  if (!VAR_11)
    return -1;

  return VAR_9;
}

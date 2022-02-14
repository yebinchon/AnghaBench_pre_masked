
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {int root; } ;
struct ext4_xattr_item {int list_node; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ext4_xattr_ref *VAR_0,
       struct ext4_xattr_item *VAR_1)
{
 FUNC_1(&VAR_1->node, &VAR_0->root);
 FUNC_0(&VAR_1->list_node);
}

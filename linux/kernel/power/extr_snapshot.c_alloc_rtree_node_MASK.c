
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtree_node {int list; int data; } ;
struct list_head {int dummy; } ;
struct chain_allocator {int dummy; } ;
typedef int gfp_t ;


 struct rtree_node* FUNC_0 (struct chain_allocator*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static struct rtree_node *FUNC_3(gfp_t VAR_0, int VAR_1,
        struct chain_allocator *VAR_2,
        struct list_head *VAR_3)
{
 struct rtree_node *VAR_4;

 VAR_4 = FUNC_0(VAR_2, sizeof(struct rtree_node));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->data = FUNC_1(VAR_0, VAR_1);
 if (!VAR_4->data)
  return ((void*)0);

 FUNC_2(&VAR_4->list, VAR_3);

 return VAR_4;
}

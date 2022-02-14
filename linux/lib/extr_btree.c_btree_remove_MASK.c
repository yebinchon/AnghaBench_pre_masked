
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {scalar_t__ height; } ;
struct btree_geo {int dummy; } ;


 void* FUNC_0 (struct btree_head*,struct btree_geo*,unsigned long*,int) ;

void *FUNC_1(struct btree_head *VAR_0, struct btree_geo *VAR_1,
  unsigned long *VAR_2)
{
 if (VAR_0->height == 0)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1, VAR_2, 1);
}

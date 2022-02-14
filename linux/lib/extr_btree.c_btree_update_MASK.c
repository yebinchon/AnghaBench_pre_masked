
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; unsigned long* node; } ;
struct btree_geo {int no_pairs; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 scalar_t__ FUNC_1 (struct btree_geo*,unsigned long*,int,unsigned long*) ;
 int FUNC_2 (struct btree_geo*,unsigned long*,int,void*) ;

int FUNC_3(struct btree_head *VAR_1, struct btree_geo *VAR_2,
   unsigned long *VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6 = VAR_1->height;
 unsigned long *VAR_7 = VAR_1->node;

 if (VAR_6 == 0)
  return -VAR_0;

 for ( ; VAR_6 > 1; VAR_6--) {
  for (VAR_5 = 0; VAR_5 < VAR_2->no_pairs; VAR_5++)
   if (FUNC_1(VAR_2, VAR_7, VAR_5, VAR_3) <= 0)
    break;
  if (VAR_5 == VAR_2->no_pairs)
   return -VAR_0;
  VAR_7 = FUNC_0(VAR_2, VAR_7, VAR_5);
  if (!VAR_7)
   return -VAR_0;
 }

 if (!VAR_7)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->no_pairs; VAR_5++)
  if (FUNC_1(VAR_2, VAR_7, VAR_5, VAR_3) == 0) {
   FUNC_2(VAR_2, VAR_7, VAR_5, VAR_4);
   return 0;
  }
 return -VAR_0;
}

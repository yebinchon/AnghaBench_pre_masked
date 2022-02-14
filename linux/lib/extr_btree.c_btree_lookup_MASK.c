
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; unsigned long* node; } ;
struct btree_geo {int no_pairs; } ;


 void* FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 scalar_t__ FUNC_1 (struct btree_geo*,unsigned long*,int,unsigned long*) ;

void *FUNC_2(struct btree_head *VAR_0, struct btree_geo *VAR_1,
  unsigned long *VAR_2)
{
 int VAR_3, VAR_4 = VAR_0->height;
 unsigned long *VAR_5 = VAR_0->node;

 if (VAR_4 == 0)
  return ((void*)0);

 for ( ; VAR_4 > 1; VAR_4--) {
  for (VAR_3 = 0; VAR_3 < VAR_1->no_pairs; VAR_3++)
   if (FUNC_1(VAR_1, VAR_5, VAR_3, VAR_2) <= 0)
    break;
  if (VAR_3 == VAR_1->no_pairs)
   return ((void*)0);
  VAR_5 = FUNC_0(VAR_1, VAR_5, VAR_3);
  if (!VAR_5)
   return ((void*)0);
 }

 if (!VAR_5)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->no_pairs; VAR_3++)
  if (FUNC_1(VAR_1, VAR_5, VAR_3, VAR_2) == 0)
   return FUNC_0(VAR_1, VAR_5, VAR_3);
 return ((void*)0);
}

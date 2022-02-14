
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; unsigned long* node; } ;
struct btree_geo {int no_pairs; int keylen; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 void* FUNC_1 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_2 (struct btree_geo*,unsigned long*) ;
 scalar_t__ FUNC_3 (struct btree_geo*,unsigned long*,int,unsigned long*) ;
 scalar_t__ FUNC_4 (struct btree_geo*,unsigned long*) ;
 int FUNC_5 (unsigned long*,unsigned long*,int ) ;

void *FUNC_6(struct btree_head *VAR_1, struct btree_geo *VAR_2,
       unsigned long *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long *VAR_6, *VAR_7;
 unsigned long *VAR_8 = ((void*)0), VAR_9[VAR_0];

 if (FUNC_4(VAR_2, VAR_3))
  return ((void*)0);

 if (VAR_1->height == 0)
  return ((void*)0);
 FUNC_5(VAR_9, VAR_3, VAR_2->keylen);
retry:
 FUNC_2(VAR_2, VAR_9);

 VAR_6 = VAR_1->node;
 for (VAR_5 = VAR_1->height ; VAR_5 > 1; VAR_5--) {
  for (VAR_4 = 0; VAR_4 < VAR_2->no_pairs; VAR_4++)
   if (FUNC_3(VAR_2, VAR_6, VAR_4, VAR_9) <= 0)
    break;
  if (VAR_4 == VAR_2->no_pairs)
   goto miss;
  VAR_7 = VAR_6;
  VAR_6 = FUNC_1(VAR_2, VAR_6, VAR_4);
  if (!VAR_6)
   goto miss;
  VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_4);
 }

 if (!VAR_6)
  goto miss;

 for (VAR_4 = 0; VAR_4 < VAR_2->no_pairs; VAR_4++) {
  if (FUNC_3(VAR_2, VAR_6, VAR_4, VAR_9) <= 0) {
   if (FUNC_1(VAR_2, VAR_6, VAR_4)) {
    FUNC_5(VAR_3, FUNC_0(VAR_2, VAR_6, VAR_4), VAR_2->keylen);
    return FUNC_1(VAR_2, VAR_6, VAR_4);
   } else
    goto miss;
  }
 }
miss:
 if (VAR_8) {
  FUNC_5(VAR_9, VAR_8, VAR_2->keylen);
  VAR_8 = ((void*)0);
  goto retry;
 }
 return ((void*)0);
}

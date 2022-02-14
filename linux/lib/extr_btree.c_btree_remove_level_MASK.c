
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; int * node; } ;
struct btree_geo {int no_pairs; } ;


 int FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_1 (struct btree_head*,struct btree_geo*) ;
 void* FUNC_2 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_3 (struct btree_geo*,unsigned long*,int) ;
 unsigned long* FUNC_4 (struct btree_head*,struct btree_geo*,unsigned long*,int) ;
 int FUNC_5 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_6 (struct btree_geo*,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_7 (struct btree_geo*,unsigned long*,int,unsigned long*) ;
 int FUNC_8 (struct btree_head*,struct btree_geo*,unsigned long*,int,unsigned long*,int) ;
 int FUNC_9 (struct btree_geo*,unsigned long*,int,int ) ;
 int FUNC_10 (struct btree_geo*,unsigned long*,int,void*) ;

__attribute__((used)) static void *FUNC_11(struct btree_head *VAR_0, struct btree_geo *VAR_1,
  unsigned long *VAR_2, int VAR_3)
{
 unsigned long *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 void *VAR_8;

 if (VAR_3 > VAR_0->height) {

  VAR_0->height = 0;
  VAR_0->node = ((void*)0);
  return ((void*)0);
 }

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_6 = FUNC_6(VAR_1, VAR_4, VAR_2);
 VAR_7 = FUNC_5(VAR_1, VAR_4, VAR_6);
 if ((VAR_3 == 1) && (FUNC_7(VAR_1, VAR_4, VAR_6, VAR_2) != 0))
  return ((void*)0);
 VAR_8 = FUNC_2(VAR_1, VAR_4, VAR_6);


 for (VAR_5 = VAR_6; VAR_5 < VAR_7 - 1; VAR_5++) {
  FUNC_9(VAR_1, VAR_4, VAR_5, FUNC_0(VAR_1, VAR_4, VAR_5 + 1));
  FUNC_10(VAR_1, VAR_4, VAR_5, FUNC_2(VAR_1, VAR_4, VAR_5 + 1));
 }
 FUNC_3(VAR_1, VAR_4, VAR_7 - 1);

 if (VAR_7 - 1 < VAR_1->no_pairs / 2) {
  if (VAR_3 < VAR_0->height)
   FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7 - 1);
  else if (VAR_7 - 1 == 1)
   FUNC_1(VAR_0, VAR_1);
 }

 return VAR_8;
}

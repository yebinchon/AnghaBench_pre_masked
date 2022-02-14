
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int mempool; } ;
struct btree_geo {int no_pairs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btree_head*,struct btree_geo*,unsigned long*,int) ;
 unsigned long* FUNC_2 (struct btree_geo*,unsigned long*,int) ;
 unsigned long* FUNC_3 (struct btree_head*,struct btree_geo*,unsigned long*,int) ;
 int FUNC_4 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_5 (struct btree_geo*,unsigned long*,unsigned long*) ;
 int FUNC_6 (unsigned long*,int ) ;
 int FUNC_7 (struct btree_head*,struct btree_geo*,int,unsigned long*,int,unsigned long*,int,unsigned long*,int) ;

__attribute__((used)) static void FUNC_8(struct btree_head *VAR_0, struct btree_geo *VAR_1,
  unsigned long *VAR_2, int VAR_3, unsigned long *VAR_4, int VAR_5)
{
 unsigned long *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9, VAR_10, VAR_11;

 if (VAR_5 == 0) {




  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3 + 1);
  FUNC_6(VAR_4, VAR_0->mempool);
  return;
 }

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3 + 1);
 VAR_9 = FUNC_5(VAR_1, VAR_6, VAR_2);
 FUNC_0(FUNC_2(VAR_1, VAR_6, VAR_9) != VAR_4);

 if (VAR_9 > 0) {
  VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_9 - 1);
  VAR_10 = FUNC_4(VAR_1, VAR_7, 0);
  if (VAR_5 + VAR_10 <= VAR_1->no_pairs) {
   FUNC_7(VAR_0, VAR_1, VAR_3,
     VAR_7, VAR_10,
     VAR_4, VAR_5,
     VAR_6, VAR_9 - 1);
   return;
  }
 }
 if (VAR_9 + 1 < FUNC_4(VAR_1, VAR_6, VAR_9)) {
  VAR_8 = FUNC_2(VAR_1, VAR_6, VAR_9 + 1);
  VAR_11 = FUNC_4(VAR_1, VAR_8, 0);
  if (VAR_5 + VAR_11 <= VAR_1->no_pairs) {
   FUNC_7(VAR_0, VAR_1, VAR_3,
     VAR_4, VAR_5,
     VAR_8, VAR_11,
     VAR_6, VAR_9);
   return;
  }
 }







}

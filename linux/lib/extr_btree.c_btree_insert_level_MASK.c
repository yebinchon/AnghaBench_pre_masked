
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; int mempool; } ;
struct btree_geo {int no_pairs; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long* FUNC_1 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_2 (struct btree_head*,struct btree_geo*,int ) ;
 unsigned long* FUNC_3 (struct btree_head*,int ) ;
 void* FUNC_4 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_5 (struct btree_geo*,unsigned long*,int) ;
 unsigned long* FUNC_6 (struct btree_head*,struct btree_geo*,unsigned long*,int) ;
 int FUNC_7 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_8 (struct btree_geo*,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_9 (struct btree_geo*,unsigned long*,int,unsigned long*) ;
 int FUNC_10 (unsigned long*,int ) ;
 int FUNC_11 (struct btree_geo*,unsigned long*,int,unsigned long*) ;
 int FUNC_12 (struct btree_geo*,unsigned long*,int,void*) ;

__attribute__((used)) static int FUNC_13(struct btree_head *VAR_1, struct btree_geo *VAR_2,
         unsigned long *VAR_3, void *VAR_4, int VAR_5,
         gfp_t VAR_6)
{
 unsigned long *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_0(!VAR_4);
 if (VAR_1->height < VAR_5) {
  VAR_11 = FUNC_2(VAR_1, VAR_2, VAR_6);
  if (VAR_11)
   return VAR_11;
 }

retry:
 VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_5);
 VAR_9 = FUNC_8(VAR_2, VAR_7, VAR_3);
 VAR_10 = FUNC_7(VAR_2, VAR_7, VAR_9);

 FUNC_0(VAR_9 < VAR_10 && FUNC_9(VAR_2, VAR_7, VAR_9, VAR_3) == 0);

 if (VAR_10 == VAR_2->no_pairs) {

  unsigned long *VAR_12;

  VAR_12 = FUNC_3(VAR_1, VAR_6);
  if (!VAR_12)
   return -VAR_0;
  VAR_11 = FUNC_13(VAR_1, VAR_2,
    FUNC_1(VAR_2, VAR_7, VAR_10 / 2 - 1),
    VAR_12, VAR_5 + 1, VAR_6);
  if (VAR_11) {
   FUNC_10(VAR_12, VAR_1->mempool);
   return VAR_11;
  }
  for (VAR_8 = 0; VAR_8 < VAR_10 / 2; VAR_8++) {
   FUNC_11(VAR_2, VAR_12, VAR_8, FUNC_1(VAR_2, VAR_7, VAR_8));
   FUNC_12(VAR_2, VAR_12, VAR_8, FUNC_4(VAR_2, VAR_7, VAR_8));
   FUNC_11(VAR_2, VAR_7, VAR_8, FUNC_1(VAR_2, VAR_7, VAR_8 + VAR_10 / 2));
   FUNC_12(VAR_2, VAR_7, VAR_8, FUNC_4(VAR_2, VAR_7, VAR_8 + VAR_10 / 2));
   FUNC_5(VAR_2, VAR_7, VAR_8 + VAR_10 / 2);
  }
  if (VAR_10 & 1) {
   FUNC_11(VAR_2, VAR_7, VAR_8, FUNC_1(VAR_2, VAR_7, VAR_10 - 1));
   FUNC_12(VAR_2, VAR_7, VAR_8, FUNC_4(VAR_2, VAR_7, VAR_10 - 1));
   FUNC_5(VAR_2, VAR_7, VAR_10 - 1);
  }
  goto retry;
 }
 FUNC_0(VAR_10 >= VAR_2->no_pairs);


 for (VAR_8 = VAR_10; VAR_8 > VAR_9; VAR_8--) {
  FUNC_11(VAR_2, VAR_7, VAR_8, FUNC_1(VAR_2, VAR_7, VAR_8 - 1));
  FUNC_12(VAR_2, VAR_7, VAR_8, FUNC_4(VAR_2, VAR_7, VAR_8 - 1));
 }
 FUNC_11(VAR_2, VAR_7, VAR_9, VAR_3);
 FUNC_12(VAR_2, VAR_7, VAR_9, VAR_4);

 return 0;
}

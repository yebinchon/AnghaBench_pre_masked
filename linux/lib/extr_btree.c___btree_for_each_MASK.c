
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int mempool; } ;
struct btree_geo {int no_pairs; } ;


 int FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 unsigned long* FUNC_1 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_2 (unsigned long*,int ) ;

__attribute__((used)) static size_t FUNC_3(struct btree_head *VAR_0, struct btree_geo *VAR_1,
          unsigned long *VAR_2, unsigned long VAR_3,
          void (*VAR_4)(void *VAR_5, unsigned long VAR_6,
         unsigned long *VAR_7, size_t VAR_8,
         void *VAR_9),
          void *VAR_10, int VAR_11, int VAR_12, size_t VAR_13)
{
 int VAR_14;
 unsigned long *VAR_15;

 for (VAR_14 = 0; VAR_14 < VAR_1->no_pairs; VAR_14++) {
  VAR_15 = FUNC_1(VAR_1, VAR_2, VAR_14);
  if (!VAR_15)
   break;
  if (VAR_12 > 1)
   VAR_13 = FUNC_3(VAR_0, VAR_1, VAR_15, VAR_3,
     VAR_4, VAR_10, VAR_11, VAR_12 - 1, VAR_13);
  else
   VAR_4(VAR_15, VAR_3, FUNC_0(VAR_1, VAR_2, VAR_14), VAR_13++,
     VAR_10);
 }
 if (VAR_11)
  FUNC_2(VAR_2, VAR_0->mempool);
 return VAR_13;
}

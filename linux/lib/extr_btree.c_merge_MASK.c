
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int mempool; } ;
struct btree_geo {int dummy; } ;


 int FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_1 (struct btree_head*,struct btree_geo*,int ,int) ;
 unsigned long* FUNC_2 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_3 (unsigned long*,int ) ;
 int FUNC_4 (struct btree_geo*,unsigned long*,int,int ) ;
 int FUNC_5 (struct btree_geo*,unsigned long*,int,unsigned long*) ;

__attribute__((used)) static void FUNC_6(struct btree_head *VAR_0, struct btree_geo *VAR_1, int VAR_2,
  unsigned long *VAR_3, int VAR_4,
  unsigned long *VAR_5, int VAR_6,
  unsigned long *VAR_7, int VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {

  FUNC_4(VAR_1, VAR_3, VAR_4 + VAR_9, FUNC_0(VAR_1, VAR_5, VAR_9));
  FUNC_5(VAR_1, VAR_3, VAR_4 + VAR_9, FUNC_2(VAR_1, VAR_5, VAR_9));
 }

 FUNC_5(VAR_1, VAR_7, VAR_8, VAR_5);
 FUNC_5(VAR_1, VAR_7, VAR_8 + 1, VAR_3);

 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1, VAR_7, VAR_8), VAR_2 + 1);
 FUNC_3(VAR_5, VAR_0->mempool);
}

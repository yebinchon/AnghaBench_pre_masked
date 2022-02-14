
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; unsigned long* node; int mempool; } ;
struct btree_geo {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long* FUNC_1 (struct btree_geo*,unsigned long*,int ) ;
 int FUNC_2 (struct btree_geo*,unsigned long*,int ) ;
 int FUNC_3 (unsigned long*,int ) ;

__attribute__((used)) static void FUNC_4(struct btree_head *VAR_0, struct btree_geo *VAR_1)
{
 unsigned long *VAR_2;
 int VAR_3;

 if (VAR_0->height <= 1)
  return;

 VAR_2 = VAR_0->node;
 VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
 FUNC_0(VAR_3 > 1);
 VAR_0->node = FUNC_1(VAR_1, VAR_2, 0);
 VAR_0->height--;
 FUNC_3(VAR_2, VAR_0->mempool);
}

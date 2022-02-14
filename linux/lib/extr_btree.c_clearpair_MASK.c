
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_geo {int no_longs; int keylen; } ;


 int FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct btree_geo *VAR_0, unsigned long *VAR_1, int VAR_2)
{
 FUNC_1(FUNC_0(VAR_0, VAR_1, VAR_2), 0, VAR_0->keylen);
 VAR_1[VAR_0->no_longs + VAR_2] = 0;
}

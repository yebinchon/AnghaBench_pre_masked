
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; unsigned long* node; } ;
struct btree_geo {int keylen; } ;


 int FUNC_0 (struct btree_geo*,unsigned long*,int ) ;
 void* FUNC_1 (struct btree_geo*,unsigned long*,int ) ;
 int FUNC_2 (unsigned long*,int ,int ) ;

void *FUNC_3(struct btree_head *VAR_0, struct btree_geo *VAR_1,
   unsigned long *VAR_2)
{
 int VAR_3 = VAR_0->height;
 unsigned long *VAR_4 = VAR_0->node;

 if (VAR_3 == 0)
  return ((void*)0);

 for ( ; VAR_3 > 1; VAR_3--)
  VAR_4 = FUNC_1(VAR_1, VAR_4, 0);

 FUNC_2(VAR_2, FUNC_0(VAR_1, VAR_4, 0), VAR_1->keylen);
 return FUNC_1(VAR_1, VAR_4, 0);
}

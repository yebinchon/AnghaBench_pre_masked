
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; int node; } ;
struct btree_geo {int keylen; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btree_head*) ;
 int FUNC_2 (struct btree_head*,struct btree_geo*,unsigned long*,void*,int ) ;
 int FUNC_3 (struct btree_head*,struct btree_geo*,unsigned long*) ;
 void* FUNC_4 (struct btree_head*,struct btree_geo*,unsigned long*) ;
 int FUNC_5 (struct btree_head*,struct btree_geo*,unsigned long*) ;
 int FUNC_6 (unsigned long*,unsigned long*,int ) ;

int FUNC_7(struct btree_head *VAR_1, struct btree_head *VAR_2,
  struct btree_geo *VAR_3, gfp_t VAR_4)
{
 unsigned long VAR_5[VAR_0];
 unsigned long VAR_6[VAR_0];
 void *VAR_7;
 int VAR_8;

 FUNC_0(VAR_1 == VAR_2);

 if (!(VAR_1->node)) {

  VAR_1->node = VAR_2->node;
  VAR_1->height = VAR_2->height;
  FUNC_1(VAR_2);
  return 0;
 }




 for (;;) {
  if (!FUNC_3(VAR_2, VAR_3, VAR_5))
   break;
  VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_5);
  VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_5, VAR_7, VAR_4);
  if (VAR_8)
   return VAR_8;


  FUNC_6(VAR_6, VAR_5, VAR_3->keylen);
  FUNC_5(VAR_2, VAR_3, VAR_6);
 }
 return 0;
}

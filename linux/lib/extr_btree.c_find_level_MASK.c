
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {unsigned long* node; int height; } ;
struct btree_geo {int no_pairs; } ;


 int FUNC_0 (int) ;
 unsigned long* FUNC_1 (struct btree_geo*,unsigned long*,int) ;
 scalar_t__ FUNC_2 (struct btree_geo*,unsigned long*,int,unsigned long*) ;
 int FUNC_3 (struct btree_geo*,unsigned long*,int,unsigned long*) ;

__attribute__((used)) static unsigned long *FUNC_4(struct btree_head *VAR_0, struct btree_geo *VAR_1,
  unsigned long *VAR_2, int VAR_3)
{
 unsigned long *VAR_4 = VAR_0->node;
 int VAR_5, VAR_6;

 for (VAR_6 = VAR_0->height; VAR_6 > VAR_3; VAR_6--) {
  for (VAR_5 = 0; VAR_5 < VAR_1->no_pairs; VAR_5++)
   if (FUNC_2(VAR_1, VAR_4, VAR_5, VAR_2) <= 0)
    break;

  if ((VAR_5 == VAR_1->no_pairs) || !FUNC_1(VAR_1, VAR_4, VAR_5)) {



   VAR_5--;
   FUNC_3(VAR_1, VAR_4, VAR_5, VAR_2);
  }
  FUNC_0(VAR_5 < 0);
  VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_5);
 }
 FUNC_0(!VAR_4);
 return VAR_4;
}

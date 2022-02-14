
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {unsigned long* node; int height; } ;
struct btree_geo {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct btree_geo*,unsigned long*,int) ;
 unsigned long* FUNC_1 (struct btree_head*,int ) ;
 int FUNC_2 (struct btree_geo*,unsigned long*,int ) ;
 int FUNC_3 (struct btree_geo*,unsigned long*,int ,int ) ;
 int FUNC_4 (struct btree_geo*,unsigned long*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct btree_head *VAR_1, struct btree_geo *VAR_2,
        gfp_t VAR_3)
{
 unsigned long *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_4)
  return -VAR_0;
 if (VAR_1->node) {
  VAR_5 = FUNC_2(VAR_2, VAR_1->node, 0);
  FUNC_3(VAR_2, VAR_4, 0, FUNC_0(VAR_2, VAR_1->node, VAR_5 - 1));
  FUNC_4(VAR_2, VAR_4, 0, VAR_1->node);
 }
 VAR_1->node = VAR_4;
 VAR_1->height++;
 return 0;
}

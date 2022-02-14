
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int height; scalar_t__ node; } ;
struct btree_geo {int dummy; } ;


 size_t FUNC_0 (struct btree_head*,struct btree_geo*,scalar_t__,unsigned long,void (*) (void*,unsigned long,unsigned long*,size_t,void*),void*,int,int ,int ) ;
 int FUNC_1 (struct btree_head*) ;
 void FUNC_2 (void*,unsigned long,unsigned long*,size_t,void*) ;

size_t FUNC_3(struct btree_head *VAR_0, struct btree_geo *VAR_1,
     unsigned long VAR_2,
     void (*VAR_3)(void *VAR_4, unsigned long VAR_5,
           unsigned long *VAR_6,
           size_t VAR_7, void *VAR_8),
     void *VAR_9)
{
 size_t VAR_10 = 0;

 if (!VAR_9)
  VAR_3 = FUNC_2;
 if (VAR_0->node)
  VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_0->node, VAR_2, VAR_3,
    VAR_9, 1, VAR_0->height, 0);
 FUNC_1(VAR_0);
 return VAR_10;
}

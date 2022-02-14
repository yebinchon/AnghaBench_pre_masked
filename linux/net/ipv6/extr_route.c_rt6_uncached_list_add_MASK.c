
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncached_list {int lock; int head; } ;
struct rt6_info {int rt6i_uncached; struct uncached_list* rt6i_uncached_list; } ;


 int FUNC_0 (int *,int *) ;
 struct uncached_list* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rt6_info *VAR_1)
{
 struct uncached_list *VAR_2 = FUNC_1(&VAR_0);

 VAR_1->rt6i_uncached_list = VAR_2;

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_1->rt6i_uncached, &VAR_2->head);
 FUNC_3(&VAR_2->lock);
}

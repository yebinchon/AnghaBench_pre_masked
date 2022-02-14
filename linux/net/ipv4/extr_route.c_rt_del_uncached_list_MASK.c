
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncached_list {int lock; } ;
struct rtable {int rt_uncached; struct uncached_list* rt_uncached_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rtable *VAR_0)
{
 if (!FUNC_1(&VAR_0->rt_uncached)) {
  struct uncached_list *VAR_1 = VAR_0->rt_uncached_list;

  FUNC_2(&VAR_1->lock);
  FUNC_0(&VAR_0->rt_uncached);
  FUNC_3(&VAR_1->lock);
 }
}

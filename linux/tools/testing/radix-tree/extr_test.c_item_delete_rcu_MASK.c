
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
struct item {int rcu_head; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct item*,unsigned long) ;
 struct item* FUNC_2 (struct xarray*,unsigned long) ;

int FUNC_3(struct xarray *VAR_1, unsigned long VAR_2)
{
 struct item *VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(&VAR_3->rcu_head, VAR_0);
  return 1;
 }
 return 0;
}

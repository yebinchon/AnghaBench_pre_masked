
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct ifmcaddr6 {struct ifmcaddr6* next; } ;


 int FUNC_0 (struct ifmcaddr6*) ;
 int FUNC_1 (struct inet6_dev*) ;
 int FUNC_2 (struct inet6_dev*,struct ifmcaddr6*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inet6_dev *VAR_0)
{
 struct ifmcaddr6 *VAR_1;



 FUNC_3(&VAR_0->lock);
 FUNC_1(VAR_0);
 for (VAR_1 = VAR_0->mc_list; VAR_1; VAR_1 = VAR_1->next) {
  FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_1);
 }
 FUNC_4(&VAR_0->lock);
}

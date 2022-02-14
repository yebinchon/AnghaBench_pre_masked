
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct ifmcaddr6 {struct ifmcaddr6* next; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_2 (struct inet6_dev*) ;
 int FUNC_3 (struct inet6_dev*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inet6_dev *VAR_0)
{
 struct ifmcaddr6 *VAR_1;

 FUNC_0();

 if (FUNC_2(VAR_0)) {
  FUNC_4(&VAR_0->lock);
  for (VAR_1 = VAR_0->mc_list; VAR_1; VAR_1 = VAR_1->next)
   FUNC_1(VAR_1);
  FUNC_5(&VAR_0->lock);
 } else
  FUNC_3(VAR_0, ((void*)0));
}

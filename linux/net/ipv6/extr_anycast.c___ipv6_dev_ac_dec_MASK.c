
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int dev; int lock; struct ifacaddr6* ac_list; } ;
struct in6_addr {int dummy; } ;
struct ifacaddr6 {scalar_t__ aca_users; int aca_rt; int aca_addr; struct ifacaddr6* aca_next; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ifacaddr6*) ;
 int FUNC_2 (struct inet6_dev*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *,struct in6_addr const*) ;
 int FUNC_6 (struct ifacaddr6*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct inet6_dev *VAR_1, const struct in6_addr *VAR_2)
{
 struct ifacaddr6 *VAR_3, *VAR_4;

 FUNC_0();

 FUNC_7(&VAR_1->lock);
 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_1->ac_list; VAR_3; VAR_3 = VAR_3->aca_next) {
  if (FUNC_5(&VAR_3->aca_addr, VAR_2))
   break;
  VAR_4 = VAR_3;
 }
 if (!VAR_3) {
  FUNC_8(&VAR_1->lock);
  return -VAR_0;
 }
 if (--VAR_3->aca_users > 0) {
  FUNC_8(&VAR_1->lock);
  return 0;
 }
 if (VAR_4)
  VAR_4->aca_next = VAR_3->aca_next;
 else
  VAR_1->ac_list = VAR_3->aca_next;
 FUNC_8(&VAR_1->lock);
 FUNC_6(VAR_3);
 FUNC_2(VAR_1, &VAR_3->aca_addr);

 FUNC_4(FUNC_3(VAR_1->dev), VAR_3->aca_rt);

 FUNC_1(VAR_3);
 return 0;
}

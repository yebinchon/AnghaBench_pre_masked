
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int lock; int dev; struct ifacaddr6* ac_list; } ;
struct ifacaddr6 {int aca_rt; int aca_addr; struct ifacaddr6* aca_next; } ;


 int FUNC_0 (struct ifacaddr6*) ;
 int FUNC_1 (struct inet6_dev*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ifacaddr6*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct inet6_dev *VAR_0)
{
 struct ifacaddr6 *VAR_1;

 FUNC_5(&VAR_0->lock);
 while ((VAR_1 = VAR_0->ac_list) != ((void*)0)) {
  VAR_0->ac_list = VAR_1->aca_next;
  FUNC_6(&VAR_0->lock);

  FUNC_4(VAR_1);

  FUNC_1(VAR_0, &VAR_1->aca_addr);

  FUNC_3(FUNC_2(VAR_0->dev), VAR_1->aca_rt);

  FUNC_0(VAR_1);

  FUNC_5(&VAR_0->lock);
 }
 FUNC_6(&VAR_0->lock);
}

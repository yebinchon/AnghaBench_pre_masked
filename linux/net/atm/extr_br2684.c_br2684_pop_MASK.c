
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct br2684_vcc {int device; int qspace; int (* old_pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct atm_vcc {int dummy; } ;


 struct br2684_vcc* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct atm_vcc*,int ) ;
 int FUNC_4 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct br2684_vcc *VAR_2 = FUNC_0(VAR_0);

 FUNC_3("(vcc %p ; net_dev %p )\n", VAR_0, VAR_2->device);
 VAR_2->old_pop(VAR_0, VAR_1);


 if (FUNC_1(&VAR_2->qspace) == 1)
  FUNC_2(VAR_2->device);
}

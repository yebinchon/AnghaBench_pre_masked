
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct atm_vcc {int (* release_cb ) (struct atm_vcc*) ;} ;


 struct atm_vcc* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct atm_vcc*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct atm_vcc *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->release_cb)
  VAR_1->release_cb(VAR_1);
}

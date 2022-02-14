
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pbAccesscheck; struct TYPE_4__* pbSecret; } ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEY_DOMAINKEY ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(PKULL_M_DPAPI_MASTERKEY_DOMAINKEY VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->pbSecret)
   FUNC_0(VAR_0->pbSecret);
  if(VAR_0->pbAccesscheck)
   FUNC_0(VAR_0->pbAccesscheck);
  FUNC_0(VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hCard; } ;
typedef TYPE_1__* PKULL_M_ACR_COMM ;
typedef scalar_t__ LONG ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

void FUNC_2(PKULL_M_ACR_COMM VAR_2)
{
 LONG VAR_3;
 if(VAR_2->hCard)
 {
  VAR_3 = FUNC_1(VAR_2->hCard, VAR_0);
  if(VAR_3 == VAR_1)
   VAR_2->hCard = 0;
  else FUNC_0(L"SCardDisconnect: 0x%08x\n", VAR_3);
 }
}

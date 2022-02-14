
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* ReadWlanInterruptPin ) () ;scalar_t__ pucTxCommandBuffer; int (* WriteWlanPin ) (int ) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_1 ;

void FUNC_3(void)
{

 VAR_1.WriteWlanPin( VAR_0 );


 while(VAR_1.ReadWlanInterruptPin() == 0)
 {
 }


 if (VAR_1.pucTxCommandBuffer)
 {
  VAR_1.pucTxCommandBuffer = 0;
 }

 FUNC_0();
}

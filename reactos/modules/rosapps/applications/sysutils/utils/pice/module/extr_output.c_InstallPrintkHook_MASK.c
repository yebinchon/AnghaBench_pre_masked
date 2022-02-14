
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PULONG ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_6(void)
{

 FUNC_2();

 if( VAR_2 )
   return;

  FUNC_1((0,"installing PrintString hook\n"));
 FUNC_5("_KdpPrintString",(PULONG)&VAR_3);

 FUNC_1((0,"_KdpPrintString @ %x\n", VAR_3));
 FUNC_0( VAR_3 );
    if(VAR_3)
    {
      VAR_2 = FUNC_3(VAR_3,VAR_1,VAR_0);
    FUNC_1((0,"KdpPrintStringTest breakpoint installed? %d\n", VAR_2));
    }

 FUNC_4();
}

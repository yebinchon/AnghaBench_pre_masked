
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ PGDT ;


 int FUNC_0 () ;
 int FUNC_1 () ;

PGDT FUNC_2(void)
{
ULONG VAR_0[2];
PGDT VAR_1;

    FUNC_0();

 __asm__("sgdt %0;":"=m" (VAR_0));
 VAR_1=(PGDT)(((ULONG)(VAR_0[1]<<16))|((ULONG)(VAR_0[0]>>16)));

    FUNC_1();

 return VAR_1;
}

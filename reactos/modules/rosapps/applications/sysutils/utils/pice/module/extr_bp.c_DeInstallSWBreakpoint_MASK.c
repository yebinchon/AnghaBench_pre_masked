
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ bInstalled; scalar_t__ bVirtual; int ucOriginalOpcode; scalar_t__ ulAddress; } ;
typedef int * PUCHAR ;
typedef TYPE_1__* PSW_BP ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;

BOOLEAN FUNC_7(ULONG VAR_2)
{
    PSW_BP VAR_3;
    BOOLEAN VAR_4 = VAR_0;

    FUNC_1();
    FUNC_0((0,"DeInstallSWBreakpoint()\n"));

    if( (VAR_3 = FUNC_2(VAR_2)) )
    {
        if(FUNC_3(VAR_2) && VAR_3->bInstalled == VAR_1 && VAR_3->bVirtual==VAR_0)
        {
   BOOLEAN VAR_5;
   if( !( VAR_5 = FUNC_4(VAR_2) ) )
    FUNC_6(VAR_2,VAR_1);

            *(PUCHAR)(VAR_3->ulAddress) = VAR_3->ucOriginalOpcode;
   if( !VAR_5 )
    FUNC_6(VAR_2,VAR_0);
        }

        VAR_3->bInstalled = VAR_0;

        VAR_4 = VAR_1;
    }

    FUNC_5();

    return VAR_4;
}

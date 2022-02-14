
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szFunctionName; int szModName; int * Callback; void* bVirtual; void* bInstalled; void* bUsed; } ;
typedef TYPE_1__* PSW_BP ;
typedef int LPSTR ;
typedef void* BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* VAR_0 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 void* VAR_1 ;

BOOLEAN FUNC_5(LPSTR VAR_2,LPSTR VAR_3)
{
    PSW_BP VAR_4;
    BOOLEAN VAR_5 = VAR_0;

    FUNC_1();
    FUNC_0((0,"InstallVirtualSWBreakpoint(%s!%s)\n",VAR_2,VAR_3));

    if( (VAR_4=FUNC_2()) )
    {
        FUNC_0((0,"InstallVirtualSWBreakpoint(): found empty slot\n"));

        VAR_4->bUsed = VAR_1;
        VAR_4->bInstalled = VAR_1;
        VAR_4->bVirtual = VAR_1;
  VAR_4->Callback = ((void*)0);
        FUNC_4(VAR_4->szModName,VAR_2);
        FUNC_4(VAR_4->szFunctionName,VAR_3);

        VAR_5 = VAR_1;
    }

    FUNC_3();

    return VAR_5;
}

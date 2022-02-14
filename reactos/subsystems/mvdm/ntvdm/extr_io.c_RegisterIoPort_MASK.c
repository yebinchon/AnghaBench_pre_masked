
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t USHORT ;
struct TYPE_3__ {int * OutB; int * InB; } ;
struct TYPE_4__ {int hVdd; TYPE_1__ IoHandlers; } ;
typedef int * EMULATOR_OUTB_PROC ;
typedef int * EMULATOR_INB_PROC ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

VOID FUNC_1(USHORT VAR_2,
                    EMULATOR_INB_PROC VAR_3,
                    EMULATOR_OUTB_PROC VAR_4)
{
    if (VAR_1[VAR_2].IoHandlers.InB == ((void*)0))
        VAR_1[VAR_2].IoHandlers.InB = VAR_3;
    else
        FUNC_0("IoPortProc[0x%X].IoHandlers.InB already registered\n", VAR_2);

    if (VAR_1[VAR_2].IoHandlers.OutB == ((void*)0))
        VAR_1[VAR_2].IoHandlers.OutB = VAR_4;
    else
        FUNC_0("IoPortProc[0x%X].IoHandlers.OutB already registered\n", VAR_2);


    VAR_1[VAR_2].hVdd = VAR_0;
}

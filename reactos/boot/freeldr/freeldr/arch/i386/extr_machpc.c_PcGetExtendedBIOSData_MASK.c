
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int es; } ;
struct TYPE_7__ {int eax; } ;
struct TYPE_9__ {TYPE_2__ w; TYPE_1__ d; } ;
typedef TYPE_3__ REGS ;
typedef int* PULONG ;


 scalar_t__ FUNC_0 (TYPE_3__) ;
 int FUNC_1 (int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (char*) ;

VOID
FUNC_3(PULONG VAR_0, PULONG VAR_1)
{
    REGS VAR_2;


    VAR_2.d.eax = 0xC100;
    FUNC_1(0x15, &VAR_2, &VAR_2);
    if (FUNC_0(VAR_2))
    {
        *VAR_0 = VAR_2.w.es << 4;
        *VAR_1 = 1024;
    }
    else
    {
        FUNC_2("Int 15h AH=C1h call failed\n");
        *VAR_0 = 0;
        *VAR_1 = 0;
    }
}

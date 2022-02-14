
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_5__ {int Address; struct TYPE_5__* Next; } ;
struct TYPE_4__ {scalar_t__ TrapFrame; scalar_t__ Ebp; } ;
typedef TYPE_1__* PKTRAP_FRAME ;
typedef TYPE_2__ FRAME ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(PKTRAP_FRAME VAR_1)
{
    FRAME *VAR_2;

    FUNC_0("Frames:\n");





    for (VAR_2 = (FRAME*)VAR_1->TrapFrame;
         VAR_2 != 0 && (ULONG_PTR)VAR_2 < VAR_0;
         VAR_2 = VAR_2->Next)

    {
        FUNC_0("%p  ", VAR_2->Address);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int HistoryBuffers; } ;
typedef int PLIST_ENTRY ;
typedef int PHISTORY_BUFFER ;
typedef TYPE_1__* PCONSRV_CONSOLE ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

VOID
FUNC_4(PCONSRV_CONSOLE VAR_2)
{
    PLIST_ENTRY VAR_3;
    PHISTORY_BUFFER VAR_4;

    while (!FUNC_2(&VAR_2->HistoryBuffers))
    {
        VAR_3 = FUNC_3(&VAR_2->HistoryBuffers);
        VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1);
        FUNC_1(VAR_4);
    }
}

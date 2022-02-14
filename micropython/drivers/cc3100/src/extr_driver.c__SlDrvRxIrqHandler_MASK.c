
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int _SlSpawnEntryFunc_t ;
struct TYPE_2__ {scalar_t__ IsCmdRespWaited; int CmdSyncObj; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(void *VAR_4)
{
    FUNC_1();

    VAR_0++;

    if (VAR_1 == VAR_3->IsCmdRespWaited)
    {
        FUNC_0( FUNC_3(&VAR_3->CmdSyncObj) );
    }
    else
    {
        FUNC_2((_SlSpawnEntryFunc_t)VAR_2, ((void*)0), 0);
    }
}

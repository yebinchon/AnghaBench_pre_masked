
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int redisCommandProc ;
struct TYPE_6__ {int bulklen; int flags; scalar_t__ multibulklen; scalar_t__ reqtype; TYPE_1__* cmd; } ;
typedef TYPE_2__ client ;
struct TYPE_5__ {int * proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(client *VAR_5) {
    redisCommandProc *VAR_6 = VAR_5->cmd ? VAR_5->cmd->proc : ((void*)0);

    FUNC_0(VAR_5);
    VAR_5->reqtype = 0;
    VAR_5->multibulklen = 0;
    VAR_5->bulklen = -1;



    if (!(VAR_5->flags & VAR_1) && VAR_6 != VAR_4)
        VAR_5->flags &= ~VAR_0;




    VAR_5->flags &= ~VAR_2;
    if (VAR_5->flags & VAR_3) {
        VAR_5->flags |= VAR_2;
        VAR_5->flags &= ~VAR_3;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char** argv; int flags; scalar_t__ pid; scalar_t__ start_time; scalar_t__ retry_num; } ;
typedef TYPE_1__ sentinelScriptJob ;
typedef scalar_t__ mstime_t ;
struct TYPE_6__ {TYPE_1__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int client ;
struct TYPE_7__ {int scripts_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 () ;
 TYPE_3__ VAR_1 ;

void FUNC_8(client *VAR_2) {
    listNode *VAR_3;
    listIter VAR_4;

    FUNC_0(VAR_2,FUNC_4(VAR_1.scripts_queue));
    FUNC_6(VAR_1.scripts_queue,&VAR_4);
    while ((VAR_3 = FUNC_5(&VAR_4)) != ((void*)0)) {
        sentinelScriptJob *VAR_5 = VAR_3->value;
        int VAR_6 = 0;

        FUNC_3(VAR_2,5);

        FUNC_1(VAR_2,"argv");
        while (VAR_5->argv[VAR_6]) VAR_6++;
        FUNC_0(VAR_2,VAR_6);
        VAR_6 = 0;
        while (VAR_5->argv[VAR_6]) FUNC_1(VAR_2,VAR_5->argv[VAR_6++]);

        FUNC_1(VAR_2,"flags");
        FUNC_1(VAR_2,
            (VAR_5->flags & VAR_0) ? "running" : "scheduled");

        FUNC_1(VAR_2,"pid");
        FUNC_2(VAR_2,VAR_5->pid);

        if (VAR_5->flags & VAR_0) {
            FUNC_1(VAR_2,"run-time");
            FUNC_2(VAR_2,FUNC_7() - VAR_5->start_time);
        } else {
            mstime_t VAR_7 = VAR_5->start_time ? (VAR_5->start_time-FUNC_7()) : 0;
            if (VAR_7 < 0) VAR_7 = 0;
            FUNC_1(VAR_2,"run-delay");
            FUNC_2(VAR_2,VAR_7);
        }

        FUNC_1(VAR_2,"retry-num");
        FUNC_2(VAR_2,VAR_5->retry_num);
    }
}

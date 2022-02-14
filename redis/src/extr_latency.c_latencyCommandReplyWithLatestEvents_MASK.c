
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct latencyTimeSeries {int idx; int max; TYPE_1__* samples; } ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int client ;
struct TYPE_4__ {int latency_events; } ;
struct TYPE_3__ {int latency; int time; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 char* FUNC_4 (int *) ;
 struct latencyTimeSeries* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_9(client *VAR_2) {
    dictIterator *VAR_3;
    dictEntry *VAR_4;

    FUNC_0(VAR_2,FUNC_8(VAR_1.latency_events));
    VAR_3 = FUNC_3(VAR_1.latency_events);
    while((VAR_4 = FUNC_6(VAR_3)) != ((void*)0)) {
        char *VAR_5 = FUNC_4(VAR_4);
        struct latencyTimeSeries *VAR_6 = FUNC_5(VAR_4);
        int VAR_7 = (VAR_6->idx + VAR_0 - 1) % VAR_0;

        FUNC_0(VAR_2,4);
        FUNC_1(VAR_2,VAR_5);
        FUNC_2(VAR_2,VAR_6->samples[VAR_7].time);
        FUNC_2(VAR_2,VAR_6->samples[VAR_7].latency);
        FUNC_2(VAR_2,VAR_6->max);
    }
    FUNC_7(VAR_3);
}

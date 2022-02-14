
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct latencyTimeSeries {int dummy; } ;
typedef int sds ;
typedef int dictEntry ;
struct TYPE_14__ {int argc; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_15__ {int latency_events; } ;
struct TYPE_13__ {int * ptr; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,char*) ;
 int FUNC_2 (TYPE_2__*,char const**) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_6 () ;
 struct latencyTimeSeries* FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int *) ;
 char* FUNC_9 (int *) ;
 struct latencyTimeSeries* FUNC_10 (int *) ;
 int FUNC_11 (char*,struct latencyTimeSeries*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,struct latencyTimeSeries*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_17 (int *,char*) ;

void FUNC_18(client *VAR_1) {
    const char *VAR_2[] = {
"DOCTOR              -- Returns a human readable latency analysis report.",
"GRAPH   <event>     -- Returns an ASCII latency graph for the event class.",
"HISTORY <event>     -- Returns time-latency samples for the event class.",
"LATEST              -- Returns the latest latency samples for all events.",
"RESET   [event ...] -- Resets latency data of one or more event classes.",
"                       (default: reset all data for all event classes)",
"HELP                -- Prints this help.",
((void*)0)
    };
    struct latencyTimeSeries *VAR_3;

    if (!FUNC_17(VAR_1->argv[1]->ptr,"history") && VAR_1->argc == 3) {

        VAR_3 = FUNC_7(VAR_0.latency_events,VAR_1->argv[2]->ptr);
        if (VAR_3 == ((void*)0)) {
            FUNC_0(VAR_1,0);
        } else {
            FUNC_13(VAR_1,VAR_3);
        }
    } else if (!FUNC_17(VAR_1->argv[1]->ptr,"graph") && VAR_1->argc == 3) {

        sds VAR_4;
        dictEntry *VAR_5;
        char *VAR_6;

        VAR_5 = FUNC_8(VAR_0.latency_events,VAR_1->argv[2]->ptr);
        if (VAR_5 == ((void*)0)) goto nodataerr;
        VAR_3 = FUNC_10(VAR_5);
        VAR_6 = FUNC_9(VAR_5);

        VAR_4 = FUNC_11(VAR_6,VAR_3);
        FUNC_5(VAR_1,VAR_4,FUNC_16(VAR_4),"txt");
        FUNC_15(VAR_4);
    } else if (!FUNC_17(VAR_1->argv[1]->ptr,"latest") && VAR_1->argc == 2) {

        FUNC_12(VAR_1);
    } else if (!FUNC_17(VAR_1->argv[1]->ptr,"doctor") && VAR_1->argc == 2) {

        sds VAR_7 = FUNC_6();

        FUNC_5(VAR_1,VAR_7,FUNC_16(VAR_7),"txt");
        FUNC_15(VAR_7);
    } else if (!FUNC_17(VAR_1->argv[1]->ptr,"reset") && VAR_1->argc >= 2) {

        if (VAR_1->argc == 2) {
            FUNC_3(VAR_1,FUNC_14(((void*)0)));
        } else {
            int VAR_8, VAR_9 = 0;

            for (VAR_8 = 2; VAR_8 < VAR_1->argc; VAR_8++)
                VAR_9 += FUNC_14(VAR_1->argv[VAR_8]->ptr);
            FUNC_3(VAR_1,VAR_9);
        }
    } else if (!FUNC_17(VAR_1->argv[1]->ptr,"help") && VAR_1->argc >= 2) {
        FUNC_2(VAR_1, VAR_2);
    } else {
        FUNC_4(VAR_1);
    }
    return;

nodataerr:


    FUNC_1(VAR_1,
        "No samples available for event '%s'", (char*) VAR_1->argv[2]->ptr);
}

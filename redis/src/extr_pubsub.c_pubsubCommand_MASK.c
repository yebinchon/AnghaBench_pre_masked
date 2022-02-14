
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_15__ {int * ptr; } ;
typedef TYPE_1__ robj ;
typedef int list ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_16__ {int argc; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_17__ {int * pubsub_patterns; int pubsub_channels; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (int ,TYPE_1__*) ;
 int * FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_13 (TYPE_2__*,void*,long) ;
 int FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (int *,int ,int *,int ,int ) ;

void FUNC_16(client *VAR_1) {
    if (VAR_1->argc == 2 && !FUNC_14(VAR_1->argv[1]->ptr,"help")) {
        const char *VAR_2[] = {
"CHANNELS [<pattern>] -- Return the currently active channels matching a pattern (default: all).",
"NUMPAT -- Return number of subscriptions to patterns.",
"NUMSUB [channel-1 .. channel-N] -- Returns the number of subscribers for the specified channels (excluding patterns, default: none).",
((void*)0)
        };
        FUNC_3(VAR_1, VAR_2);
    } else if (!FUNC_14(VAR_1->argv[1]->ptr,"channels") &&
        (VAR_1->argc == 2 || VAR_1->argc == 3))
    {

        sds VAR_3 = (VAR_1->argc == 2) ? ((void*)0) : VAR_1->argv[2]->ptr;
        dictIterator *VAR_4 = FUNC_7(VAR_0.pubsub_channels);
        dictEntry *VAR_5;
        long VAR_6 = 0;
        void *VAR_7;

        VAR_7 = FUNC_2(VAR_1);
        while((VAR_5 = FUNC_9(VAR_4)) != ((void*)0)) {
            robj *VAR_8 = FUNC_8(VAR_5);
            sds VAR_9 = VAR_8->ptr;

            if (!VAR_3 || FUNC_15(VAR_3, FUNC_12(VAR_3),
                                       VAR_9, FUNC_12(VAR_9),0))
            {
                FUNC_1(VAR_1,VAR_8);
                VAR_6++;
            }
        }
        FUNC_10(VAR_4);
        FUNC_13(VAR_1,VAR_7,VAR_6);
    } else if (!FUNC_14(VAR_1->argv[1]->ptr,"numsub") && VAR_1->argc >= 2) {

        int VAR_10;

        FUNC_0(VAR_1,(VAR_1->argc-2)*2);
        for (VAR_10 = 2; VAR_10 < VAR_1->argc; VAR_10++) {
            list *VAR_11 = FUNC_6(VAR_0.pubsub_channels,VAR_1->argv[VAR_10]);

            FUNC_1(VAR_1,VAR_1->argv[VAR_10]);
            FUNC_4(VAR_1,VAR_11 ? FUNC_11(VAR_11) : 0);
        }
    } else if (!FUNC_14(VAR_1->argv[1]->ptr,"numpat") && VAR_1->argc == 2) {

        FUNC_4(VAR_1,FUNC_11(VAR_0.pubsub_patterns));
    } else {
        FUNC_5(VAR_1);
    }
}

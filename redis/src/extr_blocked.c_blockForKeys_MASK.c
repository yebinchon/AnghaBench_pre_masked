
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int streamID ;
typedef int robj ;
typedef int mstime_t ;
typedef void list ;
typedef int dictEntry ;
struct TYPE_8__ {int keys; int * target; int timeout; } ;
struct TYPE_10__ {TYPE_2__* db; TYPE_1__ bpop; } ;
typedef TYPE_3__ client ;
struct TYPE_9__ {int blocking_keys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int *,void*) ;
 int * FUNC_2 (int ,int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,TYPE_3__*) ;
 void* FUNC_6 () ;
 int FUNC_7 (void*,int *,int) ;
 int FUNC_8 (TYPE_3__*,int *,int) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int) ;

void FUNC_11(client *VAR_2, int VAR_3, robj **VAR_4, int VAR_5, mstime_t VAR_6, robj *VAR_7, streamID *VAR_8) {
    dictEntry *VAR_9;
    list *VAR_10;
    int VAR_11;

    VAR_2->bpop.timeout = VAR_6;
    VAR_2->bpop.target = VAR_7;

    if (VAR_7 != ((void*)0)) FUNC_4(VAR_7);

    for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {


        void *VAR_12 = ((void*)0);
        if (VAR_3 == VAR_0) {
            VAR_12 = FUNC_10(sizeof(streamID));
            FUNC_7(VAR_12,VAR_8+VAR_11,sizeof(streamID));
        }


        if (FUNC_1(VAR_2->bpop.keys,VAR_4[VAR_11],VAR_12) != VAR_1) {
            FUNC_9(VAR_12);
            continue;
        }
        FUNC_4(VAR_4[VAR_11]);


        VAR_9 = FUNC_2(VAR_2->db->blocking_keys,VAR_4[VAR_11]);
        if (VAR_9 == ((void*)0)) {
            int VAR_13;


            VAR_10 = FUNC_6();
            VAR_13 = FUNC_1(VAR_2->db->blocking_keys,VAR_4[VAR_11],VAR_10);
            FUNC_4(VAR_4[VAR_11]);
            FUNC_8(VAR_2,VAR_4[VAR_11],VAR_13 == VAR_1);
        } else {
            VAR_10 = FUNC_3(VAR_9);
        }
        FUNC_5(VAR_10,VAR_2);
    }
    FUNC_0(VAR_2,VAR_3);
}

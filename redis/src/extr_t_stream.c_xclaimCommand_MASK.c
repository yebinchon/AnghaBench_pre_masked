
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_58__ TYPE_6__ ;
typedef struct TYPE_57__ TYPE_5__ ;
typedef struct TYPE_56__ TYPE_4__ ;
typedef struct TYPE_55__ TYPE_3__ ;
typedef struct TYPE_54__ TYPE_35__ ;
typedef struct TYPE_53__ TYPE_2__ ;
typedef struct TYPE_52__ TYPE_1__ ;
typedef struct TYPE_51__ TYPE_12__ ;


struct TYPE_52__ {int delivery_time; long long delivery_count; TYPE_3__* consumer; } ;
typedef TYPE_1__ streamNACK ;
typedef int streamIterator ;
struct TYPE_53__ {int member_1; int member_0; } ;
typedef TYPE_2__ streamID ;
struct TYPE_55__ {int pel; } ;
typedef TYPE_3__ streamConsumer ;
struct TYPE_56__ {int pel; TYPE_2__ last_id; } ;
typedef TYPE_4__ streamCG ;
struct TYPE_57__ {int ptr; } ;
typedef TYPE_5__ robj ;
typedef int mstime_t ;
typedef int int64_t ;
struct TYPE_58__ {int argc; TYPE_12__** argv; int db; } ;
typedef TYPE_6__ client ;
typedef int buf ;
struct TYPE_54__ {int dirty; } ;
struct TYPE_51__ {char* ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,char*,char*,...) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_12__*,...) ;
 TYPE_5__* FUNC_6 (int ,TYPE_12__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_6__*) ;
 TYPE_1__* FUNC_9 (int ,unsigned char*,int) ;
 int FUNC_10 (int ,unsigned char*,int,TYPE_1__*,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_11 (int ,unsigned char*,int,int *) ;
 TYPE_35__ VAR_4 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_6__*,void*,size_t) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* FUNC_16 (int *) ;
 int FUNC_17 (unsigned char*,TYPE_2__*) ;
 scalar_t__ FUNC_18 (int *,TYPE_2__*,int *) ;
 int FUNC_19 (int *,int ,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_20 (int *) ;
 TYPE_4__* FUNC_21 (int ,char*) ;
 TYPE_3__* FUNC_22 (TYPE_4__*,char*,int) ;
 scalar_t__ FUNC_23 (TYPE_6__*,TYPE_12__*,TYPE_2__*,int ) ;
 int FUNC_24 (TYPE_6__*,TYPE_12__*,TYPE_4__*,TYPE_12__*) ;
 int FUNC_25 (TYPE_6__*,TYPE_12__*,TYPE_4__*,TYPE_12__*,TYPE_12__*,TYPE_1__*) ;
 size_t FUNC_26 (TYPE_6__*,int ,TYPE_2__*,TYPE_2__*,int,int ,int *,int *,int ,int *) ;

void FUNC_27(client *VAR_5) {
    streamCG *VAR_6 = ((void*)0);
    robj *VAR_7 = FUNC_6(VAR_5->db,VAR_5->argv[1]);
    long long VAR_8;
    long long VAR_9 = -1;
    mstime_t VAR_10 = -1;
    int VAR_11 = 0;
    int VAR_12 = 0;

    if (VAR_7) {
        if (FUNC_4(VAR_5,VAR_7,VAR_1)) return;
        VAR_6 = FUNC_21(VAR_7->ptr,VAR_5->argv[2]->ptr);
    }



    if (VAR_7 == ((void*)0) || VAR_6 == ((void*)0)) {
        FUNC_1(VAR_5,"-NOGROUP No such key '%s' or "
                              "consumer group '%s'", (char*)VAR_5->argv[1]->ptr,
                              (char*)VAR_5->argv[2]->ptr);
        return;
    }

    if (FUNC_5(VAR_5,VAR_5->argv[4],&VAR_8,
        "Invalid min-idle-time argument for XCLAIM")
        != VAR_0) return;
    if (VAR_8 < 0) VAR_8 = 0;





    int VAR_13;
    for (VAR_13 = 5; VAR_13 < VAR_5->argc; VAR_13++) {
        streamID VAR_14;
        if (FUNC_23(((void*)0),VAR_5->argv[VAR_13],&VAR_14,0) != VAR_0) break;
    }
    int VAR_15 = VAR_13-1;



    mstime_t VAR_16 = FUNC_7();
    streamID VAR_17 = {0,0};
    int VAR_18 = 0;
    for (; VAR_13 < VAR_5->argc; VAR_13++) {
        int VAR_19 = (VAR_5->argc-1) - VAR_13;
        char *VAR_20 = VAR_5->argv[VAR_13]->ptr;
        if (!FUNC_14(VAR_20,"FORCE")) {
            VAR_11 = 1;
        } else if (!FUNC_14(VAR_20,"JUSTID")) {
            VAR_12 = 1;
        } else if (!FUNC_14(VAR_20,"IDLE") && VAR_19) {
            VAR_13++;
            if (FUNC_5(VAR_5,VAR_5->argv[VAR_13],&VAR_10,
                "Invalid IDLE option argument for XCLAIM")
                != VAR_0) return;
            VAR_10 = VAR_16 - VAR_10;
        } else if (!FUNC_14(VAR_20,"TIME") && VAR_19) {
            VAR_13++;
            if (FUNC_5(VAR_5,VAR_5->argv[VAR_13],&VAR_10,
                "Invalid TIME option argument for XCLAIM")
                != VAR_0) return;
        } else if (!FUNC_14(VAR_20,"RETRYCOUNT") && VAR_19) {
            VAR_13++;
            if (FUNC_5(VAR_5,VAR_5->argv[VAR_13],&VAR_9,
                "Invalid RETRYCOUNT option argument for XCLAIM")
                != VAR_0) return;
        } else if (!FUNC_14(VAR_20,"LASTID") && VAR_19) {
            VAR_13++;
            if (FUNC_23(VAR_5,VAR_5->argv[VAR_13],&VAR_17,0) != VAR_0) return;
        } else {
            FUNC_1(VAR_5,"Unrecognized XCLAIM option '%s'",VAR_20);
            return;
        }
    }

    if (FUNC_15(&VAR_17,&VAR_6->last_id) > 0) {
        VAR_6->last_id = VAR_17;
        VAR_18 = 1;
    }

    if (VAR_10 != -1) {







        if (VAR_10 < 0 || VAR_10 > VAR_16) VAR_10 = VAR_16;
    } else {



        VAR_10 = VAR_16;
    }


    streamConsumer *VAR_21 = FUNC_22(VAR_6,VAR_5->argv[3]->ptr,1);
    void *VAR_22 = FUNC_0(VAR_5);
    size_t VAR_23 = 0;
    for (int VAR_24 = 5; VAR_24 <= VAR_15; VAR_24++) {
        streamID VAR_25;
        unsigned char VAR_26[sizeof(streamID)];
        if (FUNC_23(VAR_5,VAR_5->argv[VAR_24],&VAR_25,0) != VAR_0)
            FUNC_12("StreamID invalid after check. Should not be possible.");
        FUNC_17(VAR_26,&VAR_25);


        streamNACK *VAR_27 = FUNC_9(VAR_6->pel,VAR_26,sizeof(VAR_26));






        if (VAR_11 && VAR_27 == VAR_3) {
            streamIterator VAR_28;
            FUNC_19(&VAR_28,VAR_7->ptr,&VAR_25,&VAR_25,0);
            int64_t VAR_29;
            int VAR_30 = 0;
            streamID VAR_31;
            if (FUNC_18(&VAR_28,&VAR_31,&VAR_29)) VAR_30 = 1;
            FUNC_20(&VAR_28);


            if (!VAR_30) continue;


            VAR_27 = FUNC_16(((void*)0));
            FUNC_10(VAR_6->pel,VAR_26,sizeof(VAR_26),VAR_27,((void*)0));
        }

        if (VAR_27 != VAR_3) {






            if (VAR_27->consumer && VAR_8) {
                mstime_t VAR_32 = VAR_16 - VAR_27->delivery_time;
                if (VAR_32 < VAR_8) continue;
            }



            if (VAR_27->consumer)
                FUNC_11(VAR_27->consumer->pel,VAR_26,sizeof(VAR_26),((void*)0));

            VAR_27->consumer = VAR_21;
            VAR_27->delivery_time = VAR_10;


            if (VAR_9 >= 0) {
                VAR_27->delivery_count = VAR_9;
            } else if (!VAR_12) {
                VAR_27->delivery_count++;
            }

            FUNC_10(VAR_21->pel,VAR_26,sizeof(VAR_26),VAR_27,((void*)0));

            if (VAR_12) {
                FUNC_3(VAR_5,&VAR_25);
            } else {
                size_t VAR_33 = FUNC_26(VAR_5,VAR_7->ptr,&VAR_25,&VAR_25,1,0,
                                    ((void*)0),((void*)0),VAR_2,((void*)0));
                if (!VAR_33) FUNC_2(VAR_5);
            }
            VAR_23++;


            FUNC_25(VAR_5,VAR_5->argv[1],VAR_6,VAR_5->argv[2],VAR_5->argv[VAR_24],VAR_27);
            VAR_18 = 0;
            VAR_4.dirty++;
        }
    }
    if (VAR_18) {
        FUNC_24(VAR_5,VAR_5->argv[1],VAR_6,VAR_5->argv[2]);
        VAR_4.dirty++;
    }
    FUNC_13(VAR_5,VAR_22,VAR_23);
    FUNC_8(VAR_5);
}

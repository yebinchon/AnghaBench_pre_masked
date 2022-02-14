
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int groupname; int keyname; } ;
typedef TYPE_1__ streamPropInfo ;
struct TYPE_20__ {int delivery_count; int delivery_time; TYPE_3__* consumer; } ;
typedef TYPE_2__ streamNACK ;
typedef int streamIterator ;
typedef int streamID ;
struct TYPE_21__ {int pel; } ;
typedef TYPE_3__ streamConsumer ;
struct TYPE_22__ {int pel; int last_id; } ;
typedef TYPE_4__ streamCG ;
typedef int stream ;
typedef int robj ;
typedef int int64_t ;
typedef int client ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 TYPE_2__* FUNC_8 (int ,unsigned char*,int) ;
 int FUNC_9 (int ,unsigned char*,int,TYPE_2__*,int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_10 (int ,unsigned char*,int,int *) ;
 int FUNC_11 (int ,unsigned char*,int,TYPE_2__*,int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,void*,size_t) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 TYPE_2__* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (unsigned char*,int *) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int *,unsigned char**,unsigned char**,int *,int *) ;
 scalar_t__ FUNC_20 (int *,int *,int *) ;
 int FUNC_21 (int *,int *,int *,int *,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ,TYPE_4__*,int ) ;
 int FUNC_24 (int *,int ,TYPE_4__*,int ,int *,TYPE_2__*) ;
 size_t FUNC_25 (int *,int *,int *,int *,size_t,TYPE_3__*) ;

size_t FUNC_26(client *VAR_4, stream *VAR_5, streamID *VAR_6, streamID *VAR_7, size_t VAR_8, int VAR_9, streamCG *VAR_10, streamConsumer *VAR_11, int VAR_12, streamPropInfo *VAR_13) {
    void *VAR_14 = ((void*)0);
    size_t VAR_15 = 0;
    streamIterator VAR_16;
    int64_t VAR_17;
    streamID VAR_18;
    int VAR_19 = 0;






    if (VAR_10 && (VAR_12 & VAR_0)) {
        return FUNC_25(VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,
                                                   VAR_11);
    }

    if (!(VAR_12 & VAR_2))
        VAR_14 = FUNC_2(VAR_4);
    FUNC_21(&VAR_16,VAR_5,VAR_6,VAR_7,VAR_9);
    while(FUNC_20(&VAR_16,&VAR_18,&VAR_17)) {

        if (VAR_10 && FUNC_15(&VAR_18,&VAR_10->last_id) > 0) {
            VAR_10->last_id = VAR_18;
            VAR_19 = 1;
        }



        FUNC_0(VAR_4,2);
        FUNC_4(VAR_4,&VAR_18);

        FUNC_3(VAR_4,VAR_17);


        while(VAR_17--) {
            unsigned char *VAR_20, *VAR_21;
            int64_t VAR_22, VAR_23;
            FUNC_19(&VAR_16,&VAR_20,&VAR_21,&VAR_22,&VAR_23);
            FUNC_1(VAR_4,VAR_20,VAR_22);
            FUNC_1(VAR_4,VAR_21,VAR_23);
        }
        if (VAR_10 && !(VAR_12 & VAR_1)) {
            unsigned char VAR_24[sizeof(streamID)];
            FUNC_17(VAR_24,&VAR_18);




            streamNACK *VAR_25 = FUNC_16(VAR_11);
            int VAR_26 =
                FUNC_11(VAR_10->pel,VAR_24,sizeof(VAR_24),VAR_25,((void*)0));
            int VAR_27 =
                FUNC_11(VAR_11->pel,VAR_24,sizeof(VAR_24),VAR_25,((void*)0));




            if (VAR_26 == 0) {
                FUNC_18(VAR_25);
                VAR_25 = FUNC_8(VAR_10->pel,VAR_24,sizeof(VAR_24));
                FUNC_12(VAR_25 != VAR_3);
                FUNC_10(VAR_25->consumer->pel,VAR_24,sizeof(VAR_24),((void*)0));

                VAR_25->consumer = VAR_11;
                VAR_25->delivery_time = FUNC_7();
                VAR_25->delivery_count = 1;

                FUNC_9(VAR_11->pel,VAR_24,sizeof(VAR_24),VAR_25,((void*)0));
            } else if (VAR_26 == 1 && VAR_27 == 0) {
                FUNC_13("NACK half-created. Should not be possible.");
            }


            if (VAR_13) {
                robj *VAR_28 = FUNC_5(&VAR_18);
                FUNC_24(VAR_4,VAR_13->keyname,VAR_10,VAR_13->groupname,VAR_28,VAR_25);
                FUNC_6(VAR_28);
            }
        } else {
            if (VAR_19)
                FUNC_23(VAR_4,VAR_13->keyname,VAR_10,VAR_13->groupname);
        }

        VAR_15++;
        if (VAR_8 && VAR_8 == VAR_15) break;
    }
    FUNC_22(&VAR_16);
    if (VAR_14) FUNC_14(VAR_4,VAR_14,VAR_15);
    return VAR_15;
}

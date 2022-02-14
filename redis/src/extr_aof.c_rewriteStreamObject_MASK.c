
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ pel; scalar_t__ consumers; int last_id; } ;
typedef TYPE_1__ streamNACK ;
typedef int streamIterator ;
typedef int streamID ;
typedef TYPE_1__ streamConsumer ;
typedef TYPE_1__ streamCG ;
struct TYPE_19__ {scalar_t__ cgroups; int last_id; scalar_t__ length; } ;
typedef TYPE_4__ stream ;
struct TYPE_20__ {TYPE_4__* ptr; } ;
typedef TYPE_5__ robj ;
typedef int rio ;
struct TYPE_21__ {int key_len; scalar_t__ key; TYPE_1__* data; } ;
typedef TYPE_6__ raxIterator ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,char*,int *,int ) ;
 int FUNC_2 (TYPE_6__*,scalar_t__) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (int *,char,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;
 scalar_t__ FUNC_8 (int *,TYPE_5__*,char*,int,TYPE_1__*,scalar_t__,TYPE_1__*) ;
 int FUNC_9 (int *,unsigned char**,unsigned char**,int*,int*) ;
 scalar_t__ FUNC_10 (int *,int *,int*) ;
 int FUNC_11 (int *,TYPE_4__*,int *,int *,int ) ;
 int FUNC_12 (int *) ;

int FUNC_13(rio *VAR_0, robj *VAR_1, robj *VAR_2) {
    stream *VAR_3 = VAR_2->ptr;
    streamIterator VAR_4;
    FUNC_11(&VAR_4,VAR_3,((void*)0),((void*)0),0);
    streamID VAR_5;
    int64_t VAR_6;

    if (VAR_3->length) {

        while(FUNC_10(&VAR_4,&VAR_5,&VAR_6)) {




            if (FUNC_4(VAR_0,'*',3+VAR_6*2) == 0) return 0;
            if (FUNC_7(VAR_0,"XADD",4) == 0) return 0;
            if (FUNC_5(VAR_0,VAR_1) == 0) return 0;
            if (FUNC_6(VAR_0,&VAR_5) == 0) return 0;
            while(VAR_6--) {
                unsigned char *VAR_7, *VAR_8;
                int64_t VAR_9, VAR_10;
                FUNC_9(&VAR_4,&VAR_7,&VAR_8,&VAR_9,&VAR_10);
                if (FUNC_7(VAR_0,(char*)VAR_7,VAR_9) == 0) return 0;
                if (FUNC_7(VAR_0,(char*)VAR_8,VAR_10) == 0) return 0;
            }
        }
    } else {



        if (FUNC_4(VAR_0,'*',7) == 0) return 0;
        if (FUNC_7(VAR_0,"XADD",4) == 0) return 0;
        if (FUNC_5(VAR_0,VAR_1) == 0) return 0;
        if (FUNC_7(VAR_0,"MAXLEN",6) == 0) return 0;
        if (FUNC_7(VAR_0,"0",1) == 0) return 0;
        if (FUNC_6(VAR_0,&VAR_3->last_id) == 0) return 0;
        if (FUNC_7(VAR_0,"x",1) == 0) return 0;
        if (FUNC_7(VAR_0,"y",1) == 0) return 0;
    }



    if (FUNC_4(VAR_0,'*',3) == 0) return 0;
    if (FUNC_7(VAR_0,"XSETID",6) == 0) return 0;
    if (FUNC_5(VAR_0,VAR_1) == 0) return 0;
    if (FUNC_6(VAR_0,&VAR_3->last_id) == 0) return 0;



    if (VAR_3->cgroups) {
        raxIterator VAR_11;
        FUNC_2(&VAR_11,VAR_3->cgroups);
        FUNC_1(&VAR_11,"^",((void*)0),0);
        while(FUNC_0(&VAR_11)) {
            streamCG *VAR_12 = VAR_11.data;

            if (FUNC_4(VAR_0,'*',5) == 0) return 0;
            if (FUNC_7(VAR_0,"XGROUP",6) == 0) return 0;
            if (FUNC_7(VAR_0,"CREATE",6) == 0) return 0;
            if (FUNC_5(VAR_0,VAR_1) == 0) return 0;
            if (FUNC_7(VAR_0,(char*)VAR_11.key,VAR_11.key_len) == 0) return 0;
            if (FUNC_6(VAR_0,&VAR_12->last_id) == 0) return 0;




            raxIterator VAR_13;
            FUNC_2(&VAR_13,VAR_12->consumers);
            FUNC_1(&VAR_13,"^",((void*)0),0);
            while(FUNC_0(&VAR_13)) {
                streamConsumer *VAR_14 = VAR_13.data;


                raxIterator VAR_15;
                FUNC_2(&VAR_15,VAR_14->pel);
                FUNC_1(&VAR_15,"^",((void*)0),0);
                while(FUNC_0(&VAR_15)) {
                    streamNACK *VAR_16 = VAR_15.data;
                    if (FUNC_8(VAR_0,VAR_1,(char*)VAR_11.key,
                                                   VAR_11.key_len,VAR_14,
                                                   VAR_15.key,VAR_16) == 0)
                    {
                        return 0;
                    }
                }
                FUNC_3(&VAR_15);
            }
            FUNC_3(&VAR_13);
        }
        FUNC_3(&VAR_11);
    }

    FUNC_12(&VAR_4);
    return 1;
}

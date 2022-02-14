
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;


struct TYPE_24__ {TYPE_1__* consumer; } ;
typedef TYPE_2__ streamNACK ;
typedef int streamID ;
struct TYPE_25__ {int pel; } ;
typedef TYPE_3__ streamCG ;
struct TYPE_26__ {int ptr; } ;
typedef TYPE_4__ robj ;
struct TYPE_27__ {int argc; TYPE_8__** argv; int db; } ;
typedef TYPE_5__ client ;
typedef int buf ;
struct TYPE_28__ {int ptr; } ;
struct TYPE_23__ {int pel; } ;
struct TYPE_22__ {int dirty; } ;
struct TYPE_21__ {int czero; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_3 (int ,TYPE_8__*) ;
 TYPE_2__* FUNC_4 (int ,unsigned char*,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (int ,unsigned char*,int,int *) ;
 TYPE_12__ VAR_3 ;
 TYPE_11__ VAR_4 ;
 int FUNC_6 (unsigned char*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_3__* FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_5__*,TYPE_8__*,int *,int ) ;

void FUNC_10(client *VAR_5) {
    streamCG *VAR_6 = ((void*)0);
    robj *VAR_7 = FUNC_3(VAR_5->db,VAR_5->argv[1]);
    if (VAR_7) {
        if (FUNC_2(VAR_5,VAR_7,VAR_1)) return;
        VAR_6 = FUNC_8(VAR_7->ptr,VAR_5->argv[2]->ptr);
    }


    if (VAR_7 == ((void*)0) || VAR_6 == ((void*)0)) {
        FUNC_0(VAR_5,VAR_4.czero);
        return;
    }

    int VAR_8 = 0;
    for (int VAR_9 = 3; VAR_9 < VAR_5->argc; VAR_9++) {
        streamID VAR_10;
        unsigned char VAR_11[sizeof(streamID)];
        if (FUNC_9(VAR_5,VAR_5->argv[VAR_9],&VAR_10,0) != VAR_0) return;
        FUNC_6(VAR_11,&VAR_10);




        streamNACK *VAR_12 = FUNC_4(VAR_6->pel,VAR_11,sizeof(VAR_11));
        if (VAR_12 != VAR_2) {
            FUNC_5(VAR_6->pel,VAR_11,sizeof(VAR_11),((void*)0));
            FUNC_5(VAR_12->consumer->pel,VAR_11,sizeof(VAR_11),((void*)0));
            FUNC_7(VAR_12);
            VAR_8++;
            VAR_3.dirty++;
        }
    }
    FUNC_1(VAR_5,VAR_8);
}

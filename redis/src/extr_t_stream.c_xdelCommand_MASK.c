
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int streamID ;
typedef int stream ;
struct TYPE_13__ {int * ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_14__ {int argc; TYPE_5__* db; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_17__ {int dirty; } ;
struct TYPE_16__ {int czero; } ;
struct TYPE_15__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_4 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int *,int ) ;

void FUNC_7(client *VAR_5) {
    robj *VAR_6;

    if ((VAR_6 = FUNC_2(VAR_5,VAR_5->argv[1],VAR_4.czero)) == ((void*)0)
        || FUNC_1(VAR_5,VAR_6,VAR_2)) return;
    stream *VAR_7 = VAR_6->ptr;




    streamID VAR_8;
    for (int VAR_9 = 2; VAR_9 < VAR_5->argc; VAR_9++) {
        if (FUNC_6(VAR_5,VAR_5->argv[VAR_9],&VAR_8,0) != VAR_0) return;
    }


    int VAR_10 = 0;
    for (int VAR_11 = 2; VAR_11 < VAR_5->argc; VAR_11++) {
        FUNC_6(VAR_5,VAR_5->argv[VAR_11],&VAR_8,0);
        VAR_10 += FUNC_5(VAR_7,&VAR_8);
    }


    if (VAR_10) {
        FUNC_4(VAR_5->db,VAR_5->argv[1]);
        FUNC_3(VAR_1,"xdel",VAR_5->argv[1],VAR_5->db->id);
        VAR_3.dirty += VAR_10;
    }
    FUNC_0(VAR_5,VAR_10);
}

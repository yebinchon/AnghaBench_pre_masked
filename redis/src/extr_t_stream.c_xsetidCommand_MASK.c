
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int streamIterator ;
typedef int streamID ;
struct TYPE_17__ {scalar_t__ length; int last_id; } ;
typedef TYPE_2__ stream ;
struct TYPE_18__ {TYPE_2__* ptr; } ;
typedef TYPE_3__ robj ;
typedef int int64_t ;
struct TYPE_19__ {TYPE_1__* db; int * argv; } ;
typedef TYPE_4__ client ;
struct TYPE_21__ {int dirty; } ;
struct TYPE_20__ {int ok; int nokeyerr; } ;
struct TYPE_16__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 TYPE_9__ VAR_3 ;
 TYPE_8__ VAR_4 ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,TYPE_2__*,int *,int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,int *,int ) ;

void FUNC_10(client *VAR_5) {
    robj *VAR_6 = FUNC_3(VAR_5,VAR_5->argv[1],VAR_4.nokeyerr);
    if (VAR_6 == ((void*)0) || FUNC_2(VAR_5,VAR_6,VAR_2)) return;

    stream *VAR_7 = VAR_6->ptr;
    streamID VAR_8;
    if (FUNC_9(VAR_5,VAR_5->argv[2],&VAR_8,0) != VAR_0) return;




    if (VAR_7->length > 0) {
        streamID VAR_9;
        streamIterator VAR_10;
        FUNC_7(&VAR_10,VAR_7,((void*)0),((void*)0),1);
        int64_t VAR_11;
        FUNC_6(&VAR_10,&VAR_9,&VAR_11);
        FUNC_8(&VAR_10);

        if (FUNC_5(&VAR_8,&VAR_9) < 0) {
            FUNC_1(VAR_5,"The ID specified in XSETID is smaller than the "
                            "target stream top item");
            return;
        }
    }
    VAR_7->last_id = VAR_8;
    FUNC_0(VAR_5,VAR_4.ok);
    VAR_3.dirty++;
    FUNC_4(VAR_1,"xsetid",VAR_5->argv[1],VAR_5->db->id);
}

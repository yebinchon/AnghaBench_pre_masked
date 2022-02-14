
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_29__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_30__ {TYPE_4__* db; TYPE_5__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_34__ {int dirty; } ;
struct TYPE_33__ {int czero; } ;
struct TYPE_32__ {scalar_t__ ptr; } ;
struct TYPE_31__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,long) ;
 scalar_t__ FUNC_3 (TYPE_2__*,long) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_4__*,TYPE_5__*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_5__*,long*,int *) ;
 TYPE_1__* FUNC_9 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_10 (char*,scalar_t__,long) ;
 int FUNC_11 (int ,char*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,long) ;
 long FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *,long) ;
 TYPE_8__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_15 (TYPE_4__*,TYPE_5__*) ;
 size_t FUNC_16 (TYPE_1__*) ;

void FUNC_17(client *VAR_5) {
    robj *VAR_6;
    long VAR_7;
    sds VAR_8 = VAR_5->argv[3]->ptr;

    if (FUNC_8(VAR_5,VAR_5->argv[2],&VAR_7,((void*)0)) != VAR_0)
        return;

    if (VAR_7 < 0) {
        FUNC_1(VAR_5,"offset is out of range");
        return;
    }

    VAR_6 = FUNC_9(VAR_5->db,VAR_5->argv[1]);
    if (VAR_6 == ((void*)0)) {

        if (FUNC_13(VAR_8) == 0) {
            FUNC_0(VAR_5,VAR_4.czero);
            return;
        }


        if (FUNC_3(VAR_5,VAR_7+FUNC_13(VAR_8)) != VAR_0)
            return;

        VAR_6 = FUNC_5(VAR_2,FUNC_14(((void*)0), VAR_7+FUNC_13(VAR_8)));
        FUNC_6(VAR_5->db,VAR_5->argv[1],VAR_6);
    } else {
        size_t VAR_9;


        if (FUNC_4(VAR_5,VAR_6,VAR_2))
            return;


        VAR_9 = FUNC_16(VAR_6);
        if (FUNC_13(VAR_8) == 0) {
            FUNC_2(VAR_5,VAR_9);
            return;
        }


        if (FUNC_3(VAR_5,VAR_7+FUNC_13(VAR_8)) != VAR_0)
            return;


        VAR_6 = FUNC_7(VAR_5->db,VAR_5->argv[1],VAR_6);
    }

    if (FUNC_13(VAR_8) > 0) {
        VAR_6->ptr = FUNC_12(VAR_6->ptr,VAR_7+FUNC_13(VAR_8));
        FUNC_10((char*)VAR_6->ptr+VAR_7,VAR_8,FUNC_13(VAR_8));
        FUNC_15(VAR_5->db,VAR_5->argv[1]);
        FUNC_11(VAR_1,
            "setrange",VAR_5->argv[1],VAR_5->db->id);
        VAR_3.dirty++;
    }
    FUNC_2(VAR_5,FUNC_13(VAR_6->ptr));
}

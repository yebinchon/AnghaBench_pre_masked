
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef char* sds ;
struct TYPE_26__ {int ptr; } ;
typedef TYPE_1__ robj ;
typedef int int64_t ;
struct TYPE_27__ {int argc; size_t resp; int * argv; TYPE_5__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_29__ {int * null; int syntaxerr; } ;
struct TYPE_28__ {int id; } ;
struct TYPE_25__ {int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (char*,int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int *) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int,TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_11 (char*) ;
 TYPE_10__ VAR_4 ;
 int FUNC_12 (TYPE_1__*,char**,int *) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_6__ VAR_5 ;
 int FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (TYPE_2__*) ;

void FUNC_17(client *VAR_6) {
    robj *VAR_7, *VAR_8, *VAR_9;
    sds VAR_10;
    int64_t VAR_11;
    int VAR_12;

    if (VAR_6->argc == 3) {
        FUNC_16(VAR_6);
        return;
    } else if (VAR_6->argc > 3) {
        FUNC_0(VAR_6,VAR_5.syntaxerr);
        return;
    }



    if ((VAR_7 = FUNC_8(VAR_6,VAR_6->argv[1],VAR_5.null[VAR_6->resp]))
         == ((void*)0) || FUNC_2(VAR_6,VAR_7,VAR_3)) return;


    VAR_12 = FUNC_12(VAR_7,&VAR_10,&VAR_11);


    if (VAR_12 == VAR_2) {
        VAR_8 = FUNC_4(VAR_11);
        VAR_7->ptr = FUNC_7(VAR_7->ptr,VAR_11,((void*)0));
    } else {
        VAR_8 = FUNC_3(VAR_10,FUNC_11(VAR_10));
        FUNC_13(VAR_7,VAR_8->ptr);
    }

    FUNC_9(VAR_1,"spop",VAR_6->argv[1],VAR_6->db->id);


    VAR_9 = FUNC_3("SREM",4);
    FUNC_10(VAR_6,3,VAR_9,VAR_6->argv[1],VAR_8);
    FUNC_6(VAR_9);


    FUNC_1(VAR_6,VAR_8);
    FUNC_6(VAR_8);


    if (FUNC_14(VAR_7) == 0) {
        FUNC_5(VAR_6->db,VAR_6->argv[1]);
        FUNC_9(VAR_0,"del",VAR_6->argv[1],VAR_6->db->id);
    }


    FUNC_15(VAR_6->db,VAR_6->argv[1]);
    VAR_4.dirty++;
}

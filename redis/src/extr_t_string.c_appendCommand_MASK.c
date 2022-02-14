
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_27__ {TYPE_6__* db; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_29__ {int dirty; } ;
struct TYPE_28__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_6__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_6__*,TYPE_1__*) ;
 int FUNC_7 (int ,char*,TYPE_1__*,int ) ;
 int FUNC_8 (int ,int ,size_t) ;
 size_t FUNC_9 (int ) ;
 TYPE_8__ VAR_3 ;
 int FUNC_10 (TYPE_6__*,TYPE_1__*) ;
 size_t FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;

void FUNC_13(client *VAR_4) {
    size_t VAR_5;
    robj *VAR_6, *VAR_7;

    VAR_6 = FUNC_6(VAR_4->db,VAR_4->argv[1]);
    if (VAR_6 == ((void*)0)) {

        VAR_4->argv[2] = FUNC_12(VAR_4->argv[2]);
        FUNC_3(VAR_4->db,VAR_4->argv[1],VAR_4->argv[2]);
        FUNC_5(VAR_4->argv[2]);
        VAR_5 = FUNC_11(VAR_4->argv[2]);
    } else {

        if (FUNC_2(VAR_4,VAR_6,VAR_2))
            return;


        VAR_7 = VAR_4->argv[2];
        VAR_5 = FUNC_11(VAR_6)+FUNC_9(VAR_7->ptr);
        if (FUNC_1(VAR_4,VAR_5) != VAR_0)
            return;


        VAR_6 = FUNC_4(VAR_4->db,VAR_4->argv[1],VAR_6);
        VAR_6->ptr = FUNC_8(VAR_6->ptr,VAR_7->ptr,FUNC_9(VAR_7->ptr));
        VAR_5 = FUNC_9(VAR_6->ptr);
    }
    FUNC_10(VAR_4->db,VAR_4->argv[1]);
    FUNC_7(VAR_1,"append",VAR_4->argv[1],VAR_4->db->id);
    VAR_3.dirty++;
    FUNC_0(VAR_4,VAR_5);
}

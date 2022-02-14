
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_11__ {scalar_t__ ptr; } ;
typedef TYPE_2__ robj ;
typedef int dictEntry ;
struct TYPE_12__ {int argc; TYPE_1__* db; int * argv; } ;
typedef TYPE_3__ client ;
struct TYPE_13__ {TYPE_3__* current_client; } ;
struct TYPE_10__ {int dict; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ,scalar_t__) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int,char*) ;

void FUNC_10(void) {
    if (VAR_2.current_client == ((void*)0)) return;

    client *VAR_3 = VAR_2.current_client;
    sds VAR_4;
    int VAR_5;

    FUNC_9(VAR_1|VAR_0, "\n------ CURRENT CLIENT INFO ------\n");
    VAR_4 = FUNC_0(FUNC_5(),VAR_3);
    FUNC_7(VAR_1|VAR_0,"%s\n", VAR_4);
    FUNC_6(VAR_4);
    for (VAR_5 = 0; VAR_5 < VAR_3->argc; VAR_5++) {
        robj *VAR_6;

        VAR_6 = FUNC_4(VAR_3->argv[VAR_5]);
        FUNC_7(VAR_1|VAR_0,"argv[%d]: '%s'\n", VAR_5,
            (char*)VAR_6->ptr);
        FUNC_1(VAR_6);
    }


    if (VAR_3->argc >= 1) {
        robj *VAR_7, *VAR_8;
        dictEntry *VAR_9;

        VAR_8 = FUNC_4(VAR_3->argv[1]);
        VAR_9 = FUNC_2(VAR_3->db->dict, VAR_8->ptr);
        if (VAR_9) {
            VAR_7 = FUNC_3(VAR_9);
            FUNC_7(VAR_1,"key '%s' found in DB containing the following object:", (char*)VAR_8->ptr);
            FUNC_8(VAR_7);
        }
        FUNC_1(VAR_8);
    }
}

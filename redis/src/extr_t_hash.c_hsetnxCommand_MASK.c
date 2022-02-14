
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int robj ;
struct TYPE_12__ {TYPE_2__* db; TYPE_3__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_16__ {int dirty; } ;
struct TYPE_15__ {int cone; int czero; } ;
struct TYPE_14__ {int ptr; } ;
struct TYPE_13__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,TYPE_3__**,int,int) ;
 int FUNC_5 (int ,char*,TYPE_3__*,int ) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;

void FUNC_7(client *VAR_4) {
    robj *VAR_5;
    if ((VAR_5 = FUNC_2(VAR_4,VAR_4->argv[1])) == ((void*)0)) return;
    FUNC_4(VAR_5,VAR_4->argv,2,3);

    if (FUNC_1(VAR_5, VAR_4->argv[2]->ptr)) {
        FUNC_0(VAR_4, VAR_3.czero);
    } else {
        FUNC_3(VAR_5,VAR_4->argv[2]->ptr,VAR_4->argv[3]->ptr,VAR_0);
        FUNC_0(VAR_4, VAR_3.cone);
        FUNC_6(VAR_4->db,VAR_4->argv[1]);
        FUNC_5(VAR_1,"hset",VAR_4->argv[1],VAR_4->db->id);
        VAR_2.dirty++;
    }
}

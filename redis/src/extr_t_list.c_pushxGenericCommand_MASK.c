
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {int argc; TYPE_2__* db; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_12__ {int dirty; } ;
struct TYPE_11__ {int czero; } ;
struct TYPE_10__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_6 (TYPE_2__*,int ) ;

void FUNC_7(client *VAR_5, int VAR_6) {
    int VAR_7, VAR_8 = 0;
    robj *VAR_9;

    if ((VAR_9 = FUNC_4(VAR_5,VAR_5->argv[1],VAR_4.czero)) == ((void*)0) ||
        FUNC_1(VAR_5,VAR_9,VAR_2)) return;

    for (VAR_7 = 2; VAR_7 < VAR_5->argc; VAR_7++) {
        FUNC_3(VAR_9,VAR_5->argv[VAR_7],VAR_6);
        VAR_8++;
    }

    FUNC_0(VAR_5,FUNC_2(VAR_9));

    if (VAR_8) {
        char *VAR_10 = (VAR_6 == VAR_0) ? "lpush" : "rpush";
        FUNC_6(VAR_5->db,VAR_5->argv[1]);
        FUNC_5(VAR_1,VAR_10,VAR_5->argv[1],VAR_5->db->id);
    }
    VAR_3.dirty += VAR_8;
}

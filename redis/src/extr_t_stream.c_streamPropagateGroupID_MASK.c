
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int last_id; } ;
typedef TYPE_2__ streamCG ;
typedef int robj ;
struct TYPE_9__ {TYPE_1__* db; } ;
typedef TYPE_3__ client ;
struct TYPE_10__ {int xgroupCommand; } ;
struct TYPE_7__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int **,int,int) ;
 TYPE_6__ VAR_2 ;

void FUNC_4(client *VAR_3, robj *VAR_4, streamCG *VAR_5, robj *VAR_6) {
    robj *VAR_7[5];
    VAR_7[0] = FUNC_1("XGROUP",6);
    VAR_7[1] = FUNC_1("SETID",5);
    VAR_7[2] = VAR_4;
    VAR_7[3] = VAR_6;
    VAR_7[4] = FUNC_0(&VAR_5->last_id);
    FUNC_3(VAR_2.xgroupCommand,VAR_3->db->id,VAR_7,5,VAR_0|VAR_1);
    FUNC_2(VAR_7[0]);
    FUNC_2(VAR_7[1]);
    FUNC_2(VAR_7[4]);
}

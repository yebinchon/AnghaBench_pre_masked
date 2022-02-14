
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_7__ {scalar_t__ aof_state; int slaves; int delCommand; } ;
struct TYPE_6__ {int * del; int * unlink; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int **,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int **,int) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_4(redisDb *VAR_3, robj *VAR_4, int VAR_5) {
    robj *VAR_6[2];

    VAR_6[0] = VAR_5 ? VAR_2.unlink : VAR_2.del;
    VAR_6[1] = VAR_4;
    FUNC_2(VAR_6[0]);
    FUNC_2(VAR_6[1]);

    if (VAR_1.aof_state != VAR_0)
        FUNC_1(VAR_1.delCommand,VAR_3->id,VAR_6,2);
    FUNC_3(VAR_1.slaves,VAR_3->id,VAR_6,2);

    FUNC_0(VAR_6[0]);
    FUNC_0(VAR_6[1]);
}

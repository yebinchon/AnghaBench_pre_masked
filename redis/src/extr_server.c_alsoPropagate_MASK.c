
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redisCommand {int dummy; } ;
typedef int robj ;
struct TYPE_2__ {int also_propagate; scalar_t__ loading; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct redisCommand*,int,int **,int,int) ;
 TYPE_1__ VAR_0 ;
 int ** FUNC_2 (int) ;

void FUNC_3(struct redisCommand *VAR_1, int VAR_2, robj **VAR_3, int VAR_4,
                   int VAR_5)
{
    robj **VAR_6;
    int VAR_7;

    if (VAR_0.loading) return;

    VAR_6 = FUNC_2(sizeof(robj*)*VAR_4);
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_6[VAR_7] = VAR_3[VAR_7];
        FUNC_0(VAR_3[VAR_7]);
    }
    FUNC_1(&VAR_0.also_propagate,VAR_1,VAR_2,VAR_6,VAR_4,VAR_5);
}

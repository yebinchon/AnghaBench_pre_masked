
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int expires; int dict; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_7__ {int dbnum; TYPE_1__* db; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(redisDb *VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_3) {

        FUNC_1(VAR_1.db,-1,VAR_4,VAR_0);
        for (int VAR_5=0; VAR_5<VAR_1.dbnum; VAR_5++) {
            FUNC_0(VAR_1.db[VAR_5].dict);
            FUNC_0(VAR_1.db[VAR_5].expires);
            VAR_1.db[VAR_5] = VAR_2[VAR_5];
        }
    } else {

        FUNC_1(VAR_2,-1,VAR_4,VAR_0);
        for (int VAR_6=0; VAR_6<VAR_1.dbnum; VAR_6++) {
            FUNC_0(VAR_2[VAR_6].dict);
            FUNC_0(VAR_2[VAR_6].expires);
        }
    }
    FUNC_2(VAR_2);
}

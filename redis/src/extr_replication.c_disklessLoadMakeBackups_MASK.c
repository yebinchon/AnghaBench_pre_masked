
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* expires; void* dict; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_6__ {int dbnum; TYPE_1__* db; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int *) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;

redisDb *FUNC_2(void) {
    redisDb *VAR_3 = FUNC_1(sizeof(redisDb)*VAR_2.dbnum);
    for (int VAR_4=0; VAR_4<VAR_2.dbnum; VAR_4++) {
        VAR_3[VAR_4] = VAR_2.db[VAR_4];
        VAR_2.db[VAR_4].dict = FUNC_0(&VAR_0,((void*)0));
        VAR_2.db[VAR_4].expires = FUNC_0(&VAR_1,((void*)0));
    }
    return VAR_3;
}

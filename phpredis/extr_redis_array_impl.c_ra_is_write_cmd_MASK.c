
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_3__ {int pure_cmds; } ;
typedef TYPE_1__ RedisArray ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char FUNC_2 (char const) ;
 int FUNC_3 (int ,char*,int) ;

zend_bool
FUNC_4(RedisArray *VAR_0, const char *VAR_1, int VAR_2) {

    zend_bool VAR_3;
    int VAR_4;
    char *VAR_5 = FUNC_1(1 + VAR_2);

    for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
        VAR_5[VAR_4] = FUNC_2(VAR_1[VAR_4]);
    VAR_5[VAR_2] = 0;

    VAR_3 = FUNC_3(VAR_0->pure_cmds, VAR_5, VAR_2);

    FUNC_0(VAR_5);
    return !VAR_3;
}

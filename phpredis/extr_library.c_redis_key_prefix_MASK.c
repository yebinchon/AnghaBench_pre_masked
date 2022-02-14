
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * prefix; } ;
typedef TYPE_1__ RedisSock ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*,size_t) ;

int
FUNC_4(RedisSock *VAR_0, char **VAR_1, size_t *VAR_2) {
    int VAR_3;
    char *VAR_4;

    if (VAR_0->prefix == ((void*)0)) {
        return 0;
    }

    VAR_3 = FUNC_0(VAR_0->prefix) + *VAR_2;
    VAR_4 = FUNC_2(1 + VAR_3, 1);
    FUNC_3(VAR_4, FUNC_1(VAR_0->prefix), FUNC_0(VAR_0->prefix));
    FUNC_3(VAR_4 + FUNC_0(VAR_0->prefix), *VAR_1, *VAR_2);

    *VAR_1 = VAR_4;
    *VAR_2 = VAR_3;
    return 1;
}

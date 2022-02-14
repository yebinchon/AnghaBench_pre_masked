
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int auth; } ;
typedef TYPE_1__ RedisSock ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int *,char**,char*,char*,int ,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

int
FUNC_7(RedisSock *VAR_0)
{
    char *VAR_1, *VAR_2;
    int VAR_3, VAR_4;

    VAR_3 = FUNC_5(VAR_0, ((void*)0), &VAR_1, "AUTH", "s",
                             FUNC_1(VAR_0->auth), FUNC_0(VAR_0->auth));

    if (FUNC_4(VAR_0, VAR_1, VAR_3) < 0) {
        FUNC_2(VAR_1);
        return -1;
    }

    FUNC_2(VAR_1);

    VAR_2 = FUNC_3(VAR_0, &VAR_4);
    if (VAR_2 == ((void*)0)) {
        return -1;
    }

    if (FUNC_6(VAR_2, "+OK", 3)) {
        FUNC_2(VAR_2);
        return -1;
    }

    FUNC_2(VAR_2);
    return 0;
}

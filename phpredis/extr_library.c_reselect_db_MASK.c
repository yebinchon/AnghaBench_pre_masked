
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dbNumber; } ;
typedef TYPE_1__ RedisSock ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int *,char**,char*,char*,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(RedisSock *VAR_0) {
    char *VAR_1, *VAR_2;
    int VAR_3, VAR_4;

    VAR_3 = FUNC_3(VAR_0, ((void*)0), &VAR_1, "SELECT", "d",
                             VAR_0->dbNumber);

    if (FUNC_2(VAR_0, VAR_1, VAR_3) < 0) {
        FUNC_0(VAR_1);
        return -1;
    }

    FUNC_0(VAR_1);

    if ((VAR_2 = FUNC_1(VAR_0, &VAR_4)) == ((void*)0)) {
        return -1;
    }

    if (FUNC_4(VAR_2, "+OK", 3)) {
        FUNC_0(VAR_2);
        return -1;
    }

    FUNC_0(VAR_2);
    return 0;
}

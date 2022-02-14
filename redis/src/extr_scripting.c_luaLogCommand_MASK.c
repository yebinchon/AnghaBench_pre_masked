
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;

int FUNC_10(lua_State *VAR_2) {
    int VAR_3, VAR_4 = FUNC_1(VAR_2);
    int VAR_5;
    sds VAR_6;

    if (VAR_4 < 2) {
        FUNC_3(VAR_2, "redis.log() requires two arguments or more.");
        return FUNC_0(VAR_2);
    } else if (!FUNC_2(VAR_2,-VAR_4)) {
        FUNC_3(VAR_2, "First argument must be a number (log level).");
        return FUNC_0(VAR_2);
    }
    VAR_5 = FUNC_5(VAR_2,-VAR_4);
    if (VAR_5 < VAR_0 || VAR_5 > VAR_1) {
        FUNC_3(VAR_2, "Invalid debug level.");
        return FUNC_0(VAR_2);
    }


    VAR_6 = FUNC_7();
    for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++) {
        size_t VAR_7;
        char *VAR_8;

        VAR_8 = (char*)FUNC_4(VAR_2,(-VAR_4)+VAR_3,&VAR_7);
        if (VAR_8) {
            if (VAR_3 != 1) VAR_6 = FUNC_6(VAR_6," ",1);
            VAR_6 = FUNC_6(VAR_6,VAR_8,VAR_7);
        }
    }
    FUNC_9(VAR_5,VAR_6);
    FUNC_8(VAR_6);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int REGISTRY_MACHINE ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*) ;
 int * FUNC_3 (char const*,int ) ;
 int * FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int) ;

REGISTRY_MACHINE *FUNC_6(const char *VAR_1, time_t VAR_2) {
    REGISTRY_MACHINE *VAR_3 = ((void*)0);

    if(FUNC_1(VAR_1 && *VAR_1)) {

        char VAR_4[VAR_0 + 1];
        if(FUNC_5(FUNC_2(VAR_1, VAR_4) == -1))
            FUNC_0("Registry: machine guid '%s' is not a valid guid. Ignoring it.", VAR_1);
        else {
            VAR_1 = VAR_4;
            VAR_3 = FUNC_4(VAR_1);
            if(!VAR_3) VAR_3 = FUNC_3(VAR_1, VAR_2);
        }
    }

    return VAR_3;
}

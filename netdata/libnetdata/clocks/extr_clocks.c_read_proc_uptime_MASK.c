
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int collected_number ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 double FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline collected_number FUNC_8(char *VAR_2) {
    if(FUNC_7(!VAR_1)) {
        VAR_1 = FUNC_4(VAR_2, " \t", VAR_0);
        if(FUNC_7(!VAR_1)) return 0;
    }

    VAR_1 = FUNC_5(VAR_1);
    if(FUNC_7(!VAR_1)) return 0;

    if(FUNC_7(FUNC_1(VAR_1) < 1)) {
        FUNC_0("/proc/uptime has no lines.");
        return 0;
    }
    if(FUNC_7(FUNC_3(VAR_1, 0) < 1)) {
        FUNC_0("/proc/uptime has less than 1 word in it.");
        return 0;
    }

    return (collected_number)(FUNC_6(FUNC_2(VAR_1, 0, 0), ((void*)0)) * 1000.0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RRDCALC_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 char* FUNC_2 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(void) {
    RRDCALC_STATUS VAR_8, VAR_9;


    FUNC_1(&VAR_8, 0, sizeof(RRDCALC_STATUS));
    if(VAR_8 != VAR_5) {
        FUNC_0(VAR_7, "%s is not zero.\n", FUNC_2(VAR_5));
        return 1;
    }

    VAR_8 = VAR_3;
    VAR_9 = VAR_4;
    if(!(VAR_8 < VAR_9)) {
        FUNC_0(VAR_7, "%s is not less than %s\n", FUNC_2(VAR_8), FUNC_2(VAR_9));
        return 1;
    }

    VAR_8 = VAR_4;
    VAR_9 = VAR_5;
    if(!(VAR_8 < VAR_9)) {
        FUNC_0(VAR_7, "%s is not less than %s\n", FUNC_2(VAR_8), FUNC_2(VAR_9));
        return 1;
    }

    VAR_8 = VAR_5;
    VAR_9 = VAR_0;
    if(!(VAR_8 < VAR_9)) {
        FUNC_0(VAR_7, "%s is not less than %s\n", FUNC_2(VAR_8), FUNC_2(VAR_9));
        return 1;
    }

    VAR_8 = VAR_0;
    VAR_9 = VAR_2;
    if(!(VAR_8 < VAR_9)) {
        FUNC_0(VAR_7, "%s is not less than %s\n", FUNC_2(VAR_8), FUNC_2(VAR_9));
        return 1;
    }

    VAR_8 = VAR_2;
    VAR_9 = VAR_6;
    if(!(VAR_8 < VAR_9)) {
        FUNC_0(VAR_7, "%s is not less than %s\n", FUNC_2(VAR_8), FUNC_2(VAR_9));
        return 1;
    }

    VAR_8 = VAR_6;
    VAR_9 = VAR_1;
    if(!(VAR_8 < VAR_9)) {
        FUNC_0(VAR_7, "%s is not less than %s\n", FUNC_2(VAR_8), FUNC_2(VAR_9));
        return 1;
    }

    FUNC_0(VAR_7, "RRDCALC_STATUSes are sortable.\n");

    return 0;
}

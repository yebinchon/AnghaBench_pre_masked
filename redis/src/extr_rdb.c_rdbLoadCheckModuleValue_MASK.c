
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int robj ;
typedef int rio ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,double*) ;
 int FUNC_5 (int *,float*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,scalar_t__*) ;

robj *FUNC_8(rio *VAR_7, char *VAR_8) {
    uint64_t VAR_9;
    while((VAR_9 = FUNC_6(VAR_7,((void*)0))) != VAR_2) {
        if (VAR_9 == VAR_4 ||
            VAR_9 == VAR_6)
        {
            uint64_t VAR_10;
            if (FUNC_7(VAR_7,((void*)0),&VAR_10) == -1) {
                FUNC_2(
                    "Error reading integer from module %s value", VAR_8);
            }
        } else if (VAR_9 == VAR_5) {
            robj *VAR_11 = FUNC_3(VAR_7,VAR_0,((void*)0));
            if (VAR_11 == ((void*)0)) {
                FUNC_2(
                    "Error reading string from module %s value", VAR_8);
            }
            FUNC_1(VAR_11);
        } else if (VAR_9 == VAR_3) {
            float VAR_12;
            if (FUNC_5(VAR_7,&VAR_12) == -1) {
                FUNC_2(
                    "Error reading float from module %s value", VAR_8);
            }
        } else if (VAR_9 == VAR_1) {
            double VAR_13;
            if (FUNC_4(VAR_7,&VAR_13) == -1) {
                FUNC_2(
                    "Error reading double from module %s value", VAR_8);
            }
        }
    }
    return FUNC_0("module-dummy-value",18);
}

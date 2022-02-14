
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFGUID ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

DWORD FUNC_3(REFGUID VAR_17)
{
    if (FUNC_0(VAR_17, &VAR_5)) {
        return VAR_1;
    } else if (FUNC_0(VAR_17, &VAR_15)
            || FUNC_0(VAR_17, &VAR_13)
            || FUNC_0(VAR_17, &VAR_16)
            || FUNC_0(VAR_17, &VAR_12)
            || FUNC_0(VAR_17, &VAR_11)) {
        return VAR_3;
    } else if (FUNC_0(VAR_17, &VAR_10)) {
        return VAR_4;
    } else if (FUNC_0(VAR_17, &VAR_14)
            || FUNC_0(VAR_17, &VAR_7)
            || FUNC_0(VAR_17, &VAR_9)
            || FUNC_0(VAR_17, &VAR_8)) {
        return VAR_0;
    } else if (FUNC_0(VAR_17, &VAR_6)) {
        return VAR_2;
    } else {
        FUNC_1("GUID (%s) is not a known force type\n", FUNC_2(VAR_17));
        return 0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LOGPALETTE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int *,int *,int *,int *) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (char*) ;

BOOL FUNC_3(void)
{


    VAR_20 = FUNC_0((LOGPALETTE*)&VAR_22);
    if (!VAR_20)
    {
        FUNC_2("failed to create a palette \n");
        return VAR_0;
    }

    if (!FUNC_1(1, 9, 9, &VAR_2, &VAR_14, &VAR_8, &VAR_23) ||
        !FUNC_1(4, 5, 5, &VAR_6, &VAR_18, &VAR_12, &VAR_27) ||
        !FUNC_1(8, 5, 5, &VAR_7, &VAR_19, &VAR_13, &VAR_28) ||
        !FUNC_1(16, 8, 8, &VAR_3, &VAR_15, &VAR_9, &VAR_24) ||
        !FUNC_1(24, 8, 8, &VAR_4, &VAR_16, &VAR_10, &VAR_25) ||
        !FUNC_1(32, 8, 8, &VAR_5, &VAR_17, &VAR_11, &VAR_26))
    {
        FUNC_2("failed to create objects \n");
        return VAR_0;
    }

    VAR_21 = VAR_26;

    return VAR_1;
}

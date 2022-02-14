
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DXPARAMETER_TYPE ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

const char *FUNC_2(D3DXPARAMETER_TYPE VAR_20)
{
    switch (VAR_20)
    {
        FUNC_1(VAR_19);
        FUNC_1(VAR_0);
        FUNC_1(VAR_2);
        FUNC_1(VAR_1);
        FUNC_1(VAR_10);
        FUNC_1(VAR_11);
        FUNC_1(VAR_12);
        FUNC_1(VAR_13);
        FUNC_1(VAR_14);
        FUNC_1(VAR_15);
        FUNC_1(VAR_5);
        FUNC_1(VAR_6);
        FUNC_1(VAR_7);
        FUNC_1(VAR_8);
        FUNC_1(VAR_9);
        FUNC_1(VAR_4);
        FUNC_1(VAR_18);
        FUNC_1(VAR_3);
        FUNC_1(VAR_17);
        FUNC_1(VAR_16);
        default:
            FUNC_0("Unrecognized D3DXPARAMETER_TYP %#x.\n", VAR_20);
            return "unrecognized";
    }
}

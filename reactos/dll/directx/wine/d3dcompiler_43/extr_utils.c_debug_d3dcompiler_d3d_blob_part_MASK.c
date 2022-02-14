
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3D_BLOB_PART ;


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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

const char *FUNC_2(D3D_BLOB_PART VAR_12)
{
    switch(VAR_12)
    {
        FUNC_1(VAR_3);
        FUNC_1(VAR_5);
        FUNC_1(VAR_2);
        FUNC_1(VAR_6);
        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_4);
        FUNC_1(VAR_10);
        FUNC_1(VAR_11);
        FUNC_1(VAR_7);
        FUNC_1(VAR_8);
        FUNC_1(VAR_9);
        default:
            FUNC_0("Unrecognized D3D_BLOB_PART %#x\n", VAR_12);
            return "unrecognized";
    }
}

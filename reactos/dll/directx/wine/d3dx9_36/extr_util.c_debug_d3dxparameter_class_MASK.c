
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DXPARAMETER_CLASS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

const char *FUNC_2(D3DXPARAMETER_CLASS VAR_6)
{
    switch (VAR_6)
    {
        FUNC_1(VAR_3);
        FUNC_1(VAR_5);
        FUNC_1(VAR_1);
        FUNC_1(VAR_0);
        FUNC_1(VAR_2);
        FUNC_1(VAR_4);
        default:
            FUNC_0("Unrecognized D3DXPARAMETER_CLASS %#x.\n", VAR_6);
            return "unrecognized";
    }
}

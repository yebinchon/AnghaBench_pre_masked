
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3D_SHADER_VARIABLE_CLASS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

const char *FUNC_2(D3D_SHADER_VARIABLE_CLASS VAR_8)
{
    switch (VAR_8)
    {
        FUNC_1(VAR_5);
        FUNC_1(VAR_7);
        FUNC_1(VAR_3);
        FUNC_1(VAR_2);
        FUNC_1(VAR_4);
        FUNC_1(VAR_6);
        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        default:
            FUNC_0("Unrecognized D3D_SHADER_VARIABLE_CLASS %#x.\n", VAR_8);
            return "unrecognized";
    }
}

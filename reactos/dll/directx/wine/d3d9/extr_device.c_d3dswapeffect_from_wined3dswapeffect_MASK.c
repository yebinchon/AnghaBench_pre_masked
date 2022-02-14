
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_swap_effect { ____Placeholder_wined3d_swap_effect } wined3d_swap_effect ;
typedef int D3DSWAPEFFECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;






__attribute__((used)) static D3DSWAPEFFECT FUNC_1(enum wined3d_swap_effect VAR_5)
{
    switch (VAR_5)
    {
        case 131:
            return VAR_1;
        case 128:
            return VAR_2;
        case 132:
            return VAR_0;
        case 129:
            return VAR_4;
        case 130:
            return VAR_3;
        default:
            FUNC_0("Unhandled swap effect %#x.\n", VAR_5);
            return VAR_2;
    }
}

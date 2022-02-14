
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_swap_effect { ____Placeholder_wined3d_swap_effect } wined3d_swap_effect ;
typedef int D3DSWAPEFFECT ;






 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum wined3d_swap_effect FUNC_1(D3DSWAPEFFECT VAR_4)
{
    switch (VAR_4)
    {
        case 129:
            return VAR_2;
        case 128:
            return VAR_3;
        case 131:
            return VAR_0;
        case 130:
            return VAR_1;
        default:
            FUNC_0("Unhandled swap effect %#x.\n", VAR_4);
            return VAR_3;
    }
}

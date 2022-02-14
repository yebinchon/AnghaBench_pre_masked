
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mp_csp_prim { ____Placeholder_mp_csp_prim } mp_csp_prim ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum mp_csp_prim FUNC_0(int VAR_3, int VAR_4)
{

    if (VAR_3 >= 1280 || VAR_4 > 576)
        return VAR_2;

    switch (VAR_4) {
    case 576:
        return VAR_1;

    case 480:
    case 486:
        return VAR_0;

    default:
        return VAR_2;
    }
}

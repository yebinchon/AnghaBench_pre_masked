
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mp_csp { ____Placeholder_mp_csp } mp_csp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

double FUNC_1(enum mp_csp VAR_2, int VAR_3, int VAR_4)
{
    FUNC_0(VAR_4 >= VAR_3);


    if (!VAR_3)
        return 1;


    if (VAR_2 == VAR_0)
        return ((1LL << VAR_3) - 1.) / ((1LL << VAR_4) - 1.);

    if (VAR_2 == VAR_1)
        return 1;


    return (1LL << VAR_3) / ((1LL << VAR_4) - 1.) * 255 / 256;
}

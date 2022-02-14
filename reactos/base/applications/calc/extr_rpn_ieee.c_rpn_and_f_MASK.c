
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i; long double f; } ;
typedef TYPE_1__ calc_number_t ;


 void* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(calc_number_t *VAR_0, calc_number_t *VAR_1, calc_number_t *VAR_2)
{
    calc_number_t VAR_3, VAR_4;

    VAR_3.i = FUNC_0(VAR_1);
    VAR_4.i = FUNC_0(VAR_2);

    VAR_0->f = (long double)(VAR_3.i & VAR_4.i);
}

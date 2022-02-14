
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_7__ {int is_nan; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_0(calc_number_t *VAR_2, calc_number_t *VAR_3, calc_number_t *VAR_4)
{
    if (VAR_4->i == 0)
        VAR_1.is_nan = VAR_0;
    else
        VAR_2->i = VAR_3->i % VAR_4->i;
}

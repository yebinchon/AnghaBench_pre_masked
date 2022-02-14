
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int f; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_7__ {int is_nan; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int,double*) ;

__attribute__((used)) static void FUNC_1(calc_number_t *VAR_2, calc_number_t *VAR_3, calc_number_t *VAR_4)
{
    double VAR_5;

    if (VAR_4->f == 0)
        VAR_1.is_nan = VAR_0;
    else {
        FUNC_0(VAR_3->f/VAR_4->f, &VAR_5);
        VAR_2->f = VAR_3->f - (VAR_5 * VAR_4->f);
    }
}

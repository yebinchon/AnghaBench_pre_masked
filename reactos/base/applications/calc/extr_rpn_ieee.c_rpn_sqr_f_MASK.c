
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int f; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_7__ {void* is_nan; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(calc_number_t *VAR_2, calc_number_t *VAR_3, calc_number_t *VAR_4)
{
    if (VAR_4->f == 0)
        VAR_1.is_nan = VAR_0;
    else {
        VAR_2->f = FUNC_2(VAR_3->f, 1./VAR_4->f);
        if (FUNC_0(VAR_2->f) == 0 || FUNC_1(VAR_2->f))
            VAR_1.is_nan = VAR_0;
    }
}

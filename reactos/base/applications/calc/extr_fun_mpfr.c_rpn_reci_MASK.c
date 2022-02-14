
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_5__ {int is_nan; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;

void FUNC_2(calc_number_t *VAR_3)
{
    if (FUNC_0(VAR_3->mf) == 0)
        VAR_2.is_nan = VAR_1;
    else
        FUNC_1(VAR_3->mf, 1, VAR_3->mf, VAR_0);
}

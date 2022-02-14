
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_5__ {void* is_nan; } ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(calc_number_t *VAR_3)
{
    if (FUNC_4(VAR_3->mf) < 0) {
        VAR_2.is_nan = VAR_1;
        return;
    }

    FUNC_5(VAR_3->mf, VAR_3->mf);
    if (FUNC_1(VAR_3->mf, VAR_0) == 0)
        VAR_2.is_nan = VAR_1;
    else {
        FUNC_0(VAR_3->mf, FUNC_2(VAR_3->mf, VAR_0), VAR_0);
        if (!FUNC_3(VAR_3->mf)) VAR_2.is_nan = VAR_1;
    }
}

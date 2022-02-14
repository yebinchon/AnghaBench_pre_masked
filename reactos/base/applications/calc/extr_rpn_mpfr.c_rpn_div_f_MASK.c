
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_7__ {int is_nan; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(calc_number_t *VAR_3, calc_number_t *VAR_4, calc_number_t *VAR_5)
{
    if (FUNC_1(VAR_5->mf) == 0)
        VAR_2.is_nan = VAR_1;
    else
        FUNC_0(VAR_3->mf, VAR_4->mf, VAR_5->mf, VAR_0);
}

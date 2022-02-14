
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mpfr_t ;
struct TYPE_6__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_7__ {int is_nan; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_6(calc_number_t *VAR_3, calc_number_t *VAR_4, calc_number_t *VAR_5)
{
    if (FUNC_4(VAR_5->mf) == 0)
        VAR_2.is_nan = VAR_1;
    else {
        mpfr_t VAR_6;

        FUNC_1(VAR_6);
        FUNC_3(VAR_6, VAR_5->mf, VAR_0);
        FUNC_5(VAR_6, 1, VAR_6, VAR_0);
        FUNC_2(VAR_3->mf, VAR_4->mf, VAR_6, VAR_0);
        FUNC_0(VAR_6);
    }
}

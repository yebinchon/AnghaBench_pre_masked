
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpfr_t ;
struct TYPE_4__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_5__ {int degr; int is_nan; } ;





 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void FUNC_7(calc_number_t *VAR_3)
{
    mpfr_t VAR_4, VAR_5;

    if (!FUNC_5(VAR_3->mf)) {
        VAR_2.is_nan = VAR_1;
        return;
    }
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    switch (VAR_2.degr) {
    case 130:
        FUNC_1(VAR_4, VAR_0);
        FUNC_6(VAR_5, 180, VAR_0);
        break;
    case 128:
        FUNC_6(VAR_4, 1, VAR_0);
        FUNC_6(VAR_5, 1, VAR_0);
        break;
    case 129:
        FUNC_1(VAR_4, VAR_0);
        FUNC_6(VAR_5, 200, VAR_0);
        break;
    }
    FUNC_4(VAR_3->mf, VAR_3->mf, VAR_4, VAR_0);
    FUNC_2(VAR_3->mf, VAR_3->mf, VAR_5, VAR_0);

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mpfr_t ;
struct TYPE_7__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_8__ {int is_nan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(calc_number_t *VAR_3)
{
    mpfr_t VAR_4, VAR_5, VAR_6, VAR_7;

    FUNC_8(VAR_3);
    FUNC_0(&VAR_4, &VAR_5, &VAR_6, &VAR_7);

    if (FUNC_6(VAR_3) || !FUNC_2(VAR_3->mf, VAR_4) || !FUNC_2(VAR_3->mf, VAR_7))
        FUNC_7(VAR_3);
    else
    if (!FUNC_2(VAR_3->mf, VAR_6))
        FUNC_4(VAR_3->mf, -1, VAR_0);
    else
    if (!FUNC_2(VAR_3->mf, VAR_5))
        FUNC_4(VAR_3->mf, 1, VAR_0);
    else {
        FUNC_5(VAR_3->mf, VAR_3->mf, VAR_0);
        if (!FUNC_3(VAR_3->mf)) VAR_2.is_nan = VAR_1;
    }
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
}

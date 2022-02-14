
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mf; } ;
struct TYPE_7__ {scalar_t__ next; TYPE_1__ num; } ;
typedef TYPE_2__ statistic_t ;
typedef int mpfr_t ;
struct TYPE_8__ {int mf; } ;
typedef TYPE_3__ calc_number_t ;
struct TYPE_9__ {scalar_t__ base; TYPE_2__* stat; int hStatWnd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ,int ,int ,int ,int ) ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned long,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(calc_number_t *VAR_5, int VAR_6)
{
    mpfr_t VAR_7;
    mpfr_t VAR_8;
    unsigned long VAR_9 = 0;
    statistic_t *VAR_10 = VAR_4.stat;

    VAR_9 = FUNC_0(VAR_4.hStatWnd, VAR_0, VAR_2, 0, 0);
    if (VAR_9 < 2) {
        FUNC_5(VAR_5->mf, 0, VAR_3);
        return;
    }

    FUNC_10(VAR_5->mf);
    FUNC_3(VAR_5->mf, VAR_5->mf, VAR_9, VAR_3);

    FUNC_4(VAR_7);
    FUNC_4(VAR_8);

    FUNC_5(VAR_7, 0, VAR_3);
    VAR_10 = VAR_4.stat;
    while (VAR_10 != ((void*)0)) {
        FUNC_8(VAR_8, VAR_10->num.mf, VAR_5->mf, VAR_3);
        FUNC_6(VAR_8, VAR_8, VAR_3);
        FUNC_1(VAR_7, VAR_7, VAR_8, VAR_3);
        VAR_10 = (statistic_t *)(VAR_10->next);
    }
    FUNC_3(VAR_5->mf, VAR_7, VAR_6 ? VAR_9-1 : VAR_9, VAR_3);
    FUNC_7(VAR_5->mf, VAR_5->mf, VAR_3);

    if (VAR_4.base != VAR_1)
        FUNC_9(VAR_5->mf, VAR_5->mf);

    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
}

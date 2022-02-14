
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mf; } ;
struct TYPE_5__ {scalar_t__ next; TYPE_1__ num; } ;
typedef TYPE_2__ statistic_t ;
typedef int mpfr_t ;
struct TYPE_6__ {TYPE_2__* stat; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(mpfr_t VAR_2)
{
    statistic_t *VAR_3 = VAR_1.stat;
    mpfr_t VAR_4;

    FUNC_2(VAR_4);
    FUNC_4(VAR_2, 0, VAR_0);
    while (VAR_3 != ((void*)0)) {
        FUNC_3(VAR_4, VAR_3->num.mf, VAR_3->num.mf, VAR_0);
        FUNC_0(VAR_2, VAR_2, VAR_4, VAR_0);
        VAR_3 = (statistic_t *)(VAR_3->next);
    }
    FUNC_1(VAR_4);
}

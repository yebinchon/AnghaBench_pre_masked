
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; scalar_t__ next; } ;
typedef TYPE_1__ statistic_t ;
struct TYPE_5__ {TYPE_1__* stat; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
    statistic_t *VAR_1 = VAR_0.stat;

    while (VAR_1 != ((void*)0)) {
        statistic_t *VAR_2 = VAR_1;
        VAR_1 = (statistic_t *)(VAR_1->next);
        FUNC_1(&VAR_2->num);
        FUNC_0(VAR_2);
    }
    VAR_0.stat = VAR_1;
}

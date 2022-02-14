
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int slice; } ;
typedef TYPE_1__ Unit ;
struct TYPE_9__ {scalar_t__ ip_address_deny; scalar_t__ ip_address_allow; scalar_t__ ip_filters_egress; scalar_t__ ip_filters_ingress; scalar_t__ ip_accounting; } ;
typedef TYPE_2__ CGroupContext ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(Unit *VAR_0) {
        CGroupContext *VAR_1;
        Unit *VAR_2;
        FUNC_1(VAR_0);

        VAR_1 = FUNC_2(VAR_0);
        if (!VAR_1)
                return 0;

        if (VAR_1->ip_accounting ||
            VAR_1->ip_address_allow ||
            VAR_1->ip_address_deny ||
            VAR_1->ip_filters_ingress ||
            VAR_1->ip_filters_egress)
                return 1;


        for (VAR_2 = FUNC_0(VAR_0->slice); VAR_2; VAR_2 = FUNC_0(VAR_2->slice)) {
                VAR_1 = FUNC_2(VAR_2);
                if (!VAR_1)
                        return 0;

                if (VAR_1->ip_address_allow ||
                    VAR_1->ip_address_deny)
                        return 1;
        }

        return 0;
}

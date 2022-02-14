
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ip_accounting_ingress_map_fd; scalar_t__ ip_accounting_egress_map_fd; int ip_accounting_extra; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

int FUNC_3(Unit *VAR_0) {
        int VAR_1 = 0, VAR_2 = 0;

        FUNC_0(VAR_0);

        if (VAR_0->ip_accounting_ingress_map_fd >= 0)
                VAR_1 = FUNC_1(VAR_0->ip_accounting_ingress_map_fd);

        if (VAR_0->ip_accounting_egress_map_fd >= 0)
                VAR_2 = FUNC_1(VAR_0->ip_accounting_egress_map_fd);

        FUNC_2(VAR_0->ip_accounting_extra);

        return VAR_1 < 0 ? VAR_1 : VAR_2;
}

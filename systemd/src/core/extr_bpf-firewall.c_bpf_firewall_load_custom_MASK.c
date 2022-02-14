
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ip_bpf_custom_egress; int ip_bpf_custom_ingress; } ;
typedef TYPE_1__ Unit ;
struct TYPE_10__ {scalar_t__ ip_filters_egress; scalar_t__ ip_filters_ingress; } ;
typedef TYPE_2__ CGroupContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;

int FUNC_6(Unit *VAR_2) {
        CGroupContext *VAR_3;
        int VAR_4, VAR_5;

        FUNC_1(VAR_2);

        VAR_3 = FUNC_5(VAR_2);
        if (!VAR_3)
                return 0;

        if (!(VAR_3->ip_filters_ingress || VAR_3->ip_filters_egress))
                return 0;

        VAR_5 = FUNC_2();
        if (VAR_5 < 0)
                return VAR_5;

        if (VAR_5 != VAR_0)
                return FUNC_4(VAR_2, FUNC_0(VAR_1), "BPF_F_ALLOW_MULTI not supported on this manager, cannot attach custom BPF programs.");

        VAR_4 = FUNC_3(VAR_2, VAR_3->ip_filters_ingress, &VAR_2->ip_bpf_custom_ingress);
        if (VAR_4 < 0)
                return VAR_4;
        VAR_4 = FUNC_3(VAR_2, VAR_3->ip_filters_egress, &VAR_2->ip_bpf_custom_egress);
        if (VAR_4 < 0)
                return VAR_4;

        return 0;
}

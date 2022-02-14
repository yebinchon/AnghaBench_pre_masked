
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; void* ip_bpf_egress; void* ip_bpf_ingress; int ip_accounting_egress_map_fd; int ip_accounting_ingress_map_fd; void* ipv6_deny_map_fd; void* ipv4_deny_map_fd; void* ipv6_allow_map_fd; void* ipv4_allow_map_fd; } ;
typedef TYPE_1__ Unit ;
struct TYPE_13__ {int ip_accounting; } ;
typedef TYPE_2__ CGroupContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,void**,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,void**,void**,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_5 () ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (TYPE_1__*,int,char*) ;
 void* FUNC_9 (void*) ;
 TYPE_2__* FUNC_10 (TYPE_1__*) ;

int FUNC_11(Unit *VAR_7) {
        CGroupContext *VAR_8;
        int VAR_9, VAR_10;
        bool VAR_11 = 0, VAR_12 = 0;

        FUNC_1(VAR_7);

        VAR_8 = FUNC_10(VAR_7);
        if (!VAR_8)
                return -VAR_4;

        VAR_10 = FUNC_5();
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == VAR_3)
                return FUNC_7(VAR_7, FUNC_0(VAR_5),
                                            "BPF firewalling not supported on this manager, proceeding without.");
        if (VAR_10 != VAR_2 && VAR_7->type == VAR_6)





                return FUNC_7(VAR_7, FUNC_0(VAR_5),
                                            "BPF_F_ALLOW_MULTI is not supported on this manager, not doing BPF firewall on slice units.");





        VAR_7->ip_bpf_ingress = FUNC_6(VAR_7->ip_bpf_ingress);
        VAR_7->ip_bpf_egress = FUNC_6(VAR_7->ip_bpf_egress);

        VAR_7->ipv4_allow_map_fd = FUNC_9(VAR_7->ipv4_allow_map_fd);
        VAR_7->ipv4_deny_map_fd = FUNC_9(VAR_7->ipv4_deny_map_fd);

        VAR_7->ipv6_allow_map_fd = FUNC_9(VAR_7->ipv6_allow_map_fd);
        VAR_7->ipv6_deny_map_fd = FUNC_9(VAR_7->ipv6_deny_map_fd);

        if (VAR_7->type != VAR_6) {






                VAR_9 = FUNC_3(VAR_7, VAR_0, &VAR_7->ipv4_allow_map_fd, &VAR_7->ipv6_allow_map_fd, &VAR_11);
                if (VAR_9 < 0)
                        return FUNC_8(VAR_7, VAR_9, "Preparation of eBPF allow maps failed: %m");

                VAR_9 = FUNC_3(VAR_7, VAR_1, &VAR_7->ipv4_deny_map_fd, &VAR_7->ipv6_deny_map_fd, &VAR_12);
                if (VAR_9 < 0)
                        return FUNC_8(VAR_7, VAR_9, "Preparation of eBPF deny maps failed: %m");
        }

        VAR_9 = FUNC_4(VAR_7, VAR_8->ip_accounting, &VAR_7->ip_accounting_ingress_map_fd, &VAR_7->ip_accounting_egress_map_fd);
        if (VAR_9 < 0)
                return FUNC_8(VAR_7, VAR_9, "Preparation of eBPF accounting maps failed: %m");

        VAR_9 = FUNC_2(VAR_7, 1, &VAR_7->ip_bpf_ingress, VAR_11, VAR_12);
        if (VAR_9 < 0)
                return FUNC_8(VAR_7, VAR_9, "Compilation for ingress BPF program failed: %m");

        VAR_9 = FUNC_2(VAR_7, 0, &VAR_7->ip_bpf_egress, VAR_11, VAR_12);
        if (VAR_9 < 0)
                return FUNC_8(VAR_7, VAR_9, "Compilation for egress BPF program failed: %m");

        return 0;
}

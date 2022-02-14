
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int route_wakeup_expire; int route_wakeup; int es; } ;
struct TYPE_4__ {int tuntap; int route_ipv6_list; int route_list; } ;
struct context {TYPE_1__ c2; int net_ctx; int plugins; TYPE_2__ c1; int options; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct context*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct context *VAR_1, const bool VAR_2)
{
    FUNC_0(&VAR_1->options, VAR_1->c1.route_list, VAR_1->c1.route_ipv6_list,
             VAR_1->c1.tuntap, VAR_1->plugins, VAR_1->c2.es, &VAR_1->net_ctx);
    FUNC_3();
    FUNC_1(&VAR_1->c2.route_wakeup);
    FUNC_1(&VAR_1->c2.route_wakeup_expire);
    FUNC_2(VAR_1, VAR_2 ? VAR_0 : 0);
}

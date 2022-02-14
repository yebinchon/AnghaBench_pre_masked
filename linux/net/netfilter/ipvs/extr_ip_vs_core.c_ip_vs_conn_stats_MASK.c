
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int cpustats; } ;
struct netns_ipvs {TYPE_4__ tot_stats; } ;
struct TYPE_8__ {int cpustats; } ;
struct ip_vs_service {TYPE_3__ stats; struct netns_ipvs* ipvs; } ;
struct TYPE_10__ {int conns; } ;
struct ip_vs_cpu_stats {int syncp; TYPE_5__ cnt; } ;
struct ip_vs_conn {TYPE_2__* dest; } ;
struct TYPE_6__ {int cpustats; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct ip_vs_cpu_stats* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void
FUNC_5(struct ip_vs_conn *VAR_0, struct ip_vs_service *VAR_1)
{
 struct netns_ipvs *VAR_2 = VAR_1->ipvs;
 struct ip_vs_cpu_stats *VAR_3;

 FUNC_0();

 VAR_3 = FUNC_2(VAR_0->dest->stats.cpustats);
 FUNC_3(&VAR_3->syncp);
 VAR_3->cnt.conns++;
 FUNC_4(&VAR_3->syncp);

 VAR_3 = FUNC_2(VAR_1->stats.cpustats);
 FUNC_3(&VAR_3->syncp);
 VAR_3->cnt.conns++;
 FUNC_4(&VAR_3->syncp);

 VAR_3 = FUNC_2(VAR_2->tot_stats.cpustats);
 FUNC_3(&VAR_3->syncp);
 VAR_3->cnt.conns++;
 FUNC_4(&VAR_3->syncp);

 FUNC_1();
}

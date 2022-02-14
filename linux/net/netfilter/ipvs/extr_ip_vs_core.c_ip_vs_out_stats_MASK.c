
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_7__ {int cpustats; } ;
struct netns_ipvs {TYPE_3__ tot_stats; } ;
struct TYPE_6__ {int cpustats; } ;
struct ip_vs_service {TYPE_2__ stats; } ;
struct TYPE_5__ {int cpustats; } ;
struct ip_vs_dest {int flags; int svc; TYPE_1__ stats; } ;
struct TYPE_8__ {int outbytes; int outpkts; } ;
struct ip_vs_cpu_stats {int syncp; TYPE_4__ cnt; } ;
struct ip_vs_conn {struct netns_ipvs* ipvs; struct ip_vs_dest* dest; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct ip_vs_service* FUNC_2 (int ) ;
 struct ip_vs_cpu_stats* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void
FUNC_6(struct ip_vs_conn *VAR_1, struct sk_buff *VAR_2)
{
 struct ip_vs_dest *VAR_3 = VAR_1->dest;
 struct netns_ipvs *VAR_4 = VAR_1->ipvs;

 if (VAR_3 && (VAR_3->flags & VAR_0)) {
  struct ip_vs_cpu_stats *VAR_5;
  struct ip_vs_service *VAR_6;

  FUNC_0();

  VAR_5 = FUNC_3(VAR_3->stats.cpustats);
  FUNC_4(&VAR_5->syncp);
  VAR_5->cnt.outpkts++;
  VAR_5->cnt.outbytes += VAR_2->len;
  FUNC_5(&VAR_5->syncp);

  VAR_6 = FUNC_2(VAR_3->svc);
  VAR_5 = FUNC_3(VAR_6->stats.cpustats);
  FUNC_4(&VAR_5->syncp);
  VAR_5->cnt.outpkts++;
  VAR_5->cnt.outbytes += VAR_2->len;
  FUNC_5(&VAR_5->syncp);

  VAR_5 = FUNC_3(VAR_4->tot_stats.cpustats);
  FUNC_4(&VAR_5->syncp);
  VAR_5->cnt.outpkts++;
  VAR_5->cnt.outbytes += VAR_2->len;
  FUNC_5(&VAR_5->syncp);

  FUNC_1();
 }
}

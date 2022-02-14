
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_iphdr {int daddr; int saddr; int protocol; } ;
struct ip_vs_conn_param {int dummy; } ;
struct ip_vs_conn {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*,char*,int ,int ,int ) ;
 int FUNC_2 (struct netns_ipvs*,int,struct ip_vs_iphdr const*,struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_3 (struct ip_vs_conn_param*) ;
 scalar_t__ FUNC_4 (struct ip_vs_iphdr const*) ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static struct ip_vs_conn *
FUNC_6(struct netns_ipvs *VAR_0, int VAR_1, const struct sk_buff *VAR_2,
      const struct ip_vs_iphdr *VAR_3)
{
 struct ip_vs_conn *VAR_4;
 struct ip_vs_conn_param VAR_5;

 FUNC_2(VAR_0, VAR_1, VAR_3, &VAR_5);
 VAR_4 = FUNC_3(&VAR_5);
 if (!VAR_4) {
  FUNC_1(12, "Unknown ISAKMP entry for inout packet "
         "%s%s %s->%s\n",
         FUNC_4(VAR_3) ? "ICMP+" : "",
         FUNC_5(VAR_3->protocol)->name,
         FUNC_0(VAR_1, &VAR_3->saddr),
         FUNC_0(VAR_1, &VAR_3->daddr));
 }

 return VAR_4;
}

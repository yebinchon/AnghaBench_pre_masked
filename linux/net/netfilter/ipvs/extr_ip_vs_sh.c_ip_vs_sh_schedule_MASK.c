
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct ip_vs_sh_state {int dummy; } ;
struct ip_vs_service {int flags; int af; scalar_t__ sched_data; } ;
struct ip_vs_iphdr {union nf_inet_addr saddr; union nf_inet_addr daddr; } ;
struct ip_vs_dest {int port; union nf_inet_addr const addr; int af; } ;
typedef int __be16 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,union nf_inet_addr const*) ;
 int FUNC_2 (int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct ip_vs_iphdr*) ;
 int FUNC_4 (struct ip_vs_service*,char*) ;
 struct ip_vs_dest* FUNC_5 (struct ip_vs_service*,struct ip_vs_sh_state*,union nf_inet_addr const*,int ) ;
 struct ip_vs_dest* FUNC_6 (struct ip_vs_service*,struct ip_vs_sh_state*,union nf_inet_addr const*,int ) ;
 int FUNC_7 (struct sk_buff const*,struct ip_vs_iphdr*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static struct ip_vs_dest *
FUNC_9(struct ip_vs_service *VAR_2, const struct sk_buff *VAR_3,
    struct ip_vs_iphdr *VAR_4)
{
 struct ip_vs_dest *VAR_5;
 struct ip_vs_sh_state *VAR_6;
 __be16 VAR_7 = 0;
 const union nf_inet_addr *VAR_8;

 VAR_8 = FUNC_3(VAR_4) ? &VAR_4->daddr : &VAR_4->saddr;

 FUNC_0(6, "ip_vs_sh_schedule(): Scheduling...\n");

 if (VAR_2->flags & VAR_1)
  VAR_7 = FUNC_7(VAR_3, VAR_4);

 VAR_6 = (struct ip_vs_sh_state *) VAR_2->sched_data;

 if (VAR_2->flags & VAR_0)
  VAR_5 = FUNC_6(VAR_2, VAR_6, VAR_8, VAR_7);
 else
  VAR_5 = FUNC_5(VAR_2, VAR_6, VAR_8, VAR_7);

 if (!VAR_5) {
  FUNC_4(VAR_2, "no destination available");
  return ((void*)0);
 }

 FUNC_2(6, "SH: source IP address %s --> server %s:%d\n",
        FUNC_1(VAR_2->af, VAR_8),
        FUNC_1(VAR_5->af, &VAR_5->addr),
        FUNC_8(VAR_5->port));

 return VAR_5;
}

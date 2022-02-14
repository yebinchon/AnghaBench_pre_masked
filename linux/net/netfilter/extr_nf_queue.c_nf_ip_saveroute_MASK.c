
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mark; } ;
struct TYPE_2__ {scalar_t__ hook; } ;
struct nf_queue_entry {TYPE_1__ state; } ;
struct iphdr {int saddr; int daddr; int tos; } ;
struct ip_rt_info {int mark; int saddr; int daddr; int tos; } ;


 scalar_t__ VAR_0 ;
 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 struct ip_rt_info* FUNC_1 (struct nf_queue_entry*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_1,
       struct nf_queue_entry *VAR_2)
{
 struct ip_rt_info *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->state.hook == VAR_0) {
  const struct iphdr *VAR_4 = FUNC_0(VAR_1);

  VAR_3->tos = VAR_4->tos;
  VAR_3->daddr = VAR_4->daddr;
  VAR_3->saddr = VAR_4->saddr;
  VAR_3->mark = VAR_1->mark;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ mark; } ;
struct TYPE_2__ {scalar_t__ hook; int net; } ;
struct nf_queue_entry {TYPE_1__ state; } ;
struct iphdr {scalar_t__ tos; scalar_t__ daddr; scalar_t__ saddr; } ;
struct ip_rt_info {scalar_t__ tos; scalar_t__ mark; scalar_t__ daddr; scalar_t__ saddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 struct ip_rt_info* FUNC_2 (struct nf_queue_entry const*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, const struct nf_queue_entry *VAR_3)
{
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sysctl_ip_default_ttl; } ;
struct net {TYPE_1__ ipv4; } ;
struct iphdr {int version; int ihl; void* daddr; void* saddr; scalar_t__ check; int protocol; int ttl; int frag_off; scalar_t__ id; scalar_t__ tos; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static struct iphdr *
FUNC_3(struct net *VAR_2, struct sk_buff *VAR_3, __be32 VAR_4,
    __be32 VAR_5)
{
 struct iphdr *VAR_6;

 FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_3, sizeof(*VAR_6));
 VAR_6->version = 4;
 VAR_6->ihl = sizeof(*VAR_6) / 4;
 VAR_6->tos = 0;
 VAR_6->id = 0;
 VAR_6->frag_off = FUNC_0(VAR_1);
 VAR_6->ttl = VAR_2->ipv4.sysctl_ip_default_ttl;
 VAR_6->protocol = VAR_0;
 VAR_6->check = 0;
 VAR_6->saddr = VAR_4;
 VAR_6->daddr = VAR_5;

 return VAR_6;
}

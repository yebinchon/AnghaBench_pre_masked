
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int ip_summed; } ;
struct iphdr {int ihl; scalar_t__ protocol; int saddr; int daddr; } ;
struct ip_vs_protocol {int dummy; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_3__ {int ip; } ;
struct ip_vs_conn {int dport; int vport; TYPE_2__ daddr; TYPE_1__ vaddr; } ;
struct icmphdr {scalar_t__ checksum; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int ,struct ip_vs_protocol*,struct sk_buff*,int,char*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct sk_buff *VAR_5, struct ip_vs_protocol *VAR_6,
      struct ip_vs_conn *VAR_7, int VAR_8)
{
 struct iphdr *VAR_9 = FUNC_1(VAR_5);
 unsigned int VAR_10 = VAR_9->ihl*4;
 struct icmphdr *VAR_11 = (struct icmphdr *)(FUNC_4(VAR_5) +
            VAR_10);
 struct iphdr *VAR_12 = (struct iphdr *)(VAR_11 + 1);

 if (VAR_8) {
  VAR_9->saddr = VAR_7->vaddr.ip;
  FUNC_2(VAR_9);
  VAR_12->daddr = VAR_7->vaddr.ip;
  FUNC_2(VAR_12);
 } else {
  VAR_9->daddr = VAR_7->daddr.ip;
  FUNC_2(VAR_9);
  VAR_12->saddr = VAR_7->daddr.ip;
  FUNC_2(VAR_12);
 }


 if (VAR_3 == VAR_12->protocol || VAR_4 == VAR_12->protocol ||
     VAR_2 == VAR_12->protocol) {
  __be16 *VAR_13 = (void *)VAR_12 + VAR_12->ihl*4;

  if (VAR_8)
   VAR_13[1] = VAR_7->vport;
  else
   VAR_13[0] = VAR_7->dport;
 }


 VAR_11->checksum = 0;
 VAR_11->checksum = FUNC_3(VAR_5, VAR_10);
 VAR_5->ip_summed = VAR_1;

 if (VAR_8)
  FUNC_0(11, VAR_0, VAR_6, VAR_5, (void *)VAR_12 - (void *)VAR_9,
   "Forwarding altered outgoing ICMP");
 else
  FUNC_0(11, VAR_0, VAR_6, VAR_5, (void *)VAR_12 - (void *)VAR_9,
   "Forwarding altered incoming ICMP");
}

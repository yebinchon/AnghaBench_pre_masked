
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {int source; int dest; int len; scalar_t__ check; } ;
struct sk_buff {int protocol; TYPE_3__* dev; } ;
struct TYPE_5__ {int ip; int in6; } ;
struct TYPE_4__ {int ip; int in6; } ;
struct netpoll {int local_port; int remote_port; TYPE_3__* dev; int remote_mac; TYPE_2__ remote_ip; TYPE_1__ local_ip; scalar_t__ ipv6; } ;
struct ipv6hdr {int payload_len; int hop_limit; int daddr; int saddr; void* nexthdr; scalar_t__* flow_lbl; } ;
struct iphdr {unsigned char tot_len; int id; int ttl; unsigned char saddr; unsigned char daddr; int ihl; scalar_t__ check; void* protocol; scalar_t__ frag_off; scalar_t__ tos; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
typedef int atomic_t ;
struct TYPE_6__ {int dev_addr; scalar_t__ needed_tailroom; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int,void*,int ) ;
 int FUNC_4 (struct udphdr*,int,int ) ;
 scalar_t__ FUNC_5 (int,int,int,void*,int ) ;
 int FUNC_6 (int ,int ) ;
 struct sk_buff* FUNC_7 (struct netpoll*,scalar_t__,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (unsigned char*,int ) ;
 struct iphdr* FUNC_10 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct netpoll*,struct sk_buff*) ;
 int FUNC_14 (int,unsigned char*) ;
 int FUNC_15 (struct sk_buff*,char const*,int) ;
 struct ethhdr* FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 struct udphdr* FUNC_21 (struct sk_buff*) ;

void FUNC_22(struct netpoll *VAR_5, const char *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct sk_buff *VAR_11;
 struct udphdr *VAR_12;
 struct iphdr *VAR_13;
 struct ethhdr *VAR_14;
 static atomic_t VAR_15;
 struct ipv6hdr *VAR_16;

 FUNC_1(!FUNC_12());

 VAR_10 = VAR_7 + sizeof(*VAR_12);
 if (VAR_5->ipv6)
  VAR_9 = VAR_10 + sizeof(*VAR_16);
 else
  VAR_9 = VAR_10 + sizeof(*VAR_13);

 VAR_8 = VAR_9 + FUNC_0(VAR_5->dev);

 VAR_11 = FUNC_7(VAR_5, VAR_8 + VAR_5->dev->needed_tailroom,
         VAR_8 - VAR_7);
 if (!VAR_11)
  return;

 FUNC_15(VAR_11, VAR_6, VAR_7);
 FUNC_17(VAR_11, VAR_7);

 FUNC_16(VAR_11, sizeof(*VAR_12));
 FUNC_20(VAR_11);
 VAR_12 = FUNC_21(VAR_11);
 VAR_12->source = FUNC_8(VAR_5->local_port);
 VAR_12->dest = FUNC_8(VAR_5->remote_port);
 VAR_12->len = FUNC_8(VAR_10);

 if (VAR_5->ipv6) {
  VAR_12->check = 0;
  VAR_12->check = FUNC_3(&VAR_5->local_ip.in6,
           &VAR_5->remote_ip.in6,
           VAR_10, VAR_4,
           FUNC_4(VAR_12, VAR_10, 0));
  if (VAR_12->check == 0)
   VAR_12->check = VAR_0;

  FUNC_16(VAR_11, sizeof(*VAR_16));
  FUNC_19(VAR_11);
  VAR_16 = FUNC_11(VAR_11);


  FUNC_14(0x60, (unsigned char *)VAR_16);
  VAR_16->flow_lbl[0] = 0;
  VAR_16->flow_lbl[1] = 0;
  VAR_16->flow_lbl[2] = 0;

  VAR_16->payload_len = FUNC_8(sizeof(struct udphdr) + VAR_7);
  VAR_16->nexthdr = VAR_4;
  VAR_16->hop_limit = 32;
  VAR_16->saddr = VAR_5->local_ip.in6;
  VAR_16->daddr = VAR_5->remote_ip.in6;

  VAR_14 = FUNC_16(VAR_11, VAR_1);
  FUNC_18(VAR_11);
  VAR_11->protocol = VAR_14->h_proto = FUNC_8(VAR_3);
 } else {
  VAR_12->check = 0;
  VAR_12->check = FUNC_5(VAR_5->local_ip.ip,
      VAR_5->remote_ip.ip,
      VAR_10, VAR_4,
      FUNC_4(VAR_12, VAR_10, 0));
  if (VAR_12->check == 0)
   VAR_12->check = VAR_0;

  FUNC_16(VAR_11, sizeof(*VAR_13));
  FUNC_19(VAR_11);
  VAR_13 = FUNC_10(VAR_11);


  FUNC_14(0x45, (unsigned char *)VAR_13);
  VAR_13->tos = 0;
  FUNC_14(FUNC_8(VAR_9), &(VAR_13->tot_len));
  VAR_13->id = FUNC_8(FUNC_2(&VAR_15));
  VAR_13->frag_off = 0;
  VAR_13->ttl = 64;
  VAR_13->protocol = VAR_4;
  VAR_13->check = 0;
  FUNC_14(VAR_5->local_ip.ip, &(VAR_13->saddr));
  FUNC_14(VAR_5->remote_ip.ip, &(VAR_13->daddr));
  VAR_13->check = FUNC_9((unsigned char *)VAR_13, VAR_13->ihl);

  VAR_14 = FUNC_16(VAR_11, VAR_1);
  FUNC_18(VAR_11);
  VAR_11->protocol = VAR_14->h_proto = FUNC_8(VAR_2);
 }

 FUNC_6(VAR_14->h_source, VAR_5->dev->dev_addr);
 FUNC_6(VAR_14->h_dest, VAR_5->remote_mac);

 VAR_11->dev = VAR_5->dev;

 FUNC_13(VAR_5, VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nf_inet_addr {int ip; } ;
struct sk_buff {int dummy; } ;
struct nf_hook_state {scalar_t__ hook; TYPE_2__* net; } ;
struct nf_conn {int dummy; } ;
struct icmphdr {scalar_t__ type; } ;
typedef int outer_daddr ;
typedef int _ih ;
struct TYPE_6__ {int daddr; } ;
struct TYPE_4__ {scalar_t__ sysctl_checksum; } ;
struct TYPE_5__ {TYPE_1__ ct; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sk_buff*,struct nf_hook_state const*,char*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (union nf_inet_addr*,int ,int) ;
 int FUNC_3 (struct nf_conn*,struct sk_buff*,unsigned int,struct nf_hook_state const*,int ,union nf_inet_addr*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,scalar_t__,unsigned int,int ) ;
 struct icmphdr* FUNC_5 (struct sk_buff*,unsigned int,int,struct icmphdr*) ;

int FUNC_6(struct nf_conn *VAR_9,
         struct sk_buff *VAR_10, unsigned int VAR_11,
         const struct nf_hook_state *VAR_12)
{
 union nf_inet_addr VAR_13;
 const struct icmphdr *VAR_14;
 struct icmphdr VAR_15;


 VAR_14 = FUNC_5(VAR_10, VAR_11, sizeof(VAR_15), &VAR_15);
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_12, "short packet");
  return -VAR_6;
 }


 if (VAR_12->net->ct.sysctl_checksum &&
     VAR_12->hook == VAR_7 &&
     FUNC_4(VAR_10, VAR_12->hook, VAR_11, VAR_5)) {
  FUNC_0(VAR_10, VAR_12, "bad hw icmp checksum");
  return -VAR_6;
 }







 if (VAR_14->type > VAR_8) {
  FUNC_0(VAR_10, VAR_12, "invalid icmp type");
  return -VAR_6;
 }


 if (VAR_14->type != VAR_0 &&
     VAR_14->type != VAR_3 &&
     VAR_14->type != VAR_4 &&
     VAR_14->type != VAR_1 &&
     VAR_14->type != VAR_2)
  return VAR_6;

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.ip = FUNC_1(VAR_10)->daddr;

 VAR_11 += sizeof(*VAR_14);
 return FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12,
           VAR_5, &VAR_13);
}

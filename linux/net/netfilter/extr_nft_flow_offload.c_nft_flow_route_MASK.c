
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct nft_pktinfo {int skb; } ;
struct nf_flow_route {TYPE_8__* tuple; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
struct TYPE_15__ {int flowi6_oif; int daddr; } ;
struct TYPE_10__ {int flowi4_oif; int daddr; } ;
struct TYPE_16__ {TYPE_6__ ip6; TYPE_1__ ip4; } ;
struct flowi {TYPE_7__ u; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_18__ {int ifindex; } ;
struct TYPE_17__ {struct dst_entry* dst; } ;
struct TYPE_11__ {int in6; int ip; } ;
struct TYPE_12__ {TYPE_2__ u3; } ;
struct TYPE_13__ {TYPE_3__ src; } ;
struct TYPE_14__ {TYPE_4__ tuple; } ;


 int VAR_0 ;


 int FUNC_0 (struct flowi*,int ,int) ;
 int FUNC_1 (int ,struct dst_entry**,struct flowi*,int,int) ;
 TYPE_9__* FUNC_2 (struct nft_pktinfo const*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;
 int FUNC_4 (struct nft_pktinfo const*) ;
 struct dst_entry* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct nft_pktinfo *VAR_1,
     const struct nf_conn *VAR_2,
     struct nf_flow_route *VAR_3,
     enum ip_conntrack_dir VAR_4)
{
 struct dst_entry *VAR_5 = FUNC_5(VAR_1->skb);
 struct dst_entry *VAR_6 = ((void*)0);
 struct flowi VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 switch (FUNC_4(VAR_1)) {
 case 129:
  VAR_7.u.ip4.daddr = VAR_2->tuplehash[VAR_4].tuple.src.u3.ip;
  VAR_7.u.ip4.flowi4_oif = FUNC_2(VAR_1)->ifindex;
  break;
 case 128:
  VAR_7.u.ip6.daddr = VAR_2->tuplehash[VAR_4].tuple.src.u3.in6;
  VAR_7.u.ip6.flowi6_oif = FUNC_2(VAR_1)->ifindex;
  break;
 }

 FUNC_1(FUNC_3(VAR_1), &VAR_6, &VAR_7, 0, FUNC_4(VAR_1));
 if (!VAR_6)
  return -VAR_0;

 VAR_3->tuple[VAR_4].dst = VAR_5;
 VAR_3->tuple[!VAR_4].dst = VAR_6;

 return 0;
}

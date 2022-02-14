
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u16 ;
struct vport {TYPE_2__* dev; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct sw_flow_key {TYPE_1__ eth; } ;
struct sk_buff {unsigned long _skb_refdst; int sk; int inner_network_header; int network_header; int protocol; } ;
struct dst_entry {TYPE_2__* dev; } ;
struct rt6_info {struct dst_entry dst; } ;
struct nf_ipv6_ops {int (* fragment ) (struct net*,int ,struct sk_buff*,int ) ;} ;
struct net {int dummy; } ;
typedef int ovs_rt ;
struct TYPE_8__ {void* frag_max_size; } ;
struct TYPE_7__ {void* frag_max_size; } ;
struct TYPE_6__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int ,int ,void*,int ) ;
 int FUNC_4 (struct dst_entry*,int *,int *,int,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct net*,int ,struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct rt6_info*,int ,int) ;
 struct nf_ipv6_ops* FUNC_10 () ;
 int FUNC_11 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_12 (struct sw_flow_key*) ;
 int FUNC_13 (struct vport*) ;
 int VAR_6 ;
 int FUNC_14 (struct vport*,struct sk_buff*,void*,int ) ;
 int FUNC_15 (unsigned long) ;
 int FUNC_16 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct net*,int ,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_19(struct net *VAR_7, struct vport *VAR_8,
    struct sk_buff *VAR_9, u16 VAR_10,
    struct sw_flow_key *VAR_11)
{
 u16 VAR_12 = 0;

 if (FUNC_5(VAR_9->protocol)) {
  VAR_12 = FUNC_17(VAR_9);
  VAR_9->network_header = VAR_9->inner_network_header;
 }

 if (FUNC_17(VAR_9) > VAR_4) {
  FUNC_2(1, "L2 header too long to fragment");
  goto err;
 }

 if (VAR_11->eth.type == FUNC_6(VAR_2)) {
  struct dst_entry VAR_13;
  unsigned long VAR_14;

  FUNC_14(VAR_8, VAR_9, VAR_12,
        FUNC_12(VAR_11));
  FUNC_4(&VAR_13, &VAR_5, ((void*)0), 1,
    VAR_1, VAR_0);
  VAR_13.dev = VAR_8->dev;

  VAR_14 = VAR_9->_skb_refdst;
  FUNC_16(VAR_9, &VAR_13);
  FUNC_1(VAR_9)->frag_max_size = VAR_10;

  FUNC_7(VAR_7, VAR_9->sk, VAR_9, VAR_6);
  FUNC_15(VAR_14);
 } else if (VAR_11->eth.type == FUNC_6(VAR_3)) {
  const struct nf_ipv6_ops *VAR_15 = FUNC_10();
  unsigned long VAR_16;
  struct rt6_info VAR_17;

  if (!VAR_15)
   goto err;

  FUNC_14(VAR_8, VAR_9, VAR_12,
        FUNC_12(VAR_11));
  FUNC_9(&VAR_17, 0, sizeof(VAR_17));
  FUNC_4(&VAR_17.dst, &VAR_5, ((void*)0), 1,
    VAR_1, VAR_0);
  VAR_17.dst.dev = VAR_8->dev;

  VAR_16 = VAR_9->_skb_refdst;
  FUNC_16(VAR_9, &VAR_17.dst);
  FUNC_0(VAR_9)->frag_max_size = VAR_10;

  VAR_15->fragment(VAR_7, VAR_9->sk, VAR_9, VAR_6);
  FUNC_15(VAR_16);
 } else {
  FUNC_3(1, "Failed fragment ->%s: eth=%04x, MRU=%d, MTU=%d.",
     FUNC_13(VAR_8), FUNC_11(VAR_11->eth.type), VAR_10,
     VAR_8->dev->mtu);
  goto err;
 }

 return;
err:
 FUNC_8(VAR_9);
}

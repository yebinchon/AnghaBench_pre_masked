
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ family; } ;
struct xfrm_mode {unsigned short family; } ;
struct xfrm_state {TYPE_3__ sel; struct xfrm_mode inner_mode; } ;
struct sk_buff {scalar_t__ len; struct net_device* dev; int mark; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct TYPE_8__ {int rx_dropped; int rx_errors; } ;
struct net_device {int tstats; TYPE_2__ stats; } ;
struct TYPE_10__ {int i_key; } ;
struct ip_tunnel {int net; TYPE_4__ parms; struct net_device* dev; } ;
struct TYPE_12__ {int protocol; } ;
struct TYPE_7__ {struct ip_tunnel* ip4; } ;
struct TYPE_11__ {TYPE_1__ tunnel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 TYPE_5__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 struct pcpu_sw_netstats* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct xfrm_state* FUNC_10 (struct sk_buff*) ;
 struct xfrm_mode* FUNC_11 (struct xfrm_state*,int ) ;
 int FUNC_12 (int *,int ,struct sk_buff*,unsigned short) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_5, int VAR_6)
{
 unsigned short VAR_7;
 struct net_device *VAR_8;
 struct pcpu_sw_netstats *VAR_9;
 struct xfrm_state *VAR_10;
 const struct xfrm_mode *VAR_11;
 struct ip_tunnel *VAR_12 = FUNC_2(VAR_5)->tunnel.ip4;
 u32 VAR_13 = VAR_5->mark;
 int VAR_14;

 if (!VAR_12)
  return 1;

 VAR_8 = VAR_12->dev;

 if (VAR_6) {
  VAR_8->stats.rx_errors++;
  VAR_8->stats.rx_dropped++;

  return 0;
 }

 VAR_10 = FUNC_10(VAR_5);

 VAR_11 = &VAR_10->inner_mode;

 if (VAR_10->sel.family == VAR_0) {
  VAR_11 = FUNC_11(VAR_10, FUNC_1(VAR_5)->protocol);
  if (VAR_11 == ((void*)0)) {
   FUNC_0(FUNC_4(VAR_5->dev),
           VAR_3);
   return -VAR_1;
  }
 }

 VAR_7 = VAR_11->family;

 VAR_5->mark = FUNC_3(VAR_12->parms.i_key);
 VAR_14 = FUNC_12(((void*)0), VAR_4, VAR_5, VAR_7);
 VAR_5->mark = VAR_13;

 if (!VAR_14)
  return -VAR_2;

 FUNC_6(VAR_5, !FUNC_5(VAR_12->net, FUNC_4(VAR_5->dev)));
 VAR_5->dev = VAR_8;

 VAR_9 = FUNC_7(VAR_8->tstats);

 FUNC_8(&VAR_9->syncp);
 VAR_9->rx_packets++;
 VAR_9->rx_bytes += VAR_5->len;
 FUNC_9(&VAR_9->syncp);

 return 0;
}

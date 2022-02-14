
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ family; } ;
struct xfrm_mode {int family; } ;
struct xfrm_state {TYPE_2__ sel; struct xfrm_mode inner_mode; } ;
struct xfrm_if {int net; struct net_device* dev; } ;
struct sk_buff {scalar_t__ len; struct net_device* dev; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {int rx_dropped; int rx_errors; } ;
struct net_device {int tstats; TYPE_1__ stats; } ;
struct TYPE_6__ {int protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct pcpu_sw_netstats* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct xfrm_state* FUNC_8 (struct sk_buff*) ;
 struct xfrm_mode* FUNC_9 (struct xfrm_state*,int ) ;
 int FUNC_10 (int *,int ,struct sk_buff*,int ) ;
 struct xfrm_if* FUNC_11 (int ,struct xfrm_state*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_5, int VAR_6)
{
 const struct xfrm_mode *VAR_7;
 struct pcpu_sw_netstats *VAR_8;
 struct net_device *VAR_9;
 struct xfrm_state *VAR_10;
 struct xfrm_if *VAR_11;
 bool VAR_12;

 if (VAR_6 && !FUNC_4(VAR_5))
  return 0;

 VAR_10 = FUNC_8(VAR_5);

 VAR_11 = FUNC_11(FUNC_13(VAR_10), VAR_10);
 if (!VAR_11)
  return 1;

 VAR_9 = VAR_11->dev;
 VAR_5->dev = VAR_9;

 if (VAR_6) {
  VAR_9->stats.rx_errors++;
  VAR_9->stats.rx_dropped++;

  return 0;
 }

 VAR_12 = !FUNC_3(VAR_11->net, FUNC_2(VAR_5->dev));

 if (VAR_12) {
  VAR_7 = &VAR_10->inner_mode;

  if (VAR_10->sel.family == VAR_0) {
   VAR_7 = FUNC_9(VAR_10, FUNC_1(VAR_5)->protocol);
   if (VAR_7 == ((void*)0)) {
    FUNC_0(FUNC_2(VAR_5->dev),
            VAR_3);
    return -VAR_1;
   }
  }

  if (!FUNC_10(((void*)0), VAR_4, VAR_5,
           VAR_7->family))
   return -VAR_2;
 }

 FUNC_12(VAR_5, VAR_12);

 VAR_8 = FUNC_5(VAR_9->tstats);

 FUNC_6(&VAR_8->syncp);
 VAR_8->rx_packets++;
 VAR_8->rx_bytes += VAR_5->len;
 FUNC_7(&VAR_8->syncp);

 return 0;
}

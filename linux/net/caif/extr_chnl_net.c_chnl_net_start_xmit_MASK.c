
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


struct sk_buff {scalar_t__ len; } ;
struct TYPE_10__ {int tx_bytes; int tx_packets; int tx_dropped; int tx_errors; } ;
struct net_device {TYPE_4__ stats; } ;
struct TYPE_9__ {TYPE_5__* dn; } ;
struct TYPE_8__ {scalar_t__ protocol; } ;
struct chnl_net {TYPE_3__ chnl; TYPE_2__ conn_req; int flowenabled; TYPE_1__* netdev; } ;
struct cfpkt {int dummy; } ;
struct TYPE_12__ {int daddr; int saddr; } ;
struct TYPE_11__ {int (* transmit ) (TYPE_5__*,struct cfpkt*) ;} ;
struct TYPE_7__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cfpkt* FUNC_0 (int ,void*) ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct chnl_net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_5__*,struct cfpkt*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct chnl_net *VAR_5;
 struct cfpkt *VAR_6 = ((void*)0);
 int VAR_7;
 int VAR_8 = -1;

 VAR_5 = FUNC_3(VAR_4);

 if (VAR_3->len > VAR_5->netdev->mtu) {
  FUNC_5("Size of skb exceeded MTU\n");
  FUNC_2(VAR_3);
  VAR_4->stats.tx_errors++;
  return VAR_2;
 }

 if (!VAR_5->flowenabled) {
  FUNC_4("dropping packets flow off\n");
  FUNC_2(VAR_3);
  VAR_4->stats.tx_dropped++;
  return VAR_2;
 }

 if (VAR_5->conn_req.protocol == VAR_0)
  FUNC_7(FUNC_1(VAR_3)->saddr, FUNC_1(VAR_3)->daddr);


 VAR_7 = VAR_3->len;

 VAR_6 = FUNC_0(VAR_1, (void *) VAR_3);


 VAR_8 = VAR_5->chnl.dn->transmit(VAR_5->chnl.dn, VAR_6);
 if (VAR_8) {
  VAR_4->stats.tx_dropped++;
  return VAR_2;
 }


 VAR_4->stats.tx_packets++;
 VAR_4->stats.tx_bytes += VAR_7;

 return VAR_2;
}

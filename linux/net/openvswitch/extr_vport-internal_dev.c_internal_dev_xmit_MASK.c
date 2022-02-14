
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct pcpu_sw_netstats {int tx_bytes; int syncp; int tx_packets; } ;
struct TYPE_3__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int tstats; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int vport; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct sk_buff*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct pcpu_sw_netstats* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static netdev_tx_t
FUNC_8(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_1->len;
 FUNC_3();
 VAR_4 = FUNC_2(FUNC_0(VAR_2)->vport, VAR_1, ((void*)0));
 FUNC_4();

 if (FUNC_1(!VAR_4)) {
  struct pcpu_sw_netstats *VAR_5 = FUNC_5(VAR_2->tstats);

  FUNC_6(&VAR_5->syncp);
  VAR_5->tx_bytes += VAR_3;
  VAR_5->tx_packets++;
  FUNC_7(&VAR_5->syncp);
 } else {
  VAR_2->stats.tx_errors++;
 }
 return VAR_0;
}

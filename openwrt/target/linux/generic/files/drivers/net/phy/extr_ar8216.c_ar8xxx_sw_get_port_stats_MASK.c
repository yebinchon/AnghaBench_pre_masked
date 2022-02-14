
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct switch_port_stats {void* rx_bytes; void* tx_bytes; } ;
struct switch_dev {int ports; } ;
struct ar8xxx_priv {void** mib_stats; int mib_lock; TYPE_1__* chip; int mib_poll_interval; } ;
struct TYPE_2__ {size_t mib_rxb_id; size_t mib_txb_id; int num_mibs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ar8xxx_priv* FUNC_3 (struct switch_dev*) ;

int
FUNC_4(struct switch_dev *VAR_2, int VAR_3,
   struct switch_port_stats *VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_3(VAR_2);
 u64 *VAR_6;

 if (!FUNC_0(VAR_5) || !VAR_5->mib_poll_interval)
  return -VAR_1;

 if (!(VAR_5->chip->mib_rxb_id || VAR_5->chip->mib_txb_id))
  return -VAR_1;

 if (VAR_3 >= VAR_2->ports)
  return -VAR_0;

 FUNC_1(&VAR_5->mib_lock);

 VAR_6 = &VAR_5->mib_stats[VAR_3 * VAR_5->chip->num_mibs];

 VAR_4->tx_bytes = VAR_6[VAR_5->chip->mib_txb_id];
 VAR_4->rx_bytes = VAR_6[VAR_5->chip->mib_rxb_id];

 FUNC_2(&VAR_5->mib_lock);
 return 0;
}

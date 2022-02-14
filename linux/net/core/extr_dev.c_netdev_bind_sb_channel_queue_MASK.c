
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct net_device {scalar_t__ num_tc; scalar_t__ real_num_tx_queues; TYPE_1__* tc_to_txq; } ;
struct TYPE_4__ {struct net_device* sb_dev; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ count; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct net_device*,scalar_t__) ;

int FUNC_1(struct net_device *VAR_1,
     struct net_device *VAR_2,
     u8 VAR_3, u16 VAR_4, u16 VAR_5)
{

 if (VAR_2->num_tc >= 0 || VAR_3 >= VAR_1->num_tc)
  return -VAR_0;


 if ((VAR_5 + VAR_4) > VAR_1->real_num_tx_queues)
  return -VAR_0;


 VAR_2->tc_to_txq[VAR_3].count = VAR_4;
 VAR_2->tc_to_txq[VAR_3].offset = VAR_5;




 while (VAR_4--)
  FUNC_0(VAR_1, VAR_4 + VAR_5)->sb_dev = VAR_2;

 return 0;
}

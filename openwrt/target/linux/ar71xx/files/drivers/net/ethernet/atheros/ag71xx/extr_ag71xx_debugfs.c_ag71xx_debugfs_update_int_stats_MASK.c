
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int rx_be; int rx_of; int rx_pr; int tx_be; int tx_ur; int tx_ps; int total; } ;
struct TYPE_3__ {TYPE_2__ int_stats; } ;
struct ag71xx {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct ag71xx *VAR_6, u32 VAR_7)
{
 if (VAR_7)
  VAR_6->debug.int_stats.total++;
 if (VAR_7 & VAR_4)
  VAR_6->debug.int_stats.tx_ps++;
 if (VAR_7 & VAR_5)
  VAR_6->debug.int_stats.tx_ur++;
 if (VAR_7 & VAR_3)
  VAR_6->debug.int_stats.tx_be++;
 if (VAR_7 & VAR_2)
  VAR_6->debug.int_stats.rx_pr++;
 if (VAR_7 & VAR_1)
  VAR_6->debug.int_stats.rx_of++;
 if (VAR_7 & VAR_0)
  VAR_6->debug.int_stats.rx_be++;
}

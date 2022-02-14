
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pcpu_sw_netstats {int syncp; int tx_bytes; int tx_packets; } ;
struct net_device {int tstats; } ;


 struct pcpu_sw_netstats* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_0, u32 VAR_1)
{
 struct pcpu_sw_netstats *VAR_2 = FUNC_0(VAR_0->tstats);

 FUNC_1(&VAR_2->syncp);
 VAR_2->tx_packets++;
 VAR_2->tx_bytes += VAR_1;
 FUNC_2(&VAR_2->syncp);
}

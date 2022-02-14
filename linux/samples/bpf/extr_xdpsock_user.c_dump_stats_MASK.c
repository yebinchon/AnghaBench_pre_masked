
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_npkts; int prev_tx_npkts; int rx_npkts; int prev_rx_npkts; } ;


 unsigned long FUNC_0 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_3 = FUNC_0();
 long VAR_4 = VAR_3 - VAR_1;
 int VAR_5;

 VAR_1 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_2[VAR_5]; VAR_5++) {
  char *VAR_6 = "%-15s %'-11.0f %'-11lu\n";
  double VAR_7, VAR_8;

  VAR_7 = (VAR_2[VAR_5]->rx_npkts - VAR_2[VAR_5]->prev_rx_npkts) *
    1000000000. / VAR_4;
  VAR_8 = (VAR_2[VAR_5]->tx_npkts - VAR_2[VAR_5]->prev_tx_npkts) *
    1000000000. / VAR_4;

  FUNC_2("\n sock%d@", VAR_5);
  FUNC_1(0);
  FUNC_2("\n");

  FUNC_2("%-15s %-11s %-11s %-11.2f\n", "", "pps", "pkts",
         VAR_4 / 1000000000.);
  FUNC_2(VAR_6, "rx", VAR_7, VAR_2[VAR_5]->rx_npkts);
  FUNC_2(VAR_6, "tx", VAR_8, VAR_2[VAR_5]->tx_npkts);

  VAR_2[VAR_5]->prev_rx_npkts = VAR_2[VAR_5]->rx_npkts;
  VAR_2[VAR_5]->prev_tx_npkts = VAR_2[VAR_5]->tx_npkts;
 }
}

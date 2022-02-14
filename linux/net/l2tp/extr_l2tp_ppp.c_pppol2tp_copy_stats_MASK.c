
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppol2tp_ioc_stats {void* rx_errors; void* rx_oos_packets; void* rx_seq_discards; void* rx_bytes; void* rx_packets; void* tx_errors; void* tx_bytes; void* tx_packets; } ;
struct l2tp_stats {int rx_errors; int rx_oos_packets; int rx_seq_discards; int rx_bytes; int rx_packets; int tx_errors; int tx_bytes; int tx_packets; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (struct pppol2tp_ioc_stats*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pppol2tp_ioc_stats *VAR_0,
    const struct l2tp_stats *VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->tx_packets = FUNC_0(&VAR_1->tx_packets);
 VAR_0->tx_bytes = FUNC_0(&VAR_1->tx_bytes);
 VAR_0->tx_errors = FUNC_0(&VAR_1->tx_errors);
 VAR_0->rx_packets = FUNC_0(&VAR_1->rx_packets);
 VAR_0->rx_bytes = FUNC_0(&VAR_1->rx_bytes);
 VAR_0->rx_seq_discards = FUNC_0(&VAR_1->rx_seq_discards);
 VAR_0->rx_oos_packets = FUNC_0(&VAR_1->rx_oos_packets);
 VAR_0->rx_errors = FUNC_0(&VAR_1->rx_errors);
}

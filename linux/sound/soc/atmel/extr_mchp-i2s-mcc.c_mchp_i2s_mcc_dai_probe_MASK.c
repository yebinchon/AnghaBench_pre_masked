
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct mchp_i2s_mcc_dev {int tx_rdy; int rx_rdy; int capture; int playback; int wq_rxrdy; int wq_txrdy; } ;


 int FUNC_0 (int *) ;
 struct mchp_i2s_mcc_dev* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0)
{
 struct mchp_i2s_mcc_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->wq_txrdy);
 FUNC_0(&VAR_1->wq_rxrdy);
 VAR_1->tx_rdy = 1;
 VAR_1->rx_rdy = 1;

 FUNC_2(VAR_0, &VAR_1->playback, &VAR_1->capture);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct mchp_i2s_mcc_dev {int tx_rdy; int rx_rdy; scalar_t__ gclk_use; int gclk; scalar_t__ gclk_running; int regmap; int channels; int dev; int wq_rxrdy; int wq_txrdy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mchp_i2s_mcc_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 struct mchp_i2s_mcc_dev* FUNC_8 (struct snd_soc_dai*) ;
 long FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct mchp_i2s_mcc_dev *VAR_6 = FUNC_8(VAR_5);
 bool VAR_7 = (VAR_4->stream == VAR_3);
 long VAR_8;

 if (VAR_7) {
  VAR_8 = FUNC_9(VAR_6->wq_txrdy,
             VAR_6->tx_rdy,
             FUNC_6(500));
  if (VAR_8 == 0) {
   FUNC_4(VAR_6->dev,
          "Timeout waiting for Tx ready\n");
   FUNC_7(VAR_6->regmap, VAR_2,
         FUNC_1(VAR_6->channels));
   VAR_6->tx_rdy = 1;
  }
 } else {
  VAR_8 = FUNC_9(VAR_6->wq_rxrdy,
             VAR_6->rx_rdy,
             FUNC_6(500));
  if (VAR_8 == 0) {
   FUNC_4(VAR_6->dev,
          "Timeout waiting for Rx ready\n");
   FUNC_7(VAR_6->regmap, VAR_2,
         FUNC_0(VAR_6->channels));
   VAR_6->rx_rdy = 1;
  }
 }

 if (!FUNC_5(VAR_6)) {
  FUNC_7(VAR_6->regmap, VAR_0, VAR_1);

  if (VAR_6->gclk_running) {
   FUNC_2(VAR_6->gclk);
   VAR_6->gclk_running = 0;
  }
  if (VAR_6->gclk_use) {
   FUNC_3(VAR_6->gclk);
   VAR_6->gclk_use = 0;
  }
 }

 return 0;
}

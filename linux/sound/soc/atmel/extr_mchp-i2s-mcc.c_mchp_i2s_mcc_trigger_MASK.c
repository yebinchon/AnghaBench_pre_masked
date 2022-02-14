
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct mchp_i2s_mcc_dev {int gclk_running; int regmap; int dev; int gclk; scalar_t__ gclk_use; int channels; int rx_rdy; int tx_rdy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;






 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;
 struct mchp_i2s_mcc_dev* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_12, int VAR_13,
    struct snd_soc_dai *VAR_14)
{
 struct mchp_i2s_mcc_dev *VAR_15 = FUNC_6(VAR_14);
 bool VAR_16 = (VAR_12->stream == VAR_11);
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19;
 int VAR_20;

 switch (VAR_13) {
 case 130:
 case 131:
 case 132:
  if (VAR_16)
   VAR_17 = VAR_6 | VAR_2;
  else
   VAR_17 = VAR_4 | VAR_2;
  break;
 case 129:
 case 128:
 case 133:
  FUNC_4(VAR_15->regmap, VAR_8, &VAR_19);
  if (VAR_16 && (VAR_19 & VAR_10)) {
   VAR_17 = VAR_5;
   VAR_15->tx_rdy = 0;




   VAR_18 = FUNC_1(VAR_15->channels);
  } else if (!VAR_16 && (VAR_19 & VAR_9)) {
   VAR_17 = VAR_3;
   VAR_15->rx_rdy = 0;




   VAR_18 = FUNC_0(VAR_15->channels);
  }
  break;
 default:
  return -VAR_0;
 }

 if ((VAR_17 & VAR_2) && VAR_15->gclk_use &&
     !VAR_15->gclk_running) {
  VAR_20 = FUNC_2(VAR_15->gclk);
  if (VAR_20) {
   FUNC_3(VAR_15->dev, "failed to enable GCLK: %d\n",
         VAR_20);
  } else {
   VAR_15->gclk_running = 1;
  }
 }

 FUNC_5(VAR_15->regmap, VAR_7, VAR_18);
 FUNC_5(VAR_15->regmap, VAR_1, VAR_17);

 return 0;
}

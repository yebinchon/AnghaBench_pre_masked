
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int stream; } ;
struct mxs_saif {int ongoing; int cur_rate; int state; int clk; scalar_t__ base; int mclk_in_use; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;






 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 struct mxs_saif* FUNC_6 (struct mxs_saif*) ;
 struct mxs_saif* FUNC_7 (struct snd_soc_dai*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_11, int VAR_12,
    struct snd_soc_dai *VAR_13)
{
 struct mxs_saif *VAR_14 = FUNC_7(VAR_13);
 struct mxs_saif *VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_15 = FUNC_6(VAR_14);
 if (!VAR_15)
  return -VAR_1;

 switch (VAR_12) {
 case 130:
 case 131:
 case 132:
  if (VAR_14->state == VAR_3)
   return 0;

  FUNC_4(VAR_13->dev, "start\n");

  VAR_17 = FUNC_3(VAR_15->clk);
  if (VAR_17) {
   FUNC_5(VAR_14->dev, "Failed to enable master clock\n");
   return VAR_17;
  }





  if (VAR_14 != VAR_15) {
   VAR_17 = FUNC_3(VAR_14->clk);
   if (VAR_17) {
    FUNC_5(VAR_14->dev, "Failed to enable master clock\n");
    FUNC_2(VAR_15->clk);
    return VAR_17;
   }

   FUNC_1(VAR_0,
    VAR_14->base + VAR_6 + VAR_5);
  }

  if (!VAR_15->mclk_in_use)
   FUNC_1(VAR_0,
    VAR_15->base + VAR_6 + VAR_5);

  if (VAR_11->stream == VAR_9) {







   FUNC_1(0, VAR_14->base + VAR_7);
   FUNC_1(0, VAR_14->base + VAR_7);
  } else {







   FUNC_0(VAR_14->base + VAR_7);
   FUNC_0(VAR_14->base + VAR_7);
  }

  VAR_15->ongoing = 1;
  VAR_14->state = VAR_3;

  FUNC_4(VAR_14->dev, "CTRL 0x%x STAT 0x%x\n",
   FUNC_0(VAR_14->base + VAR_6),
   FUNC_0(VAR_14->base + VAR_8));

  FUNC_4(VAR_15->dev, "CTRL 0x%x STAT 0x%x\n",
   FUNC_0(VAR_15->base + VAR_6),
   FUNC_0(VAR_15->base + VAR_8));
  break;
 case 128:
 case 129:
 case 133:
  if (VAR_14->state == VAR_4)
   return 0;

  FUNC_4(VAR_13->dev, "stop\n");


  VAR_16 = VAR_10 / VAR_15->cur_rate;

  if (!VAR_15->mclk_in_use) {
   FUNC_1(VAR_0,
    VAR_15->base + VAR_6 + VAR_2);
   FUNC_8(VAR_16);
  }
  FUNC_2(VAR_15->clk);

  if (VAR_14 != VAR_15) {
   FUNC_1(VAR_0,
    VAR_14->base + VAR_6 + VAR_2);
   FUNC_8(VAR_16);
   FUNC_2(VAR_14->clk);
  }

  VAR_15->ongoing = 0;
  VAR_14->state = VAR_4;

  break;
 default:
  return -VAR_1;
 }

 return 0;
}

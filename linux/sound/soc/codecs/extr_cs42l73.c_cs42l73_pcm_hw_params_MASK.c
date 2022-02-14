
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs42l73_private {int mclk; TYPE_1__* config; } ;
struct TYPE_4__ {int mmcc; } ;
struct TYPE_3__ {int mmcc; int spc; int srate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (struct snd_soc_component*,int,int) ;
 int FUNC_4 (int ,char*,int,int,int,int) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct cs42l73_private* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5,
     struct snd_pcm_hw_params *VAR_6,
     struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct cs42l73_private *VAR_9 = FUNC_6(VAR_8);
 int VAR_10 = VAR_7->id;
 int VAR_11;
 int VAR_12 = FUNC_5(VAR_6);

 if (VAR_9->config[VAR_10].mmcc & VAR_2) {


  VAR_11 =
      FUNC_2(VAR_9->mclk, VAR_12);

  if (VAR_11 < 0)
   return -VAR_3;

  FUNC_4(VAR_8->dev,
    "DAI[%d]: MCLK %u, srate %u, MMCC[5:0] = %x\n",
    VAR_10, VAR_9->mclk, VAR_12,
    VAR_4[VAR_11].mmcc);

  VAR_9->config[VAR_10].mmcc &= 0xC0;
  VAR_9->config[VAR_10].mmcc |= VAR_4[VAR_11].mmcc;
  VAR_9->config[VAR_10].spc &= 0xFC;

  if (VAR_9->mclk >= 6400000)
   VAR_9->config[VAR_10].spc |= VAR_0;
  else
   VAR_9->config[VAR_10].spc |= VAR_1;
 } else {

  VAR_9->config[VAR_10].spc &= 0xFC;
  VAR_9->config[VAR_10].spc |= VAR_0;
 }

 VAR_9->config[VAR_10].srate = VAR_12;

 FUNC_7(VAR_8, FUNC_1(VAR_10), VAR_9->config[VAR_10].spc);
 FUNC_7(VAR_8, FUNC_0(VAR_10), VAR_9->config[VAR_10].mmcc);

 FUNC_3(VAR_8, VAR_10, VAR_12);

 return 0;
}

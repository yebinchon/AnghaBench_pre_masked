
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_2__* card; } ;
struct snd_soc_jack {int dummy; } ;
struct cht_mc_private {int quirks; int mclk; scalar_t__ ts3a227e_present; struct snd_soc_jack jack; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 struct cht_mc_private* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,int,struct snd_soc_jack*,int ,int ) ;
 int FUNC_7 (int ,struct snd_soc_jack*,int ,int ) ;
 int FUNC_8 (struct snd_soc_jack*,int *) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_pcm_runtime *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct cht_mc_private *VAR_10 = FUNC_5(VAR_7->card);
 struct snd_soc_jack *VAR_11 = &VAR_10->jack;

 if (VAR_10->ts3a227e_present) {




  FUNC_8(VAR_11, &VAR_4);
  return 0;
 }

 VAR_9 = VAR_2 | VAR_3;

 VAR_8 = FUNC_6(VAR_7->card, "Headset Jack",
        VAR_9, VAR_11,
        VAR_6, FUNC_0(VAR_6));
 if (VAR_8) {
  FUNC_4(VAR_7->dev, "Headset Jack creation failed %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_7(VAR_7->card->dev->parent, VAR_11,
          FUNC_0(VAR_5),
          VAR_5);
 if (VAR_8) {




  FUNC_4(VAR_7->dev,
   "jack detection gpios not added, error %d\n", VAR_8);
 }


 if (VAR_10->quirks & VAR_1)
  return 0;
 VAR_8 = FUNC_2(VAR_10->mclk);
 if (!VAR_8)
  FUNC_1(VAR_10->mclk);

 VAR_8 = FUNC_3(VAR_10->mclk, VAR_0);

 if (VAR_8)
  FUNC_4(VAR_7->dev, "unable to set MCLK rate\n");

 return VAR_8;
}

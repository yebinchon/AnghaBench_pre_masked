
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* card; struct snd_soc_dai* codec_dai; TYPE_1__** codec_dais; } ;
struct snd_soc_dai {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_8__ {int jack; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct snd_soc_component*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_3__ VAR_12 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int,TYPE_3__*,int *,int ) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_pcm_runtime *VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_13->codec_dais[0]->component;
 struct snd_soc_dai *VAR_15 = VAR_13->codec_dai;
 int VAR_16;


 VAR_16 = FUNC_5(VAR_15, 0, 12288000,
         VAR_11);
 if (VAR_16 < 0) {
  FUNC_1(VAR_15->dev, "Init can't set codec clock in %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_4(VAR_15, 0, VAR_0, 0, 0);
 if (VAR_16 < 0) {
  FUNC_1(VAR_15->dev, "Init can't set pll sysclk mclk %d\n", VAR_16);
  return VAR_16;
 }


 VAR_16 = FUNC_3(VAR_13->card, "Headset Jack",
        VAR_9 | VAR_10 |
        VAR_5 | VAR_6 |
        VAR_7 | VAR_8,
        &VAR_12, ((void*)0), 0);

 if (VAR_16) {
  FUNC_1(VAR_13->card->dev, "New Headset Jack failed! (%d)\n", VAR_16);
  return VAR_16;
 }

 FUNC_2(
  VAR_12.jack, VAR_5, VAR_1);
 FUNC_2(
  VAR_12.jack, VAR_6, VAR_4);
 FUNC_2(
  VAR_12.jack, VAR_7, VAR_3);
 FUNC_2(
  VAR_12.jack, VAR_8, VAR_2);

 FUNC_0(VAR_14, &VAR_12);

 return 0;
}

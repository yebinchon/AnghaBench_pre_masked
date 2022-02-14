
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tm2_machine_priv {int component; } ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dev; int component; } ;
struct snd_soc_card {TYPE_1__* dai_link; } ;
struct TYPE_4__ {int dlc; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 struct tm2_machine_priv* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int*,int ,int *) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_dai*,int,int,int,int) ;
 struct snd_soc_dai* FUNC_6 (int *) ;
 struct snd_soc_pcm_runtime* FUNC_7 (struct snd_soc_card*,int ) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static int FUNC_8(struct snd_soc_card *VAR_6)
{
 struct tm2_machine_priv *VAR_7 = FUNC_2(VAR_6);
 unsigned int VAR_8[] = { 0, 1 };
 struct snd_soc_dai *VAR_9;
 struct snd_soc_pcm_runtime *VAR_10;
 struct snd_soc_dai *VAR_11;
 struct snd_soc_dai *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_7(VAR_6, VAR_6->dai_link[VAR_3].name);
 VAR_11 = VAR_10->codec_dai;
 VAR_7->component = VAR_10->codec_dai->component;

 VAR_13 = FUNC_4(VAR_11, VAR_1, 0, 0);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->dev, "Failed to set SYSCLK: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_10 = FUNC_7(VAR_6, VAR_6->dai_link[VAR_4].name);
 VAR_12 = VAR_10->codec_dai;

 VAR_13 = FUNC_4(VAR_12, VAR_0, 0, 0);
 if (VAR_13 < 0) {
  FUNC_1(VAR_12->dev, "Failed to set ASYNCCLK: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_9 = FUNC_6(&VAR_5.dlc);
 if (!VAR_9)
  return -VAR_2;


 VAR_13 = FUNC_3(VAR_9, FUNC_0(VAR_8),
       VAR_8, 0, ((void*)0));
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_5(VAR_9, 0x3, 0x0, 2, 16);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}

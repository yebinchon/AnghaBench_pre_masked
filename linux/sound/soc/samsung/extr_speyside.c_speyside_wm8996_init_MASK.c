
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,int,int *,int ,int ) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct snd_soc_component*,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_9)
{
 struct snd_soc_dai *VAR_10 = VAR_9->codec_dai;
 struct snd_soc_component *VAR_11 = VAR_10->component;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_10, VAR_4, 32768, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_3, "HP_SEL");
 if (VAR_12 != 0)
  FUNC_3("Failed to request HP_SEL GPIO: %d\n", VAR_12);
 FUNC_1(VAR_3, VAR_7);

 VAR_12 = FUNC_4(VAR_9->card, "Headset", VAR_2 |
        VAR_1 | VAR_0,
        &VAR_5, VAR_6,
        FUNC_0(VAR_6));
 if (VAR_12)
  return VAR_12;

 FUNC_6(VAR_11, &VAR_5, VAR_8);

 return 0;
}

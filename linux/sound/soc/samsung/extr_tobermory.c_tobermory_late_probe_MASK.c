
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {TYPE_1__* dai_link; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_soc_card*,char*,int,int *,int ,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_soc_card*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct snd_soc_component*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_card *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7;
 struct snd_soc_component *VAR_8;
 struct snd_soc_dai *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(VAR_6, VAR_6->dai_link[0].name);
 VAR_8 = VAR_7->codec_dai->component;
 VAR_9 = VAR_7->codec_dai;

 VAR_10 = FUNC_2(VAR_9, VAR_3,
         32768, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_6, "Headset", VAR_1 |
        VAR_0, &VAR_4,
        VAR_5,
        FUNC_0(VAR_5));
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_8, &VAR_4);

 return 0;
}

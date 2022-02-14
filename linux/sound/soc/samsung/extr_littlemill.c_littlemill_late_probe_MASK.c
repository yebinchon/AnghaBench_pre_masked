
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {TYPE_1__* dai_link; } ;
struct TYPE_2__ {int name; } ;


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
 int FUNC_0 (struct snd_soc_card*,char*,int,int *,int *,int ) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int,int ) ;
 struct snd_soc_pcm_runtime* FUNC_2 (struct snd_soc_card*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int *,int *,int *,int *,int *) ;
 int FUNC_4 (struct snd_soc_component*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_card *VAR_11)
{
 struct snd_soc_pcm_runtime *VAR_12;
 struct snd_soc_component *VAR_13;
 struct snd_soc_dai *VAR_14;
 struct snd_soc_dai *VAR_15;
 int VAR_16;

 VAR_12 = FUNC_2(VAR_11, VAR_11->dai_link[0].name);
 VAR_13 = VAR_12->codec_dai->component;
 VAR_14 = VAR_12->codec_dai;

 VAR_12 = FUNC_2(VAR_11, VAR_11->dai_link[1].name);
 VAR_15 = VAR_12->cpu_dai;

 VAR_16 = FUNC_1(VAR_14, VAR_9,
         32768, VAR_8);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_1(VAR_15, VAR_9,
         32768, VAR_8);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_0(VAR_11, "Headset",
        VAR_6 | VAR_7 |
        VAR_0 | VAR_1 |
        VAR_2 | VAR_3 |
        VAR_4 | VAR_5,
        &VAR_10, ((void*)0), 0);
 if (VAR_16)
  return VAR_16;


 FUNC_3(VAR_13, &VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0));


 FUNC_4(VAR_13, &VAR_10, 1);

 return 0;
}

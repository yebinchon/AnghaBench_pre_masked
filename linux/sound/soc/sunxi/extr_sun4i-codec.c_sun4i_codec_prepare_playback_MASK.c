
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_codec {int regmap; } ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {int rate; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int) ;
 struct sun4i_codec* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
     struct snd_soc_dai *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct sun4i_codec *VAR_8 = FUNC_2(VAR_7->card);
 u32 VAR_9;


 FUNC_1(VAR_8->regmap, VAR_0,
      FUNC_0(VAR_1),
      FUNC_0(VAR_1));


 FUNC_1(VAR_8->regmap, VAR_0,
      0x3f << VAR_4,
      0xf << VAR_4);

 if (VAR_5->runtime->rate > 32000)

  VAR_9 = 0;
 else

  VAR_9 = FUNC_0(VAR_2);

 FUNC_1(VAR_8->regmap, VAR_0,
      FUNC_0(VAR_2),
      VAR_9);


 FUNC_1(VAR_8->regmap, VAR_0,
      FUNC_0(VAR_3),
      0);

 return 0;
}

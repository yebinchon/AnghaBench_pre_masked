
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_codec {int regmap; TYPE_1__* dev; int reg_adc_fifoc; } ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct sun4i_codec* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
           struct snd_soc_dai *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct sun4i_codec *VAR_7 = FUNC_4(VAR_6->card);



 FUNC_2(VAR_7->reg_adc_fifoc,
     FUNC_0(VAR_1),
     FUNC_0(VAR_1));



 FUNC_2(VAR_7->reg_adc_fifoc,
     0xf << VAR_2,
     0x7 << VAR_2);






 if (FUNC_1(VAR_7->dev->of_node,
        "allwinner,sun4i-a10-codec") ||
     FUNC_1(VAR_7->dev->of_node,
        "allwinner,sun7i-a20-codec")) {
  FUNC_3(VAR_7->regmap, VAR_0,
       0x3 << 25,
       0x1 << 25);
 }

 if (FUNC_1(VAR_7->dev->of_node,
        "allwinner,sun7i-a20-codec"))

  FUNC_3(VAR_7->regmap, VAR_3,
       0x3 << 8,
       0x1 << 8);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct device* dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct regmap {int dummy; } ;
struct pcm512x_priv {int sclk; struct regmap* regmap; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct regmap*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 struct pcm512x_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7,
         struct snd_soc_dai *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_8->component;
 struct pcm512x_priv *VAR_10 = FUNC_5(VAR_9);
 struct device *VAR_11 = VAR_8->dev;
 struct regmap *VAR_12 = VAR_10->regmap;

 if (FUNC_0(VAR_10->sclk)) {
  FUNC_2(VAR_11, "No SCLK, using BCLK: %ld\n",
    FUNC_1(VAR_10->sclk));


  FUNC_3(VAR_12, VAR_0,
       VAR_1, VAR_1);


  FUNC_3(VAR_12, VAR_2,
       VAR_3, VAR_4);
 }

 return FUNC_4(VAR_7->runtime, 0,
       VAR_5,
       &VAR_6);
}

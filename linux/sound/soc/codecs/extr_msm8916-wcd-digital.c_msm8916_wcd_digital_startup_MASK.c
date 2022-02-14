
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct msm8916_wcd_digital_priv {int mclk; } ;


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
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 struct msm8916_wcd_digital_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_10,
           struct snd_soc_dai *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->component;
 struct msm8916_wcd_digital_priv *VAR_13;
 unsigned long VAR_14;

 VAR_13 = FUNC_2(VAR_12);
 FUNC_3(VAR_12, VAR_0,
       VAR_6,
       VAR_5);
 FUNC_3(VAR_12, VAR_1,
       VAR_3,
       VAR_2);

 VAR_14 = FUNC_0(VAR_13->mclk);
 switch (VAR_14) {
 case 12288000:
  FUNC_3(VAR_12, VAR_4,
        VAR_9,
        VAR_7);
  break;
 case 9600000:
  FUNC_3(VAR_12, VAR_4,
        VAR_9,
        VAR_8);
  break;
 default:
  FUNC_1(VAR_12->dev, "Invalid mclk rate %ld\n", VAR_14);
  break;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct ak4118_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 unsigned int VAR_5 ;
 int FUNC_0 (struct ak4118_priv*,unsigned int) ;
 int FUNC_1 (struct ak4118_priv*,unsigned int) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct ak4118_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_6,
         unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->component;
 struct ak4118_priv *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;
 int VAR_11 = 0;

 switch (VAR_7 & VAR_5) {
 case 129:

  VAR_10 = FUNC_0(VAR_9, VAR_7);
  break;
 case 128:

  VAR_10 = FUNC_1(VAR_9, VAR_7);
  break;
 default:
  VAR_11 = -VAR_4;
  goto exit;
 }


 if (VAR_10 < 0) {
  VAR_11 = VAR_10;
  goto exit;
 }

 VAR_11 = FUNC_2(VAR_9->regmap, VAR_0,
     VAR_1 |
     VAR_2 |
     VAR_3, VAR_10);
 if (VAR_11 < 0)
  goto exit;

exit:
 return VAR_11;
}

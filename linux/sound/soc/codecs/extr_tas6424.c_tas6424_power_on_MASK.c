
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tas6424_data {scalar_t__ mute_gpio; int regmap; int supplies; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (int ,int ) ;
 struct tas6424_data* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_5)
{
 struct tas6424_data *VAR_6 = FUNC_8(VAR_5);
 int VAR_7;
 u8 VAR_8;
 int VAR_9 = 0;
 unsigned int VAR_10;

 if (!FUNC_6(VAR_6->regmap, VAR_3, &VAR_10))
  VAR_9 = VAR_10 & VAR_4;

 VAR_7 = FUNC_7(FUNC_0(VAR_6->supplies),
        VAR_6->supplies);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "failed to enable supplies: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_4(VAR_6->regmap, 0);

 VAR_7 = FUNC_5(VAR_6->regmap);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "failed to sync regcache: %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_6->mute_gpio) {
  FUNC_2(VAR_6->mute_gpio, 0);





  VAR_8 = VAR_1;
 } else {
  VAR_8 = VAR_0;
 }
 FUNC_9(VAR_5, VAR_2, VAR_8);





 if (!VAR_9)
  FUNC_3(230);

 return 0;
}

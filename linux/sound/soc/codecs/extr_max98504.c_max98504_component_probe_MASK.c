
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct max98504_priv {int brownout_threshold; int brownout_attenuation; int brownout_attack_hold; int brownout_timed_hold; int brownout_release_rate; int brownout_enable; int supplies; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 struct max98504_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_7)
{
 struct max98504_priv *VAR_8 = FUNC_3(VAR_7);
 struct regmap *VAR_9 = VAR_8->regmap;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_0, VAR_8->supplies);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_1(VAR_9, VAR_6, 0x1);
 FUNC_0(20);

 if (!VAR_8->brownout_enable)
  return 0;

 FUNC_1(VAR_9, VAR_5, 0x1);

 FUNC_1(VAR_9, VAR_1,
       (VAR_8->brownout_threshold & 0x1f) << 3 |
       (VAR_8->brownout_attenuation & 0x3));

 FUNC_1(VAR_9, VAR_2,
       VAR_8->brownout_attack_hold & 0xff);

 FUNC_1(VAR_9, VAR_3,
       VAR_8->brownout_timed_hold & 0xff);

 FUNC_1(VAR_9, VAR_4,
       VAR_8->brownout_release_rate & 0xff);

 return 0;
}

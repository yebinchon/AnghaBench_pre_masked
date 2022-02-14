
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct ak4458_priv {scalar_t__ mute_gpiod; } ;


 int VAR_0 ;
 int FUNC_0 (struct ak4458_priv*) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 struct ak4458_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_1)
{
 struct ak4458_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;


 if (VAR_2->mute_gpiod)
  FUNC_2(VAR_2->mute_gpiod, 1);

 FUNC_0(VAR_2);

 VAR_3 = FUNC_4(VAR_1, VAR_0,
       0x80, 0x80);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_1, 1);
}

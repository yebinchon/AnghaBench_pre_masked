
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct bd28623_priv {int switch_spk; int mute_gpio; } ;


 int FUNC_0 (struct bd28623_priv*) ;
 int FUNC_1 (int ,int) ;
 struct bd28623_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct bd28623_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_1->switch_spk = 1;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1->mute_gpio, VAR_1->switch_spk ? 0 : 1);

 return 0;
}

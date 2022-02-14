
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5682_priv {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rt5682_priv*,int,int const*,int ) ;
 struct rt5682_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_4,
 struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 =
  FUNC_4(VAR_4->dapm);
 struct rt5682_priv *VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = -VAR_0;
 static const int VAR_10[] = {2, 4, 6, 8, 12, 16, 24, 32, 48, 64, 96, 128};

 VAR_9 = FUNC_1(VAR_8, 1500000, VAR_10, FUNC_0(VAR_10));

 FUNC_3(VAR_7, VAR_3,
  VAR_1, VAR_9 << VAR_2);

 return 0;
}

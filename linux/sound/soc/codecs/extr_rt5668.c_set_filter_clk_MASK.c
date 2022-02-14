
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5668_priv {int* lrck; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct rt5668_priv*,int,int const*,int ) ;
 struct rt5668_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int,int ,int) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_11,
 struct snd_kcontrol *VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 =
  FUNC_5(VAR_11->dapm);
 struct rt5668_priv *VAR_15 = FUNC_2(VAR_14);
 int VAR_16, VAR_17, VAR_18, VAR_19 = -VAR_0;
 static const int VAR_20[] = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48};

 VAR_17 = FUNC_3(VAR_14, VAR_7) &
  VAR_6;
 if (VAR_11->shift == VAR_10 &&
  VAR_17 == VAR_5)
  VAR_16 = 256 * VAR_15->lrck[VAR_2];
 else
  VAR_16 = 256 * VAR_15->lrck[VAR_1];

 VAR_19 = FUNC_1(VAR_15, VAR_16, VAR_20, FUNC_0(VAR_20));

 if (VAR_11->shift == VAR_10)
  VAR_18 = VAR_9;
 else
  VAR_18 = VAR_8;

 FUNC_4(VAR_14, VAR_18,
  VAR_3, VAR_19 << VAR_4);

 return 0;
}

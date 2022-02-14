
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5682_priv {int* lrck; int sysclk; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct rt5682_priv*,int,int const*,int) ;
 struct rt5682_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int,int,int) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_16,
 struct snd_kcontrol *VAR_17, int VAR_18)
{
 struct snd_soc_component *VAR_19 =
  FUNC_5(VAR_16->dapm);
 struct rt5682_priv *VAR_20 = FUNC_2(VAR_19);
 int VAR_21, VAR_22, VAR_23, VAR_24 = -VAR_0;
 static const int VAR_25[] = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48};
 static const int VAR_26[] = {1, 2, 4, 6, 8, 12, 16, 24, 32, 48};

 VAR_22 = FUNC_3(VAR_19, VAR_12) &
  VAR_11;
 if (VAR_16->shift == VAR_15 &&
  VAR_22 == VAR_10)
  VAR_21 = 256 * VAR_20->lrck[VAR_5];
 else
  VAR_21 = 256 * VAR_20->lrck[VAR_4];

 VAR_24 = FUNC_1(VAR_20, VAR_21, VAR_25, FUNC_0(VAR_25));

 if (VAR_16->shift == VAR_15)
  VAR_23 = VAR_14;
 else
  VAR_23 = VAR_13;

 FUNC_4(VAR_19, VAR_23,
  VAR_8, VAR_24 << VAR_9);


 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_26); VAR_24++) {
  if (VAR_20->sysclk <= 12288000 * VAR_26[VAR_24])
   break;
 }

 FUNC_4(VAR_19, VAR_3,
  VAR_1 | VAR_6,
  (VAR_24 << VAR_2) | (VAR_24 << VAR_7));

 return 0;
}

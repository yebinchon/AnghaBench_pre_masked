
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int dummy; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wm5100_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (struct wm5100_priv*,int) ;
 int FUNC_4 (struct wm5100_priv*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_6,
     struct snd_kcontrol *VAR_7,
     int VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_2(VAR_6->dapm);
 struct wm5100_priv *VAR_10 = FUNC_0(VAR_9);
 int VAR_11;

 VAR_11 = FUNC_1(VAR_9, VAR_2);
 VAR_11 &= VAR_5 |
  VAR_4 | VAR_1 |
  VAR_0;
 FUNC_3(VAR_10, VAR_11);

 VAR_11 = FUNC_1(VAR_9, VAR_3);
 FUNC_4(VAR_10, VAR_11);

 return 0;
}

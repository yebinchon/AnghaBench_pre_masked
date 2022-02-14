
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int sysclk_source; unsigned int mclk_rate; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;


 struct wm9081_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_1, int VAR_2,
        int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct wm9081_priv *VAR_6 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
 case 129:
  VAR_6->sysclk_source = VAR_2;
  VAR_6->mclk_rate = VAR_4;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}

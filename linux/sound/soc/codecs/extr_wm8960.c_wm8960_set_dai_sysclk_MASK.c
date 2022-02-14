
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_priv {unsigned int sysclk; int clk_id; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct wm8960_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int const) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct wm8960_priv *VAR_7 = FUNC_0(VAR_6);

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_6, VAR_1,
     0x1, 129);
  break;
 case 128:
  FUNC_1(VAR_6, VAR_1,
     0x1, 128);
  break;
 case 130:
  break;
 default:
  return -VAR_0;
 }

 VAR_7->sysclk = VAR_4;
 VAR_7->clk_id = VAR_3;

 return 0;
}

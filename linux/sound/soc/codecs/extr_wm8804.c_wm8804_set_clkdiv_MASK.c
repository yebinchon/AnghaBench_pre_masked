
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8804_priv {int mclk_div; } ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm8804_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2,
        int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5;
 struct wm8804_priv *VAR_6;

 VAR_5 = VAR_2->component;
 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_5, VAR_1, 0x30,
        (VAR_4 & 0x3) << 4);
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_5);
  VAR_6->mclk_div = VAR_4;
  break;
 default:
  FUNC_0(VAR_2->dev, "Unknown clock divider: %d\n", VAR_3);
  return -VAR_0;
 }
 return 0;
}

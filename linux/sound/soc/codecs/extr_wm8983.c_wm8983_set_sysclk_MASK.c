
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8983_priv {unsigned int sysclk; } ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm8983_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_4,
        int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_4->component;
 struct wm8983_priv *VAR_9 = FUNC_1(VAR_8);

 switch (VAR_5) {
 case 129:
  FUNC_2(VAR_8, VAR_3,
        VAR_2, 0);
  break;
 case 128:
  FUNC_2(VAR_8, VAR_3,
        VAR_2, VAR_1);
  break;
 default:
  FUNC_0(VAR_4->dev, "Unknown clock source: %d\n", VAR_5);
  return -VAR_0;
 }

 VAR_9->sysclk = VAR_6;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8985_priv {unsigned int sysclk; } ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm8985_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_6,
        int VAR_7, unsigned int VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10;
 struct wm8985_priv *VAR_11;

 VAR_10 = VAR_6->component;
 VAR_11 = FUNC_1(VAR_10);

 switch (VAR_7) {
 case 129:
  FUNC_2(VAR_10, VAR_3,
        VAR_2, 0);
  FUNC_2(VAR_10, VAR_5,
        VAR_4, 0);
  break;
 case 128:
  FUNC_2(VAR_10, VAR_3,
        VAR_2, VAR_1);
  break;
 default:
  FUNC_0(VAR_6->dev, "Unknown clock source %d\n", VAR_7);
  return -VAR_0;
 }

 VAR_11->sysclk = VAR_8;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int tdm_width; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct wm9081_priv* FUNC_0 (struct snd_soc_component*) ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_5,
 unsigned int VAR_6, unsigned int VAR_7, int VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_5->component;
 struct wm9081_priv *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12 = FUNC_1(VAR_10, VAR_4);

 VAR_12 &= ~(VAR_3 | VAR_1);

 if (VAR_8 < 0 || VAR_8 > 4)
  return -VAR_0;

 VAR_11->tdm_width = VAR_9;

 if (VAR_8 == 0)
  VAR_8 = 1;

 VAR_12 |= (VAR_8 - 1) << VAR_2;

 switch (VAR_7) {
 case 1:
  break;
 case 2:
  VAR_12 |= 0x10;
  break;
 case 4:
  VAR_12 |= 0x20;
  break;
 case 8:
  VAR_12 |= 0x30;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_10, VAR_4, VAR_12);

 return 0;
}

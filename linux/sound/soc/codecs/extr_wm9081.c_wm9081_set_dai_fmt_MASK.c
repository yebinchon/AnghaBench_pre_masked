
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int master; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;






 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct wm9081_priv* FUNC_0 (struct snd_soc_component*) ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_10,
         unsigned int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_10->component;
 struct wm9081_priv *VAR_13 = FUNC_0(VAR_12);
 unsigned int VAR_14 = FUNC_1(VAR_12, VAR_7);

 VAR_14 &= ~(VAR_4 | VAR_6 |
    VAR_8 | VAR_9 | VAR_5);

 switch (VAR_11 & VAR_3) {
 case 137:
  VAR_13->master = 0;
  break;
 case 138:
  VAR_14 |= VAR_9;
  VAR_13->master = 1;
  break;
 case 139:
  VAR_14 |= VAR_8;
  VAR_13->master = 1;
  break;
 case 140:
  VAR_14 |= VAR_9 | VAR_8;
  VAR_13->master = 1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_1) {
 case 135:
  VAR_14 |= VAR_6;

 case 136:
  VAR_14 |= 0x3;
  break;
 case 134:
  VAR_14 |= 0x2;
  break;
 case 128:
  break;
 case 131:
  VAR_14 |= 0x1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_1) {
 case 136:
 case 135:

  switch (VAR_11 & VAR_2) {
  case 129:
   break;
  case 132:
   VAR_14 |= VAR_4;
   break;
  default:
   return -VAR_0;
  }
  break;

 case 134:
 case 128:
 case 131:
  switch (VAR_11 & VAR_2) {
  case 129:
   break;
  case 133:
   VAR_14 |= VAR_4 | VAR_6;
   break;
  case 132:
   VAR_14 |= VAR_4;
   break;
  case 130:
   VAR_14 |= VAR_6;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_12, VAR_7, VAR_14);

 return 0;
}

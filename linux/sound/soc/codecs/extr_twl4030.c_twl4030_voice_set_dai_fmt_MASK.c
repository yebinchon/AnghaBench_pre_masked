
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct twl4030_priv {scalar_t__ codec_powered; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct twl4030_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 scalar_t__ FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_6,
         unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->component;
 struct twl4030_priv *VAR_9 = FUNC_0(VAR_8);
 u8 VAR_10, VAR_11;


 VAR_10 = FUNC_2(VAR_8, VAR_3);
 VAR_11 = VAR_10;


 switch (VAR_7 & VAR_2) {
 case 131:
  VAR_11 &= ~(VAR_5);
  break;
 case 130:
  VAR_11 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_7 & VAR_1) {
 case 129:
  VAR_11 &= ~(VAR_4);
  break;
 case 128:
  VAR_11 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_11 != VAR_10) {
  if (VAR_9->codec_powered) {




   FUNC_1(VAR_8, 0);
   FUNC_3(VAR_8, VAR_3, VAR_11);
   FUNC_1(VAR_8, 1);
  } else {
   FUNC_3(VAR_8, VAR_3, VAR_11);
  }
 }

 return 0;
}

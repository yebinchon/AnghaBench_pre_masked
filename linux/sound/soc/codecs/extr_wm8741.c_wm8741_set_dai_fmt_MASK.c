
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_8,
  unsigned int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_8->component;
 unsigned int VAR_11;


 switch (VAR_9 & VAR_3) {
 case 137:
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_9 & VAR_1) {
 case 134:
  VAR_11 = 0x08;
  break;
 case 128:
  VAR_11 = 0x00;
  break;
 case 131:
  VAR_11 = 0x04;
  break;
 case 136:
  VAR_11 = 0x0C;
  break;
 case 135:
  VAR_11 = 0x1C;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_9 & VAR_2) {
 case 129:
  break;
 case 130:
  VAR_11 |= 0x10;
  break;
 case 132:
  VAR_11 |= 0x20;
  break;
 case 133:
  VAR_11 |= 0x30;
  break;
 default:
  return -VAR_0;
 }


 FUNC_0(VAR_10->dev, "wm8741_set_dai_fmt:    Format=%x, Clock Inv=%x\n",
    VAR_9 & VAR_1,
    ((VAR_9 & VAR_2)));

 FUNC_1(VAR_10, VAR_6,
       VAR_4 | VAR_7 | VAR_5,
       VAR_11);

 return 0;
}

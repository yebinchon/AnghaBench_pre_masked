
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;


 unsigned int VAR_7 ;


 unsigned int VAR_8 ;

 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_9, unsigned int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_9->component;
 unsigned int VAR_12 = 0;

 switch (VAR_10 & VAR_8) {
 case 131:
  VAR_12 &= ~VAR_2;
  break;
 case 132:
  VAR_12 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_10 & VAR_7) {
 case 130:
  VAR_12 |= VAR_3;
  break;
 case 129:
  VAR_12 |= VAR_5;
  break;
 case 128:
  VAR_12 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_11, VAR_4,
   (VAR_2 | VAR_1), VAR_12);

 return 0;
}

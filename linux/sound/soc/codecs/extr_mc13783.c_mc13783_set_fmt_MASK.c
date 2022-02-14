
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;





 unsigned int VAR_6 ;



 unsigned int VAR_7 ;
 unsigned int VAR_8 ;


 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_9, unsigned int VAR_10,
   unsigned int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_9->component;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = FUNC_0(3) | VAR_0 | VAR_1 |
    VAR_2 | VAR_3 | VAR_4;



 switch (VAR_10 & VAR_6) {
 case 132:
  VAR_13 |= FUNC_0(2);
  break;
 case 133:
  VAR_13 |= FUNC_0(1);
  break;
 default:
  return -VAR_5;
 }


 switch (VAR_10 & VAR_7) {
 case 128:
  VAR_13 |= VAR_0;
  break;
 case 129:
  VAR_13 |= VAR_0 | VAR_1;
  break;
 case 130:
  break;
 case 131:
  VAR_13 |= VAR_1;
  break;
 }


 switch (VAR_10 & VAR_8) {
 case 137:
  VAR_13 |= VAR_3;
  break;
 case 134:
  VAR_13 |= VAR_2;
  break;
 case 136:
 case 135:
  return -VAR_5;
 }

 VAR_13 |= VAR_4;

 FUNC_1(VAR_12, VAR_11, VAR_14, VAR_13);

 return 0;
}

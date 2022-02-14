
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
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_6, unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = VAR_6->component;

 switch (VAR_7 & VAR_3) {
 case 136:
  VAR_10 = 0x100;
  break;
 case 135:
  VAR_10 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_9 = 0;
 switch (VAR_7 & VAR_1) {
 case 134:
  VAR_9 |= 0x2;
  break;
 case 128:
  break;
 case 131:
  VAR_9 |= 0x1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_7 & VAR_2) {
 case 129:
  break;
 case 133:
  VAR_9 |= 0xc;
  break;
 case 132:
  VAR_9 |= 0x8;
  break;
 case 130:
  VAR_9 |= 0x4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_8, VAR_4, 0xf, VAR_9);
 FUNC_0(VAR_8, VAR_5, 0x100, VAR_10);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_6, unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_8 = VAR_6->component;

 switch (VAR_7 & VAR_1) {
 case 134:
  VAR_9 = 0x2;
  break;
 case 128:
  VAR_9 = 0x0;
  break;
 case 131:
  VAR_9 = 0x1;
  break;
 case 136:
 case 135:
  VAR_9 = 0x3;
  break;
 default:
  FUNC_0(VAR_6->dev, "Unknown dai format\n");
  return -VAR_0;
 }


 FUNC_1(VAR_8, VAR_5, 0x3, VAR_9);
 FUNC_1(VAR_8, VAR_4, 0x3, VAR_9);

 switch (VAR_7 & VAR_3) {
 case 138:
  VAR_10 = 1;
  break;
 case 137:
  VAR_10 = 0;
  break;
 default:
  FUNC_0(VAR_6->dev, "Unknown master/slave configuration\n");
  return -VAR_0;
 }


 FUNC_1(VAR_8, VAR_4, 0x40, VAR_10 << 6);

 VAR_11 = VAR_12 = 0;
 switch (VAR_7 & VAR_2) {
 case 129:
  break;
 case 133:
  VAR_11 = VAR_12 = 1;
  break;
 case 132:
  VAR_11 = 1;
  break;
 case 130:
  VAR_12 = 1;
  break;
 default:
  FUNC_0(VAR_6->dev, "Unknown polarity configuration\n");
  return -VAR_0;
 }


 FUNC_1(VAR_8, VAR_5, 0x10 | 0x20,
       (VAR_11 << 4) | (VAR_12 << 5));
 FUNC_1(VAR_8, VAR_4, 0x10 | 0x20,
       (VAR_11 << 4) | (VAR_12 << 5));
 return 0;
}

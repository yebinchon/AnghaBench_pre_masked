
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2,
        int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6;

 VAR_6 = VAR_2->component;

 switch (VAR_3) {
 case 129:
  if ((VAR_4 >= 10000000 && VAR_4 <= 14400000)
    || (VAR_4 >= 16280000 && VAR_4 <= 27000000))
   FUNC_1(VAR_6, VAR_1, 0x80, 0x80);
  else {
   FUNC_0(VAR_2->dev, "OSCCLOCK is not within the "
    "recommended range: %uHz\n", VAR_4);
   return -VAR_0;
  }
  break;
 case 128:
  FUNC_1(VAR_6, VAR_1, 0x80, 0);
  break;
 case 131:
  FUNC_1(VAR_6, VAR_1, 0x8, 0);
  break;
 case 130:
  FUNC_1(VAR_6, VAR_1, 0x8, 0x8);
  break;
 default:
  FUNC_0(VAR_2->dev, "Unknown clock source: %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}

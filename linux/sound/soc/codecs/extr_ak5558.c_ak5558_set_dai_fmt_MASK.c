
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 unsigned int VAR_5 ;


 unsigned int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_7, unsigned int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_7->component;
 u8 VAR_10;

 switch (VAR_8 & VAR_6) {
 case 131:
  break;
 case 134:
  break;
 case 132:
 case 133:
 default:
  FUNC_0(VAR_7->dev, "Clock mode unsupported");
  return -VAR_4;
 }


 switch (VAR_8 & VAR_5) {
 case 129:
  VAR_10 = VAR_2;
  break;
 case 128:
  VAR_10 = VAR_3;
  break;
 case 130:
  VAR_10 = VAR_3;
  break;
 default:
  return -VAR_4;
 }

 FUNC_1(VAR_9, VAR_0, VAR_1, VAR_10);

 return 0;
}

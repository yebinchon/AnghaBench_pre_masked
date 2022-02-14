
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static u16 FUNC_1(struct snd_soc_component *VAR_3,
         int VAR_4)
{
 u16 VAR_5 = 0;

 switch (VAR_4) {
 case 1:
 case 2:
  VAR_5 = VAR_0;
  break;

 case 3:
 case 4:
  VAR_5 = VAR_1;
  break;

 case 5:
 case 6:
  VAR_5 = VAR_2;
  break;
 default:
  FUNC_0(VAR_3->dev, "invalid amic: %d\n", VAR_4);
  break;
 }

 return VAR_5;
}

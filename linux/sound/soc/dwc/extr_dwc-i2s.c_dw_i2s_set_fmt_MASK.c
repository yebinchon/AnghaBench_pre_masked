
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct dw_i2s_dev {int capability; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct dw_i2s_dev* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4, unsigned int VAR_5)
{
 struct dw_i2s_dev *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = 0;

 switch (VAR_5 & VAR_3) {
 case 131:
  if (VAR_6->capability & VAR_1)
   VAR_7 = 0;
  else
   VAR_7 = -VAR_2;
  break;
 case 128:
  if (VAR_6->capability & VAR_0)
   VAR_7 = 0;
  else
   VAR_7 = -VAR_2;
  break;
 case 130:
 case 129:
  VAR_7 = -VAR_2;
  break;
 default:
  FUNC_0(VAR_6->dev, "dwc : Invalid master/slave format\n");
  VAR_7 = -VAR_2;
  break;
 }
 return VAR_7;
}

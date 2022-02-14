
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
  unsigned int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_5->component;
 int VAR_8;


 switch (VAR_6 & VAR_4) {
 case 128:
  VAR_8 = FUNC_1(VAR_7,
    VAR_3, VAR_1, VAR_2);
  if (VAR_8 < 0) {
   FUNC_0(VAR_7->dev,
    "Failed to set codec DAI master (%d)\n", VAR_8);
   return VAR_8;
  }
  break;
 default:
  VAR_8 = -VAR_0;
  FUNC_0(VAR_7->dev, "Unsupported format (%d)\n", VAR_8);
  return VAR_8;
 }

 return 0;
}

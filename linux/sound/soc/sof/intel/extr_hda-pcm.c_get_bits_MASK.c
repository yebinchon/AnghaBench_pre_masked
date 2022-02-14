
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static inline u32 FUNC_2(struct snd_sof_dev *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 8:
  return FUNC_0(0);
 case 16:
  return FUNC_0(1);
 case 20:
  return FUNC_0(2);
 case 24:
  return FUNC_0(3);
 case 32:
  return FUNC_0(4);
 default:
  FUNC_1(VAR_0->dev, "can't find %d bits using 16bit\n",
    VAR_1);
  return FUNC_0(1);
 }
}

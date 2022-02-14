
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct es7241_data {unsigned int fmt; int is_slave; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct es7241_data* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5, unsigned int VAR_6)
{
 struct es7241_data *VAR_7 = FUNC_1(VAR_5);

 if ((VAR_6 & VAR_2) != VAR_4) {
  FUNC_0(VAR_5->dev, "Unsupported dai clock inversion\n");
  return -VAR_0;
 }

 if ((VAR_6 & VAR_1) != VAR_7->fmt) {
  FUNC_0(VAR_5->dev, "Invalid dai format\n");
  return -VAR_0;
 }

 switch (VAR_6 & VAR_3) {
 case 128:
  VAR_7->is_slave = 1;
  break;
 case 129:
  VAR_7->is_slave = 0;
  break;

 default:
  FUNC_0(VAR_5->dev, "Unsupported clock configuration\n");
  return -VAR_0;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,unsigned int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_5,
        unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_5->dev, "Configured OUTCLK to SYSCLK\n");
  FUNC_2(VAR_5, VAR_1,
           VAR_2, VAR_6);
  return 0;
 case 132:
  FUNC_0(VAR_5->dev, "Configured OUTCLK to ASYNCCLK\n");
  FUNC_2(VAR_5, VAR_1,
           VAR_2, VAR_6);
  return 0;
 case 131:
 case 130:
 case 129:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7 % 4000)
  VAR_10 = 5644800;
 else
  VAR_10 = 6144000;

 VAR_8 = 1;
 VAR_9 = 0;
 while (VAR_8 <= 8) {
  if (VAR_7 / VAR_8 == VAR_10 && !(VAR_7 % VAR_8)) {
   FUNC_0(VAR_5->dev, "Configured %dHz OUTCLK\n", VAR_10);
   FUNC_2(VAR_5,
    VAR_1,
    VAR_3 |
    VAR_2,
    (VAR_9 << VAR_4) |
    VAR_6);
   return 0;
  }
  VAR_9++;
  VAR_8 *= 2;
 }

 FUNC_1(VAR_5->dev,
  "Unable to generate %dHz OUTCLK from %dHz MCLK\n",
  VAR_10, VAR_7);
 return -VAR_0;
}

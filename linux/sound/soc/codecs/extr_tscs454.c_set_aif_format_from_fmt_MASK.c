
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;


 unsigned int VAR_9 ;






 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_3(struct snd_soc_component *VAR_10,
  unsigned int VAR_11, unsigned int VAR_12)
{
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 switch (VAR_11) {
 case 130:
  VAR_13 = VAR_6;
  break;
 case 129:
  VAR_13 = VAR_7;
  break;
 case 128:
  VAR_13 = VAR_8;
  break;
 default:
  VAR_15 = -VAR_0;
  FUNC_0(VAR_10->dev,
    "DAI %d unknown (%d)\n", VAR_11 + 1, VAR_15);
  return VAR_15;
 }

 switch (VAR_12 & VAR_9) {
 case 131:
  VAR_14 = VAR_4;
  break;
 case 132:
  VAR_14 = VAR_3;
  break;
 case 133:
  VAR_14 = VAR_2;
  break;
 case 135:
  VAR_15 = FUNC_1(VAR_10, VAR_11, 1);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_14 = VAR_5;
  break;
 case 134:
  VAR_15 = FUNC_1(VAR_10, VAR_11, 0);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_14 = VAR_5;
  break;
 default:
  VAR_15 = -VAR_0;
  FUNC_0(VAR_10->dev, "Format unsupported (%d)\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_2(VAR_10,
   VAR_13, VAR_1, VAR_14);
 if (VAR_15 < 0) {
  FUNC_0(VAR_10->dev, "Failed to set DAI %d format (%d)\n",
    VAR_11 + 1, VAR_15);
  return VAR_15;
 }

 return 0;
}

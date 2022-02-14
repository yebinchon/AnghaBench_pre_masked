
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;


 unsigned int VAR_10 ;





 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int,unsigned int) ;

__attribute__((used)) static inline int
FUNC_2(struct snd_soc_component *VAR_11,
  unsigned int VAR_12, unsigned int VAR_13)
{
 unsigned int VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 switch (VAR_12) {
 case 130:
  VAR_14 = VAR_7;
  break;
 case 129:
  VAR_14 = VAR_8;
  break;
 case 128:
  VAR_14 = VAR_9;
  break;
 default:
  VAR_16 = -VAR_0;
  FUNC_0(VAR_11->dev,
    "DAI %d unknown (%d)\n", VAR_12 + 1, VAR_16);
  return VAR_16;
 }

 switch (VAR_13 & VAR_10) {
 case 131:
  VAR_15 = VAR_4 | VAR_6;
  break;
 case 132:
  VAR_15 = VAR_4 | VAR_5;
  break;
 case 133:
  VAR_15 = VAR_3 | VAR_6;
  break;
 case 134:
  VAR_15 = VAR_3 | VAR_5;
  break;
 default:
  VAR_16 = -VAR_0;
  FUNC_0(VAR_11->dev, "Format unknown (%d)\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_1(VAR_11, VAR_14,
   VAR_1 | VAR_2, VAR_15);
 if (VAR_16 < 0) {
  FUNC_0(VAR_11->dev,
    "Failed to set clock polarity for DAI%d (%d)\n",
    VAR_12 + 1, VAR_16);
  return VAR_16;
 }

 return 0;
}

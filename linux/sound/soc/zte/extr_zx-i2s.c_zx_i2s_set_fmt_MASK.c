
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_i2s_info {int master; scalar_t__ reg_base; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;


 unsigned int VAR_2 ;

 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 struct zx_i2s_info* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_15, unsigned int VAR_16)
{
 struct zx_i2s_info *VAR_17 = FUNC_2(VAR_15);
 unsigned long VAR_18;

 VAR_18 = FUNC_1(VAR_17->reg_base + VAR_4);
 VAR_18 &= ~(VAR_14 | VAR_3 |
   VAR_13 | VAR_12 |
   VAR_9);

 switch (VAR_16 & VAR_1) {
 case 130:
  VAR_18 |= (VAR_5 | VAR_11);
  break;
 case 129:
  VAR_18 |= (VAR_5 | VAR_8);
  break;
 case 128:
  VAR_18 |= (VAR_5 | VAR_6);
  break;
 default:
  FUNC_0(VAR_15->dev, "Unknown i2s timing\n");
  return -VAR_0;
 }

 switch (VAR_16 & VAR_2) {
 case 132:

  VAR_17->master = 0;
  VAR_18 |= VAR_10;
  break;
 case 131:

  VAR_17->master = 1;
  VAR_18 |= VAR_7;
  break;
 default:
  FUNC_0(VAR_15->dev, "Unknown master/slave format\n");
  return -VAR_0;
 }

 FUNC_3(VAR_18, VAR_17->reg_base + VAR_4);
 return 0;
}

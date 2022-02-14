
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct imx_ssi {int flags; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 unsigned int VAR_4 ;



 unsigned int VAR_5 ;

 unsigned int VAR_6 ;


 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (scalar_t__) ;
 struct imx_ssi* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_20, unsigned int VAR_21)
{
 struct imx_ssi *VAR_22 = FUNC_1(VAR_20);
 u32 VAR_23 = 0, VAR_24;

 VAR_24 = FUNC_0(VAR_22->base + VAR_8) & ~(VAR_11 | VAR_10);


 switch (VAR_21 & VAR_4) {
 case 133:

  VAR_23 |= VAR_19 | VAR_18 | VAR_16 |
   VAR_14;
  VAR_24 |= VAR_10;
  if (VAR_22->flags & VAR_3) {
   VAR_24 &= ~VAR_7;
   VAR_24 |= VAR_9;
  }
  break;
 case 130:

  VAR_23 |= VAR_19 | VAR_18;
  break;
 case 134:

  VAR_23 |= VAR_19 | VAR_18 | VAR_17;
  break;
 case 135:

  VAR_23 |= VAR_19 | VAR_18 | VAR_17 |
   VAR_14;
  break;
 }


 switch (VAR_21 & VAR_5) {
 case 132:
  VAR_23 ^= VAR_18 | VAR_16;
  break;
 case 131:
  VAR_23 ^= VAR_18;
  break;
 case 129:
  VAR_23 ^= VAR_16;
  break;
 case 128:
  break;
 }


 switch (VAR_21 & VAR_6) {
 case 136:
  break;
 default:

  return -VAR_0;
 }

 VAR_23 |= VAR_15;

 if (VAR_22->flags & VAR_1)
  VAR_24 |= VAR_10;
 if (VAR_22->flags & VAR_2)
  VAR_24 |= VAR_11;

 FUNC_2(VAR_23, VAR_22->base + VAR_13);
 FUNC_2(VAR_23, VAR_22->base + VAR_12);
 FUNC_2(VAR_24, VAR_22->base + VAR_8);

 return 0;
}

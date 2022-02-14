
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_ssi {unsigned int dai_fmt; int i2s_net; int regs; scalar_t__ synchronous; int dev; int baudclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 unsigned int VAR_6 ;



 unsigned int VAR_7 ;

 unsigned int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 int VAR_24 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct fsl_ssi*) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct fsl_ssi *VAR_25, unsigned int VAR_26)
{
 u32 VAR_27 = 0, VAR_28 = 0, VAR_29, VAR_30, VAR_31;

 VAR_25->dai_fmt = VAR_26;


 VAR_28 |= VAR_14;


 VAR_27 |= VAR_22;


 VAR_25->i2s_net = VAR_12;
 switch (VAR_26 & VAR_6) {
 case 133:
  switch (VAR_26 & VAR_8) {
  case 136:
   if (FUNC_0(VAR_25->baudclk)) {
    FUNC_2(VAR_25->dev,
     "missing baudclk for master mode\n");
    return -VAR_0;
   }

  case 137:
   VAR_25->i2s_net |= VAR_10;
   break;
  case 138:
   VAR_25->i2s_net |= VAR_11;
   break;
  default:
   return -VAR_0;
  }

  FUNC_4(VAR_25->regs, VAR_4,
       VAR_24, FUNC_1(2));
  FUNC_4(VAR_25->regs, VAR_2,
       VAR_24, FUNC_1(2));


  VAR_27 |= VAR_19 | VAR_21 | VAR_17;
  break;
 case 130:

  VAR_27 |= VAR_21;
  break;
 case 135:

  VAR_27 |= VAR_20 | VAR_21 | VAR_17;
  break;
 case 134:

  VAR_27 |= VAR_20 | VAR_21;
  break;
 case 139:

  VAR_27 |= VAR_17;
  break;
 default:
  return -VAR_0;
 }

 VAR_28 |= VAR_25->i2s_net;


 switch (VAR_26 & VAR_7) {
 case 128:

  break;
 case 131:

  VAR_27 ^= VAR_21;
  break;
 case 129:

  VAR_27 ^= VAR_19;
  break;
 case 132:

  VAR_27 ^= VAR_21;
  VAR_27 ^= VAR_19;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_26 & VAR_8) {
 case 136:

  VAR_27 |= VAR_18 | VAR_23;
  VAR_28 |= VAR_15;
  break;
 case 138:

  break;
 case 137:

  VAR_27 |= VAR_18;
  break;
 default:
  return -VAR_0;
 }

 VAR_29 = VAR_27;
 VAR_30 = VAR_27;


 if (VAR_25->synchronous || FUNC_3(VAR_25)) {
  VAR_30 &= ~VAR_16;
  VAR_28 |= VAR_13;
 }

 VAR_31 = VAR_18 | VAR_23 | VAR_21 |
        VAR_20 | VAR_19 | VAR_17 | VAR_22;

 FUNC_4(VAR_25->regs, VAR_5, VAR_31, VAR_29);
 FUNC_4(VAR_25->regs, VAR_3, VAR_31, VAR_30);

 VAR_31 = VAR_14 | VAR_9 |
        VAR_15 | VAR_13;
 FUNC_4(VAR_25->regs, VAR_1, VAR_31, VAR_28);

 return 0;
}

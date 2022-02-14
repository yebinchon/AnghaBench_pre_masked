
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_priv {int configured_dai_fmt; int dai_fmt; struct ssp_device* ssp; } ;
struct ssp_device {int dummy; } ;


 int VAR_0 ;





 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 () ;
 int FUNC_4 (struct ssp_device*) ;
 int FUNC_5 (struct ssp_device*,int ) ;
 int FUNC_6 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ssp_priv *VAR_20)
{
 struct ssp_device *VAR_21 = VAR_20->ssp;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;


 if (VAR_20->configured_dai_fmt == VAR_20->dai_fmt)
  return 0;


 VAR_22 = FUNC_5(VAR_21, VAR_4) &
  ~(VAR_6 | VAR_5);
 VAR_23 = FUNC_5(VAR_21, VAR_7) &
  ~(VAR_11 | VAR_12 | VAR_10 |
    VAR_9 | VAR_14 | VAR_13 | VAR_8);
 VAR_24 = FUNC_5(VAR_21, VAR_15) &
  ~(VAR_17 | FUNC_2(3));

 VAR_23 |= FUNC_0(8) | FUNC_1(7);

 switch (VAR_20->dai_fmt & VAR_3) {
 case 137:
  VAR_23 |= VAR_11 | VAR_12 | VAR_10;
  break;
 case 136:
  VAR_23 |= VAR_11 | VAR_10;
  break;
 case 135:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20->dai_fmt & VAR_2) {
 case 128:
  VAR_24 |= VAR_17;
  break;
 case 129:
  break;
 case 131:
  VAR_24 |= FUNC_2(2);
  break;
 case 130:
  VAR_24 |= FUNC_2(2) | VAR_17;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20->dai_fmt & VAR_1) {
 case 132:
  VAR_22 |= VAR_6;
  VAR_23 |= VAR_9 | VAR_14;

  break;

 case 134:
  VAR_24 |= VAR_16;

 case 133:
  VAR_22 |= VAR_5 | VAR_6;
  VAR_23 |= VAR_14 | VAR_9;
  break;

 default:
  return -VAR_0;
 }

 FUNC_6(VAR_21, VAR_4, VAR_22);
 FUNC_6(VAR_21, VAR_7, VAR_23);
 FUNC_6(VAR_21, VAR_15, VAR_24);

 switch (VAR_20->dai_fmt & VAR_3) {
 case 137:
 case 136:
  VAR_25 = FUNC_5(VAR_21, VAR_7) | VAR_10;
  FUNC_6(VAR_21, VAR_7, VAR_25);

  while (FUNC_5(VAR_21, VAR_18) & VAR_19)
   FUNC_3();
  break;
 }

 FUNC_4(VAR_21);





 VAR_20->configured_dai_fmt = VAR_20->dai_fmt;

 return 0;
}

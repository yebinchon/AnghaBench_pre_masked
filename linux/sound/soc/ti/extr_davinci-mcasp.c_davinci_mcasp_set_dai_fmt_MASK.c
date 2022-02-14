
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct davinci_mcasp {int bclk_master; unsigned int dai_fmt; int dev; int pdir; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;







 unsigned int VAR_21 ;



 unsigned int VAR_22 ;

 unsigned int VAR_23 ;



 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct davinci_mcasp*,int ,int ) ;
 int FUNC_4 (struct davinci_mcasp*,int ,int ,int ) ;
 int FUNC_5 (struct davinci_mcasp*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 struct davinci_mcasp* FUNC_9 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_24,
      unsigned int VAR_25)
{
 struct davinci_mcasp *VAR_26 = FUNC_9(VAR_24);
 int VAR_27 = 0;
 u32 VAR_28;
 bool VAR_29;
 bool VAR_30 = 0;

 if (!VAR_25)
  return 0;

 FUNC_6(VAR_26->dev);
 switch (VAR_25 & VAR_21) {
 case 136:
  FUNC_3(VAR_26, VAR_10, VAR_15);
  FUNC_3(VAR_26, VAR_8, VAR_13);

  VAR_28 = 1;
  break;
 case 135:
 case 141:
  FUNC_3(VAR_26, VAR_10, VAR_15);
  FUNC_3(VAR_26, VAR_8, VAR_13);

  VAR_28 = 0;
  break;
 case 134:

  FUNC_5(VAR_26, VAR_10, VAR_15);
  FUNC_5(VAR_26, VAR_8, VAR_13);

  VAR_28 = 1;

  VAR_30 = 1;
  break;
 case 128:
 case 131:

  FUNC_5(VAR_26, VAR_10, VAR_15);
  FUNC_5(VAR_26, VAR_8, VAR_13);

  VAR_28 = 0;
  break;
 default:
  VAR_27 = -VAR_12;
  goto out;
 }

 FUNC_4(VAR_26, VAR_11, FUNC_1(VAR_28),
         FUNC_1(3));
 FUNC_4(VAR_26, VAR_9, FUNC_0(VAR_28),
         FUNC_0(3));

 switch (VAR_25 & VAR_23) {
 case 137:

  FUNC_5(VAR_26, VAR_7, VAR_2);
  FUNC_5(VAR_26, VAR_10, VAR_5);

  FUNC_5(VAR_26, VAR_6, VAR_0);
  FUNC_5(VAR_26, VAR_8, VAR_4);


  FUNC_8(VAR_18, &VAR_26->pdir);
  FUNC_8(VAR_17, &VAR_26->pdir);

  FUNC_8(VAR_20, &VAR_26->pdir);
  FUNC_8(VAR_19, &VAR_26->pdir);

  VAR_26->bclk_master = 1;
  break;
 case 138:

  FUNC_5(VAR_26, VAR_7, VAR_2);
  FUNC_3(VAR_26, VAR_10, VAR_5);

  FUNC_5(VAR_26, VAR_6, VAR_0);
  FUNC_3(VAR_26, VAR_8, VAR_4);


  FUNC_8(VAR_18, &VAR_26->pdir);
  FUNC_8(VAR_17, &VAR_26->pdir);

  FUNC_2(VAR_20, &VAR_26->pdir);
  FUNC_2(VAR_19, &VAR_26->pdir);

  VAR_26->bclk_master = 1;
  break;
 case 139:

  FUNC_3(VAR_26, VAR_7, VAR_2);
  FUNC_5(VAR_26, VAR_10, VAR_5);

  FUNC_3(VAR_26, VAR_6, VAR_0);
  FUNC_5(VAR_26, VAR_8, VAR_4);


  FUNC_2(VAR_18, &VAR_26->pdir);
  FUNC_2(VAR_17, &VAR_26->pdir);

  FUNC_8(VAR_20, &VAR_26->pdir);
  FUNC_8(VAR_19, &VAR_26->pdir);

  VAR_26->bclk_master = 0;
  break;
 case 140:

  FUNC_3(VAR_26, VAR_7, VAR_2);
  FUNC_3(VAR_26, VAR_10, VAR_5);

  FUNC_3(VAR_26, VAR_6, VAR_0);
  FUNC_3(VAR_26, VAR_8, VAR_4);


  FUNC_2(VAR_18, &VAR_26->pdir);
  FUNC_2(VAR_17, &VAR_26->pdir);

  FUNC_2(VAR_20, &VAR_26->pdir);
  FUNC_2(VAR_19, &VAR_26->pdir);

  VAR_26->bclk_master = 0;
  break;
 default:
  VAR_27 = -VAR_12;
  goto out;
 }

 switch (VAR_25 & VAR_22) {
 case 132:
  FUNC_3(VAR_26, VAR_7, VAR_3);
  FUNC_3(VAR_26, VAR_6, VAR_1);
  VAR_29 = 1;
  break;
 case 130:
  FUNC_5(VAR_26, VAR_7, VAR_3);
  FUNC_5(VAR_26, VAR_6, VAR_1);
  VAR_29 = 0;
  break;
 case 133:
  FUNC_3(VAR_26, VAR_7, VAR_3);
  FUNC_3(VAR_26, VAR_6, VAR_1);
  VAR_29 = 0;
  break;
 case 129:
  FUNC_5(VAR_26, VAR_7, VAR_3);
  FUNC_5(VAR_26, VAR_6, VAR_1);
  VAR_29 = 1;
  break;
 default:
  VAR_27 = -VAR_12;
  goto out;
 }

 if (VAR_30)
  VAR_29 = !VAR_29;

 if (VAR_29) {
  FUNC_3(VAR_26, VAR_10, VAR_16);
  FUNC_3(VAR_26, VAR_8, VAR_14);
 } else {
  FUNC_5(VAR_26, VAR_10, VAR_16);
  FUNC_5(VAR_26, VAR_8, VAR_14);
 }

 VAR_26->dai_fmt = VAR_25;
out:
 FUNC_7(VAR_26->dev);
 return VAR_27;
}

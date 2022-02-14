
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sspa_priv {unsigned int dai_fmt; struct ssp_device* sspa; } ;
struct ssp_device {TYPE_1__* pdev; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct ssp_device*,int ) ;
 int FUNC_5 (struct ssp_device*,int ,int) ;
 struct sspa_priv* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_14,
     unsigned int VAR_15)
{
 struct sspa_priv *VAR_16 = FUNC_6(VAR_14);
 struct ssp_device *VAR_17 = VAR_16->sspa;
 u32 VAR_18, VAR_19;


 if (VAR_16->dai_fmt == VAR_15)
  return 0;


 if ((FUNC_4(VAR_17, VAR_13) & VAR_9) ||
     (FUNC_4(VAR_17, VAR_5) & VAR_9)) {
  FUNC_3(&VAR_17->pdev->dev,
   "can't change hardware dai format: stream is in use\n");
  return -VAR_0;
 }


 VAR_18 = VAR_11 | VAR_10 | VAR_6;
 VAR_19 = 0;

 switch (VAR_15 & VAR_3) {
 case 130:
  VAR_18 |= VAR_8;
  break;
 case 131:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_2) {
 case 128:
  VAR_18 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_1) {
 case 129:
  VAR_18 |= FUNC_2(63);
  VAR_18 |= FUNC_1(31);
  VAR_19 |= FUNC_0(1);
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(VAR_17, VAR_13, VAR_18);
 FUNC_5(VAR_17, VAR_5, VAR_18);

 VAR_18 &= ~(VAR_10 | VAR_6);
 FUNC_5(VAR_17, VAR_13, VAR_18);
 FUNC_5(VAR_17, VAR_5, VAR_18);
 VAR_18 &= ~VAR_8;
 FUNC_5(VAR_17, VAR_13, VAR_18);

 FUNC_5(VAR_17, VAR_12, VAR_19);
 FUNC_5(VAR_17, VAR_4, VAR_19);





 VAR_16->dai_fmt = VAR_15;
 return 0;
}

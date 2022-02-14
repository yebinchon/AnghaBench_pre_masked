
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct nau8822_pll {int mclk_scaler; } ;
struct nau8822 {int div_id; int sysclk; struct nau8822_pll pll; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int* VAR_7 ;
 struct nau8822* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_8, int VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_8->component;
 struct nau8822 *VAR_12 = FUNC_3(VAR_11);
 struct nau8822_pll *VAR_13 = &VAR_12->pll;
 int VAR_14, VAR_15, VAR_16;

 switch (VAR_12->div_id) {
 case 129:




  VAR_9 = 0;
  VAR_16 = VAR_10 * 256;
  for (VAR_14 = 1; VAR_14 < FUNC_0(VAR_7); VAR_14++) {
   VAR_15 = (VAR_12->sysclk * 10) / VAR_7[VAR_14];
   if (VAR_15 < VAR_16)
    break;
   VAR_9 = VAR_14;
  }
  FUNC_1(VAR_11->dev, "master clock prescaler %x for fs %d\n",
   VAR_9, VAR_10);


  FUNC_4(VAR_11,
   VAR_6, VAR_4,
   (VAR_9 << VAR_5));
  FUNC_4(VAR_11,
   VAR_6, VAR_1,
   VAR_2);
  break;

 case 128:

  if (VAR_13->mclk_scaler != VAR_9) {
   FUNC_2(VAR_11->dev,
   "master clock prescaler not meet PLL parameters\n");
   return -VAR_0;
  }
  FUNC_4(VAR_11,
   VAR_6, VAR_4,
   (VAR_9 << VAR_5));
  FUNC_4(VAR_11,
   VAR_6, VAR_1,
   VAR_3);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}

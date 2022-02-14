
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spdifrx_data {int regmap; struct platform_device* pdev; struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {int dummy; } ;
struct platform_device {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_20, void *VAR_21)
{
 struct stm32_spdifrx_data *VAR_22 = (struct stm32_spdifrx_data *)VAR_21;
 struct snd_pcm_substream *VAR_23 = VAR_22->substream;
 struct platform_device *VAR_24 = VAR_22->pdev;
 unsigned int VAR_25, VAR_26, VAR_27, VAR_28;
 unsigned int VAR_29;
 int VAR_30 = 0, VAR_31 = 0;

 FUNC_3(VAR_22->regmap, VAR_19, &VAR_27);
 FUNC_3(VAR_22->regmap, VAR_18, &VAR_28);

 VAR_26 = VAR_28 & VAR_15;

 if (VAR_26 & VAR_4)
  VAR_26 |= (VAR_4 << 1) | (VAR_4 << 2);

 VAR_29 = VAR_27 & VAR_26;
 if (!VAR_29) {
  FUNC_2(&VAR_24->dev, "Unexpected IRQ. rflags=%#x, imr=%#x\n",
   VAR_27, VAR_28);
  return VAR_1;
 }


 FUNC_4(VAR_22->regmap, VAR_17,
      VAR_14, VAR_29);

 if (VAR_29 & VAR_9) {
  FUNC_1(&VAR_24->dev, "Parity error\n");
  VAR_31 = 1;
 }

 if (VAR_29 & VAR_8) {
  FUNC_1(&VAR_24->dev, "Overrun error\n");
  VAR_31 = 1;
 }

 if (VAR_29 & VAR_10)
  FUNC_1(&VAR_24->dev, "Synchronization block detected\n");

 if (VAR_29 & VAR_12) {
  FUNC_1(&VAR_24->dev, "Synchronization done\n");


  VAR_25 = FUNC_0(VAR_6);
  FUNC_4(VAR_22->regmap, VAR_16,
       VAR_3, VAR_25);
 }

 if (VAR_29 & VAR_7) {
  FUNC_1(&VAR_24->dev, "Frame error\n");
  VAR_30 = 1;
 }

 if (VAR_29 & VAR_11) {
  FUNC_1(&VAR_24->dev, "Synchronization error\n");
  VAR_30 = 1;
 }

 if (VAR_29 & VAR_13) {
  FUNC_1(&VAR_24->dev, "Timeout error\n");
  VAR_30 = 1;
 }

 if (VAR_30) {

  VAR_25 = FUNC_0(VAR_5);
  FUNC_4(VAR_22->regmap, VAR_16,
       VAR_3, VAR_25);

  if (VAR_23)
   FUNC_5(VAR_23, VAR_2);

  return VAR_0;
 }

 if (VAR_31 && VAR_23)
  FUNC_6(VAR_23);

 return VAR_0;
}

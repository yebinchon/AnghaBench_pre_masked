
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int mic_work; int regmap; int fll_lock; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct wm8962_priv* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,int) ;
 int FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int ,int ,...) ;
 int FUNC_13 (int ,int ,unsigned int) ;
 int VAR_14 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_15, void *VAR_16)
{
 struct device *VAR_17 = VAR_16;
 struct wm8962_priv *VAR_18 = FUNC_4(VAR_17);
 unsigned int VAR_19;
 unsigned int VAR_20;
 int VAR_21, VAR_22;

 VAR_22 = FUNC_8(VAR_17);
 if (VAR_22 < 0) {
  FUNC_3(VAR_17, "Failed to resume: %d\n", VAR_22);
  return VAR_1;
 }

 VAR_22 = FUNC_12(VAR_18->regmap, VAR_5,
     &VAR_19);
 if (VAR_22 != 0) {
  FUNC_9(VAR_17);
  FUNC_3(VAR_17, "Failed to read interrupt mask: %d\n",
   VAR_22);
  return VAR_1;
 }

 VAR_22 = FUNC_12(VAR_18->regmap, VAR_4, &VAR_20);
 if (VAR_22 != 0) {
  FUNC_9(VAR_17);
  FUNC_3(VAR_17, "Failed to read interrupt: %d\n", VAR_22);
  return VAR_1;
 }

 VAR_20 &= ~VAR_19;

 if (!VAR_20) {
  FUNC_9(VAR_17);
  return VAR_1;
 }


 VAR_22 = FUNC_13(VAR_18->regmap, VAR_4, VAR_20);
 if (VAR_22 != 0)
  FUNC_6(VAR_17, "Failed to ack interrupt: %d\n", VAR_22);

 if (VAR_20 & VAR_3) {
  FUNC_2(VAR_17, "FLL locked\n");
  FUNC_0(&VAR_18->fll_lock);
 }

 if (VAR_20 & VAR_2)
  FUNC_3(VAR_17, "FIFO error\n");

 if (VAR_20 & VAR_10) {
  FUNC_1(VAR_17, "Thermal shutdown\n");

  VAR_22 = FUNC_12(VAR_18->regmap,
      VAR_13, &VAR_21);
  if (VAR_22 != 0) {
   FUNC_6(VAR_17, "Failed to read thermal status: %d\n",
     VAR_22);
   VAR_21 = 0;
  }

  if (VAR_21 & VAR_8)
   FUNC_1(VAR_17, "Headphone thermal error\n");
  if (VAR_21 & VAR_11)
   FUNC_1(VAR_17, "Headphone thermal warning\n");
  if (VAR_21 & VAR_9)
   FUNC_1(VAR_17, "Speaker thermal error\n");
  if (VAR_21 & VAR_12)
   FUNC_1(VAR_17, "Speaker thermal warning\n");
 }

 if (VAR_20 & (VAR_7 | VAR_6)) {
  FUNC_2(VAR_17, "Microphone event detected\n");


  FUNC_14(FUNC_5(VAR_17));


  FUNC_10(VAR_17, 300);

  FUNC_11(VAR_14,
       &VAR_18->mic_work,
       FUNC_7(250));
 }

 FUNC_9(VAR_17);

 return VAR_0;
}

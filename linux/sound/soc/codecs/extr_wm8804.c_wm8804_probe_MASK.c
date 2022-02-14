
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm8804_priv {TYPE_1__* supplies; int reset; TYPE_3__* disable_nb; struct regmap* regmap; struct device* dev; } ;
struct regulator {int dummy; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int notifier_call; } ;
struct TYPE_6__ {struct regulator* consumer; int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,unsigned int) ;
 int FUNC_5 (struct device*,struct wm8804_priv*) ;
 int FUNC_6 (struct device*,char*,int ) ;
 struct wm8804_priv* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,TYPE_1__*) ;
 int FUNC_9 (struct regulator*,TYPE_3__*) ;
 int FUNC_10 (struct device*,int *,int *,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct regmap*,int ,unsigned int*) ;
 int FUNC_16 (int,TYPE_1__*) ;
 int FUNC_17 (int,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (struct wm8804_priv*) ;
 int * VAR_11 ;

int FUNC_19(struct device *VAR_12, struct regmap *VAR_13)
{
 struct wm8804_priv *VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_14 = FUNC_7(VAR_12, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_5(VAR_12, VAR_14);

 VAR_14->dev = VAR_12;
 VAR_14->regmap = VAR_13;

 VAR_14->reset = FUNC_6(VAR_12, "wlf,reset",
      VAR_3);
 if (FUNC_1(VAR_14->reset)) {
  VAR_18 = FUNC_2(VAR_14->reset);
  FUNC_3(VAR_12, "Failed to get reset line: %d\n", VAR_18);
  return VAR_18;
 }

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_14->supplies); VAR_17++)
  VAR_14->supplies[VAR_17].supply = VAR_11[VAR_17];

 VAR_18 = FUNC_8(VAR_12, FUNC_0(VAR_14->supplies),
          VAR_14->supplies);
 if (VAR_18) {
  FUNC_3(VAR_12, "Failed to request supplies: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_14->disable_nb[0].notifier_call = VAR_9;
 VAR_14->disable_nb[1].notifier_call = VAR_10;


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_14->supplies); VAR_17++) {
  struct regulator *VAR_19 = VAR_14->supplies[VAR_17].consumer;

  VAR_18 = FUNC_9(VAR_19,
             &VAR_14->disable_nb[VAR_17]);
  if (VAR_18 != 0) {
   FUNC_3(VAR_12,
    "Failed to register regulator notifier: %d\n",
    VAR_18);
   return VAR_18;
  }
 }

 VAR_18 = FUNC_17(FUNC_0(VAR_14->supplies),
        VAR_14->supplies);
 if (VAR_18) {
  FUNC_3(VAR_12, "Failed to enable supplies: %d\n", VAR_18);
  return VAR_18;
 }

 FUNC_11(VAR_14->reset, 1);

 VAR_18 = FUNC_15(VAR_13, VAR_6, &VAR_15);
 if (VAR_18 < 0) {
  FUNC_3(VAR_12, "Failed to read device ID: %d\n", VAR_18);
  goto err_reg_enable;
 }

 VAR_18 = FUNC_15(VAR_13, VAR_4, &VAR_16);
 if (VAR_18 < 0) {
  FUNC_3(VAR_12, "Failed to read device ID: %d\n", VAR_18);
  goto err_reg_enable;
 }

 VAR_16 = (VAR_16 << 8) | VAR_15;

 if (VAR_16 != 0x8805) {
  FUNC_3(VAR_12, "Invalid device ID: %#x\n", VAR_16);
  VAR_18 = -VAR_0;
  goto err_reg_enable;
 }

 VAR_18 = FUNC_15(VAR_13, VAR_5, &VAR_15);
 if (VAR_18 < 0) {
  FUNC_3(VAR_12, "Failed to read device revision: %d\n",
   VAR_18);
  goto err_reg_enable;
 }
 FUNC_4(VAR_12, "revision %c\n", VAR_15 + 'A');

 if (!VAR_14->reset) {
  VAR_18 = FUNC_18(VAR_14);
  if (VAR_18 < 0) {
   FUNC_3(VAR_12, "Failed to issue reset: %d\n", VAR_18);
   goto err_reg_enable;
  }
 }

 VAR_18 = FUNC_10(VAR_12, &VAR_7,
         &VAR_8, 1);
 if (VAR_18 < 0) {
  FUNC_3(VAR_12, "Failed to register CODEC: %d\n", VAR_18);
  goto err_reg_enable;
 }

 FUNC_14(VAR_12);
 FUNC_12(VAR_12);
 FUNC_13(VAR_12);

 return 0;

err_reg_enable:
 FUNC_16(FUNC_0(VAR_14->supplies), VAR_14->supplies);
 return VAR_18;
}

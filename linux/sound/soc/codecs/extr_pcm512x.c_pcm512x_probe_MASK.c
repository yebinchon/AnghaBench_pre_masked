
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct pcm512x_priv {int pll_in; int pll_out; TYPE_1__* supplies; int sclk; struct regmap* regmap; TYPE_3__* supply_nb; int mutex; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_7__ {int notifier_call; } ;
struct TYPE_6__ {int consumer; int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,struct pcm512x_priv*) ;
 int FUNC_7 (struct device*,int *) ;
 struct pcm512x_priv* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_3__*) ;
 int FUNC_11 (struct device*,int *,int *,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct device_node const*,char*,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct regmap*,int ,int ,int ) ;
 int FUNC_19 (struct regmap*,int ,int) ;
 int FUNC_20 (int,TYPE_1__*) ;
 int FUNC_21 (int,TYPE_1__*) ;

int FUNC_22(struct device *VAR_15, struct regmap *VAR_16)
{
 struct pcm512x_priv *VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = FUNC_8(VAR_15, sizeof(struct pcm512x_priv), VAR_3);
 if (!VAR_17)
  return -VAR_1;

 FUNC_12(&VAR_17->mutex);

 FUNC_6(VAR_15, VAR_17);
 VAR_17->regmap = VAR_16;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_17->supplies); VAR_18++)
  VAR_17->supplies[VAR_18].supply = VAR_14[VAR_18];

 VAR_19 = FUNC_9(VAR_15, FUNC_0(VAR_17->supplies),
          VAR_17->supplies);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15, "Failed to get supplies: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_17->supply_nb[0].notifier_call = VAR_11;
 VAR_17->supply_nb[1].notifier_call = VAR_12;
 VAR_17->supply_nb[2].notifier_call = VAR_13;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_17->supplies); VAR_18++) {
  VAR_19 = FUNC_10(
      VAR_17->supplies[VAR_18].consumer,
      &VAR_17->supply_nb[VAR_18]);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15,
    "Failed to register regulator notifier: %d\n",
    VAR_19);
  }
 }

 VAR_19 = FUNC_21(FUNC_0(VAR_17->supplies),
        VAR_17->supplies);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15, "Failed to enable supplies: %d\n", VAR_19);
  return VAR_19;
 }


 VAR_19 = FUNC_19(VAR_16, VAR_5,
      VAR_7 | VAR_8);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15, "Failed to reset device: %d\n", VAR_19);
  goto err;
 }

 VAR_19 = FUNC_19(VAR_16, VAR_5, 0);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15, "Failed to reset device: %d\n", VAR_19);
  goto err;
 }

 VAR_17->sclk = FUNC_7(VAR_15, ((void*)0));
 if (FUNC_2(VAR_17->sclk) == -VAR_2)
  return -VAR_2;
 if (!FUNC_1(VAR_17->sclk)) {
  VAR_19 = FUNC_4(VAR_17->sclk);
  if (VAR_19 != 0) {
   FUNC_5(VAR_15, "Failed to enable SCLK: %d\n", VAR_19);
   return VAR_19;
  }
 }


 VAR_19 = FUNC_18(VAR_17->regmap, VAR_4,
     VAR_6, VAR_6);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15, "Failed to request standby: %d\n",
   VAR_19);
  goto err_clk;
 }

 FUNC_17(VAR_15);
 FUNC_15(VAR_15);
 FUNC_16(VAR_15);
 VAR_19 = FUNC_11(VAR_15, &VAR_9,
        &VAR_10, 1);
 if (VAR_19 != 0) {
  FUNC_5(VAR_15, "Failed to register CODEC: %d\n", VAR_19);
  goto err_pm;
 }

 return 0;

err_pm:
 FUNC_14(VAR_15);
err_clk:
 if (!FUNC_1(VAR_17->sclk))
  FUNC_3(VAR_17->sclk);
err:
 FUNC_20(FUNC_0(VAR_17->supplies),
         VAR_17->supplies);
 return VAR_19;
}

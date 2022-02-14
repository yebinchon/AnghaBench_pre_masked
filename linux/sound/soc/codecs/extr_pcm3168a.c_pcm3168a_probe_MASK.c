
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct pcm3168a_priv {struct regmap* scki; TYPE_1__* supplies; struct regmap* regmap; int sysclk; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,struct pcm3168a_priv*) ;
 struct regmap* FUNC_8 (struct device*,char*) ;
 struct pcm3168a_priv* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int,TYPE_1__*) ;
 int FUNC_11 (struct device*,int *,TYPE_1__*,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (struct pcm3168a_priv*) ;
 int * VAR_5 ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (int,TYPE_1__*) ;
 int FUNC_17 (int,TYPE_1__*) ;

int FUNC_18(struct device *VAR_6, struct regmap *VAR_7)
{
 struct pcm3168a_priv *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_9(VAR_6, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_7(VAR_6, VAR_8);

 VAR_8->scki = FUNC_8(VAR_6, "scki");
 if (FUNC_1(VAR_8->scki)) {
  VAR_9 = FUNC_2(VAR_8->scki);
  if (VAR_9 != -VAR_1)
   FUNC_6(VAR_6, "failed to acquire clock 'scki': %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_8->scki);
 if (VAR_9) {
  FUNC_6(VAR_6, "Failed to enable mclk: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_8->sysclk = FUNC_4(VAR_8->scki);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->supplies); VAR_10++)
  VAR_8->supplies[VAR_10].supply = VAR_5[VAR_10];

 VAR_9 = FUNC_10(VAR_6,
   FUNC_0(VAR_8->supplies), VAR_8->supplies);
 if (VAR_9) {
  if (VAR_9 != -VAR_1)
   FUNC_6(VAR_6, "failed to request supplies: %d\n", VAR_9);
  goto err_clk;
 }

 VAR_9 = FUNC_17(FUNC_0(VAR_8->supplies),
        VAR_8->supplies);
 if (VAR_9) {
  FUNC_6(VAR_6, "failed to enable supplies: %d\n", VAR_9);
  goto err_clk;
 }

 VAR_8->regmap = VAR_7;
 if (FUNC_1(VAR_8->regmap)) {
  VAR_9 = FUNC_2(VAR_8->regmap);
  FUNC_6(VAR_6, "failed to allocate regmap: %d\n", VAR_9);
  goto err_regulator;
 }

 VAR_9 = FUNC_12(VAR_8);
 if (VAR_9) {
  FUNC_6(VAR_6, "Failed to reset device: %d\n", VAR_9);
  goto err_regulator;
 }

 FUNC_15(VAR_6);
 FUNC_13(VAR_6);
 FUNC_14(VAR_6);

 VAR_9 = FUNC_11(VAR_6, &VAR_4, VAR_3,
   FUNC_0(VAR_3));
 if (VAR_9) {
  FUNC_6(VAR_6, "failed to register component: %d\n", VAR_9);
  goto err_regulator;
 }

 return 0;

err_regulator:
 FUNC_16(FUNC_0(VAR_8->supplies),
   VAR_8->supplies);
err_clk:
 FUNC_3(VAR_8->scki);

 return VAR_9;
}

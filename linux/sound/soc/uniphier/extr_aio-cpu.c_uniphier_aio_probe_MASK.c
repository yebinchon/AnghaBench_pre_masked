
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_sub {int lock; struct uniphier_aio* aio; } ;
struct uniphier_aio_pll {int dummy; } ;
struct uniphier_aio_chip {int num_aios; int num_wup_aios; int num_plls; int * clk; int * rst; TYPE_1__* chip_spec; struct platform_device* pdev; struct uniphier_aio* aios; void* plls; int * regmap_sg; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; int fmt; struct uniphier_aio_chip* chip; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int num_dais; int num_plls; int dais; int plls; } ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,char*) ;
 int * FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct device*,int,int,int ) ;
 struct uniphier_aio_chip* FUNC_8 (struct device*,int,int ) ;
 int * FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*,int *,int ,int) ;
 int FUNC_11 (void*,int ,int) ;
 TYPE_1__* FUNC_12 (struct device*) ;
 int FUNC_13 (struct platform_device*,struct uniphier_aio_chip*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int ,char*) ;
 int VAR_5 ;
 int FUNC_18 (struct platform_device*) ;

int FUNC_19(struct platform_device *VAR_6)
{
 struct uniphier_aio_chip *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = FUNC_8(VAR_8, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->chip_spec = FUNC_12(VAR_8);
 if (!VAR_7->chip_spec)
  return -VAR_0;

 VAR_7->regmap_sg = FUNC_17(VAR_8->of_node,
         "socionext,syscon");
 if (FUNC_1(VAR_7->regmap_sg)) {
  if (FUNC_2(VAR_7->regmap_sg) == -VAR_2)
   return -VAR_2;
  VAR_7->regmap_sg = ((void*)0);
 }

 VAR_7->clk = FUNC_6(VAR_8, "aio");
 if (FUNC_1(VAR_7->clk))
  return FUNC_2(VAR_7->clk);

 VAR_7->rst = FUNC_9(VAR_8, "aio");
 if (FUNC_1(VAR_7->rst))
  return FUNC_2(VAR_7->rst);

 VAR_7->num_aios = VAR_7->chip_spec->num_dais;
 VAR_7->num_wup_aios = VAR_7->num_aios;
 VAR_7->aios = FUNC_7(VAR_8,
      VAR_7->num_aios, sizeof(struct uniphier_aio),
      VAR_3);
 if (!VAR_7->aios)
  return -VAR_1;

 VAR_7->num_plls = VAR_7->chip_spec->num_plls;
 VAR_7->plls = FUNC_7(VAR_8,
      VAR_7->num_plls,
      sizeof(struct uniphier_aio_pll),
      VAR_3);
 if (!VAR_7->plls)
  return -VAR_1;
 FUNC_11(VAR_7->plls, VAR_7->chip_spec->plls,
        sizeof(struct uniphier_aio_pll) * VAR_7->num_plls);

 for (VAR_10 = 0; VAR_10 < VAR_7->num_aios; VAR_10++) {
  struct uniphier_aio *VAR_12 = &VAR_7->aios[VAR_10];

  VAR_12->chip = VAR_7;
  VAR_12->fmt = VAR_4;

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_12->sub); VAR_11++) {
   struct uniphier_aio_sub *VAR_13 = &VAR_12->sub[VAR_11];

   VAR_13->aio = VAR_12;
   FUNC_16(&VAR_13->lock);
  }
 }

 VAR_7->pdev = VAR_6;
 FUNC_13(VAR_6, VAR_7);

 VAR_9 = FUNC_4(VAR_7->clk);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_15(VAR_7->rst);
 if (VAR_9)
  goto err_out_clock;

 VAR_9 = FUNC_10(VAR_8, &VAR_5,
           VAR_7->chip_spec->dais,
           VAR_7->chip_spec->num_dais);
 if (VAR_9) {
  FUNC_5(VAR_8, "Register component failed.\n");
  goto err_out_reset;
 }

 VAR_9 = FUNC_18(VAR_6);
 if (VAR_9) {
  FUNC_5(VAR_8, "Register platform failed.\n");
  goto err_out_reset;
 }

 return 0;

err_out_reset:
 FUNC_14(VAR_7->rst);

err_out_clock:
 FUNC_3(VAR_7->clk);

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fsl_spdif_priv {int* txclk_src; int const* txclk_df; int const* sysclk_df; int const* txrate; int sysclk; struct clk** txclk; struct platform_device* pdev; } ;
struct clk {int dummy; } ;
typedef enum spdif_txrate { ____Placeholder_spdif_txrate } spdif_txrate ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct clk*) ;
 scalar_t__ FUNC_3 (struct clk*,int ) ;
 int FUNC_4 (struct device*,char*,int const,int const) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct clk* FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct fsl_spdif_priv*,struct clk*,int,int,int) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct fsl_spdif_priv *VAR_2,
    enum spdif_txrate VAR_3)
{
 static const u32 VAR_4[] = { 32000, 44100, 48000, 96000, 192000 };
 struct platform_device *VAR_5 = VAR_2->pdev;
 struct device *VAR_6 = &VAR_5->dev;
 u64 VAR_7 = 100000, VAR_8;
 struct clk *VAR_9;
 char VAR_10[16];
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_8(VAR_10, "rxtx%d", VAR_11);
  VAR_9 = FUNC_6(&VAR_5->dev, VAR_10);
  if (FUNC_0(VAR_9)) {
   FUNC_5(VAR_6, "no rxtx%d clock in devicetree\n", VAR_11);
   return FUNC_1(VAR_9);
  }
  if (!FUNC_2(VAR_9))
   continue;

  VAR_8 = FUNC_7(VAR_2, VAR_9, VAR_7, VAR_3,
          VAR_11 == VAR_0);
  if (VAR_7 == VAR_8)
   continue;

  VAR_7 = VAR_8;
  VAR_2->txclk[VAR_3] = VAR_9;
  VAR_2->txclk_src[VAR_3] = VAR_11;


  if (VAR_7 < 100)
   break;
 }

 FUNC_4(&VAR_5->dev, "use rxtx%d as tx clock source for %dHz sample rate\n",
   VAR_2->txclk_src[VAR_3], VAR_4[VAR_3]);
 FUNC_4(&VAR_5->dev, "use txclk df %d for %dHz sample rate\n",
   VAR_2->txclk_df[VAR_3], VAR_4[VAR_3]);
 if (FUNC_3(VAR_2->txclk[VAR_3], VAR_2->sysclk))
  FUNC_4(&VAR_5->dev, "use sysclk df %d for %dHz sample rate\n",
    VAR_2->sysclk_df[VAR_3], VAR_4[VAR_3]);
 FUNC_4(&VAR_5->dev, "the best rate for %dHz sample rate is %dHz\n",
   VAR_4[VAR_3], VAR_2->txrate[VAR_3]);

 return 0;
}

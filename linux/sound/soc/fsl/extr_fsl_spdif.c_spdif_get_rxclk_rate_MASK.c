
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {int sysclk; struct platform_device* pdev; struct regmap* regmap; } ;
typedef enum spdif_gainsel { ____Placeholder_spdif_gainsel } spdif_gainsel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,int) ;
 int* VAR_4 ;
 int FUNC_3 (struct regmap*,int ,int*) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct fsl_spdif_priv *VAR_6,
    enum spdif_gainsel VAR_7)
{
 struct regmap *VAR_8 = VAR_6->regmap;
 struct platform_device *VAR_9 = VAR_6->pdev;
 u64 VAR_10, VAR_11 = 0;
 u32 VAR_12, VAR_13;
 u8 VAR_14;

 FUNC_3(VAR_8, VAR_0, &VAR_12);
 FUNC_3(VAR_8, VAR_1, &VAR_13);

 VAR_14 = (VAR_13 >> VAR_2) & 0xf;


 if (VAR_5[VAR_14] && (VAR_13 & VAR_3))
  VAR_11 = FUNC_0(VAR_6->sysclk);


 VAR_10 = (u64) VAR_11 * VAR_12;
 FUNC_2(VAR_10, VAR_4[VAR_7] * 1024);
 FUNC_2(VAR_10, 128 * 1024);

 FUNC_1(&VAR_9->dev, "FreqMeas: %d\n", VAR_12);
 FUNC_1(&VAR_9->dev, "BusclkFreq: %lld\n", VAR_11);
 FUNC_1(&VAR_9->dev, "RxRate: %lld\n", VAR_10);

 return (int)VAR_10;
}

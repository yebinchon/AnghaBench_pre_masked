
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct fsl_micfil {int regmap; struct platform_device* pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct fsl_micfil *VAR_8 = (struct fsl_micfil *)VAR_7;
 struct platform_device *VAR_9 = VAR_8->pdev;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 bool VAR_13;
 int VAR_14;

 FUNC_5(VAR_8->regmap, VAR_5, &VAR_10);
 FUNC_5(VAR_8->regmap, VAR_3, &VAR_12);
 FUNC_5(VAR_8->regmap, VAR_4, &VAR_11);

 VAR_13 = FUNC_0(VAR_12);


 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  if (VAR_10 & FUNC_3(VAR_14))
   FUNC_4(&VAR_9->dev,
    "Data available in Data Channel %d\n", VAR_14);



  if (!VAR_13)
   FUNC_6(VAR_8->regmap,
       VAR_5,
       FUNC_3(VAR_14),
       1);
 }

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  if (VAR_11 & FUNC_1(VAR_14))
   FUNC_4(&VAR_9->dev,
    "FIFO Overflow Exception flag for channel %d\n",
    VAR_14);

  if (VAR_11 & FUNC_2(VAR_14))
   FUNC_4(&VAR_9->dev,
    "FIFO Underflow Exception flag for channel %d\n",
    VAR_14);
 }

 return VAR_0;
}

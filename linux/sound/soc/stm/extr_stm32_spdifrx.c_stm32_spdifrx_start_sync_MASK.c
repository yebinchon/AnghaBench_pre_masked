
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_spdifrx_data {int lock; TYPE_1__* pdev; int regmap; int refcount; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct stm32_spdifrx_data *VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;


 VAR_16 = VAR_7 | VAR_9 | VAR_8;
 VAR_17 = FUNC_4(VAR_13->regmap, VAR_12, VAR_16, VAR_16);
 if (VAR_17)
  return VAR_17;

 FUNC_5(&VAR_13->lock);

 VAR_13->refcount++;

 FUNC_3(VAR_13->regmap, VAR_11, &VAR_14);

 if (!(VAR_14 & VAR_4)) {




  FUNC_1(&VAR_13->pdev->dev, "start synchronization\n");
  VAR_14 = VAR_6 | VAR_1 | VAR_5 |
       VAR_0 | VAR_2 | VAR_3;
  VAR_15 = VAR_14;

  VAR_14 |= FUNC_0(VAR_10);
  VAR_15 |= VAR_4;
  VAR_17 = FUNC_4(VAR_13->regmap, VAR_11,
      VAR_15, VAR_14);
  if (VAR_17 < 0)
   FUNC_2(&VAR_13->pdev->dev,
    "Failed to start synchronization\n");
 }

 FUNC_6(&VAR_13->lock);

 return VAR_17;
}

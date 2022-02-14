
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fsl_asrc {TYPE_2__** pair; int regmap; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;
struct TYPE_4__ {int error; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct fsl_asrc *VAR_13 = (struct fsl_asrc *)VAR_12;
 struct device *VAR_14 = &VAR_13->pdev->dev;
 enum asrc_pair_index VAR_15;
 u32 VAR_16;

 FUNC_6(VAR_13->regmap, VAR_10, &VAR_16);


 FUNC_7(VAR_13->regmap, VAR_10, VAR_7);






 for (VAR_15 = VAR_4; VAR_15 < VAR_5; VAR_15++) {
  if (!VAR_13->pair[VAR_15])
   continue;

  if (VAR_16 & VAR_8) {
   VAR_13->pair[VAR_15]->error |= VAR_6;
   FUNC_4(VAR_14, "ASRC Task Queue FIFO overload\n");
  }

  if (VAR_16 & FUNC_3(VAR_15)) {
   VAR_13->pair[VAR_15]->error |= VAR_3;
   FUNC_5("Output Task Overload\n");
  }

  if (VAR_16 & FUNC_1(VAR_15)) {
   VAR_13->pair[VAR_15]->error |= VAR_1;
   FUNC_5("Input Task Overload\n");
  }

  if (VAR_16 & FUNC_2(VAR_15)) {
   VAR_13->pair[VAR_15]->error |= VAR_2;
   FUNC_5("Output Data Buffer has overflowed\n");
  }

  if (VAR_16 & FUNC_0(VAR_15)) {
   VAR_13->pair[VAR_15]->error |= VAR_0;
   FUNC_5("Input Data Buffer has underflowed\n");
  }
 }

 return VAR_9;
}

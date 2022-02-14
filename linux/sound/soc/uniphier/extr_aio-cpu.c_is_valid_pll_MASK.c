
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_chip {int num_plls; TYPE_2__* plls; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int enable; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct uniphier_aio_chip *VAR_0, int VAR_1)
{
 struct device *VAR_2 = &VAR_0->pdev->dev;

 if (VAR_1 < 0 || VAR_0->num_plls <= VAR_1) {
  FUNC_0(VAR_2, "PLL(%d) is not supported\n", VAR_1);
  return 0;
 }

 return VAR_0->plls[VAR_1].enable;
}

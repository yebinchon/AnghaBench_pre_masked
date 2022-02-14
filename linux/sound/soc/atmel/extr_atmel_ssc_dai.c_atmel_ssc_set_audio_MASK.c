
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssc_device {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct ssc_device* ssc; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct ssc_device*) ;
 int FUNC_1 (struct ssc_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 TYPE_2__* VAR_0 ;
 struct ssc_device* FUNC_4 (int) ;

int FUNC_5(int VAR_1)
{
 struct ssc_device *VAR_2;
 int VAR_3;


 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_3("Unable to parent ASoC SSC DAI on SSC: %ld\n",
   FUNC_1(VAR_2));
  return FUNC_1(VAR_2);
 } else {
  VAR_0[VAR_1].ssc = VAR_2;
 }

 VAR_3 = FUNC_2(&VAR_2->pdev->dev);

 return VAR_3;
}

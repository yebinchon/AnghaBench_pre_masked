
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssc_device {TYPE_1__* pdata; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ use_dma; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct ssc_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct ssc_device *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2, &VAR_0,
      &VAR_1, 1);
 if (VAR_4) {
  FUNC_2(VAR_2, "Could not register DAI: %d\n", VAR_4);
  return VAR_4;
 }

 if (VAR_3->pdata->use_dma)
  VAR_4 = FUNC_0(VAR_2);
 else
  VAR_4 = FUNC_1(VAR_2);

 if (VAR_4) {
  FUNC_2(VAR_2, "Could not register PCM: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_fw {struct sst_dsp* dsp; } ;
struct sst_dsp {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* parse_fw ) (struct sst_fw*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct sst_fw*) ;

int FUNC_3(struct sst_fw *VAR_0)
{
 struct sst_dsp *VAR_1 = VAR_0->dsp;
 int VAR_2;

 FUNC_0(VAR_1->dev, "reloading firmware\n");


 VAR_2 = VAR_1->ops->parse_fw(VAR_0);
 if (VAR_2 < 0)
  FUNC_1(VAR_1->dev, "error: parse fw failed %d\n", VAR_2);

 return VAR_2;
}

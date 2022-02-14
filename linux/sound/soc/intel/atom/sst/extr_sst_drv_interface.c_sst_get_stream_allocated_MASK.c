
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sst_params {int dummy; } ;
struct snd_sst_lib_download {int dummy; } ;
struct intel_sst_drv {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* alloc_stream ) (struct intel_sst_drv*,struct snd_sst_params*) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct intel_sst_drv*,struct snd_sst_params*) ;

int FUNC_2(struct intel_sst_drv *VAR_0,
 struct snd_sst_params *VAR_1,
 struct snd_sst_lib_download **VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_0->ops->alloc_stream(VAR_0, VAR_1);
 if (VAR_3 > 0)
  FUNC_0(VAR_0->dev, "Stream allocated %d\n", VAR_3);
 return VAR_3;

}

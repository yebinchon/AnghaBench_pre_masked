
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* load_fw ) (struct sst_dsp*) ;} ;
struct sst_dsp {TYPE_1__ fw_ops; } ;
struct skl_dev {int is_first_boot; struct sst_dsp* dsp; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct sst_dsp*) ;
 int FUNC_2 (struct sst_dsp*) ;

int FUNC_3(struct device *VAR_0, struct skl_dev *VAR_1)
{
 int VAR_2;
 struct sst_dsp *VAR_3 = VAR_1->dsp;

 VAR_2 = VAR_1->dsp->fw_ops.load_fw(VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0, "load base fw failed: %d", VAR_2);
  return VAR_2;
 }

 FUNC_1(VAR_3);

 VAR_1->is_first_boot = 0;

 return 0;
}

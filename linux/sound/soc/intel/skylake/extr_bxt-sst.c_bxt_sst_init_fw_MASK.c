
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* load_fw ) (struct sst_dsp*) ;int (* load_library ) (struct sst_dsp*,int ,int) ;} ;
struct sst_dsp {TYPE_1__ fw_ops; } ;
struct skl_dev {int lib_count; int is_first_boot; int lib_info; struct sst_dsp* dsp; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct sst_dsp*) ;
 int FUNC_2 (struct sst_dsp*) ;
 int FUNC_3 (struct sst_dsp*,int ,int) ;

int FUNC_4(struct device *VAR_0, struct skl_dev *VAR_1)
{
 int VAR_2;
 struct sst_dsp *VAR_3 = VAR_1->dsp;

 VAR_2 = VAR_3->fw_ops.load_fw(VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0, "Load base fw failed: %x\n", VAR_2);
  return VAR_2;
 }

 FUNC_1(VAR_3);

 if (VAR_1->lib_count > 1) {
  VAR_2 = VAR_3->fw_ops.load_library(VAR_3, VAR_1->lib_info,
      VAR_1->lib_count);
  if (VAR_2 < 0) {
   FUNC_0(VAR_0, "Load Library failed : %x\n", VAR_2);
   return VAR_2;
  }
 }
 VAR_1->is_first_boot = 0;

 return 0;
}

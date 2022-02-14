
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* load_library ) (struct sst_dsp*,int ,int) ;} ;
struct sst_dsp {int dev; TYPE_1__ fw_ops; struct skl_dev* thread_context; } ;
struct skl_ipc_dxstate_info {unsigned int core_mask; unsigned int dx_mask; } ;
struct TYPE_4__ {int * state; } ;
struct skl_dev {int lib_count; TYPE_2__ cores; int ipc; int lib_info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct sst_dsp*,unsigned int) ;
 int FUNC_3 (struct sst_dsp*,unsigned int) ;
 int FUNC_4 (int *,int ,int ,struct skl_ipc_dxstate_info*) ;
 int FUNC_5 (struct sst_dsp*) ;
 int FUNC_6 (struct sst_dsp*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sst_dsp *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 struct skl_ipc_dxstate_info VAR_7;
 struct skl_dev *VAR_8 = VAR_4->thread_context;
 unsigned int VAR_9 = FUNC_0(VAR_5);


 if (VAR_5 == VAR_1) {
  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6 < 0) {
   FUNC_1(VAR_4->dev, "unable to load firmware\n");
   return VAR_6;
  }


  if (VAR_8->lib_count > 1) {
   VAR_6 = VAR_4->fw_ops.load_library(VAR_4, VAR_8->lib_info,
       VAR_8->lib_count);
   if (VAR_6 < 0) {
    FUNC_1(VAR_4->dev, "reload libs failed: %d\n",
      VAR_6);
    return VAR_6;
   }

  }
 }





 if (VAR_5 != VAR_1) {
  VAR_6 = FUNC_3(VAR_4, VAR_9);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_7.core_mask = VAR_9;
  VAR_7.dx_mask = VAR_9;

  VAR_6 = FUNC_4(&VAR_8->ipc, VAR_3,
     VAR_0, &VAR_7);
  if (VAR_6 < 0) {
   FUNC_1(VAR_4->dev, "Failed to set dsp to D0:core id= %d\n",
     VAR_5);
   FUNC_2(VAR_4, VAR_9);
  }
 }

 VAR_8->cores.state[VAR_5] = VAR_2;

 return 0;
}

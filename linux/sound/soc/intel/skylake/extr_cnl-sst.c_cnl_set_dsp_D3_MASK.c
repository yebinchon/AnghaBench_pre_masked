
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {int dev; struct skl_dev* thread_context; } ;
struct skl_ipc_dxstate_info {unsigned int core_mask; int dx_mask; } ;
struct TYPE_2__ {int * state; } ;
struct skl_dev {int fw_loaded; TYPE_1__ cores; int ipc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sst_dsp*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,...) ;
 int FUNC_3 (struct sst_dsp*) ;
 int FUNC_4 (struct sst_dsp*) ;
 int FUNC_5 (int *,int ,int ,struct skl_ipc_dxstate_info*) ;

__attribute__((used)) static int FUNC_6(struct sst_dsp *VAR_5, unsigned int VAR_6)
{
 struct skl_dev *VAR_7 = VAR_5->thread_context;
 unsigned int VAR_8 = FUNC_0(VAR_6);
 struct skl_ipc_dxstate_info VAR_9;
 int VAR_10;

 VAR_9.core_mask = VAR_8;
 VAR_9.dx_mask = VAR_4;

 VAR_10 = FUNC_5(&VAR_7->ipc, VAR_1,
        VAR_0, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(VAR_5->dev,
   "dsp core %d to d3 failed; continue reset\n",
   VAR_6);
  VAR_7->fw_loaded = 0;
 }


 if (VAR_6 == VAR_2) {
  FUNC_4(VAR_5);
  FUNC_3(VAR_5);
 }

 VAR_10 = FUNC_1(VAR_5, VAR_8);
 if (VAR_10 < 0) {
  FUNC_2(VAR_5->dev, "disable dsp core %d failed: %d\n",
   VAR_6, VAR_10);
  return VAR_10;
 }

 VAR_7->cores.state[VAR_6] = VAR_3;

 return VAR_10;
}

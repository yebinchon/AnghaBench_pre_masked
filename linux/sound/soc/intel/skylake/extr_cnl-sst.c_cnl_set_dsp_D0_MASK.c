
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {int dev; struct skl_dev* thread_context; } ;
struct skl_ipc_dxstate_info {unsigned int core_mask; unsigned int dx_mask; } ;
struct TYPE_2__ {void** state; } ;
struct skl_dev {int boot_complete; TYPE_1__ cores; int ipc; int boot_wait; int fw_loaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sst_dsp*,unsigned int) ;
 int FUNC_2 (struct sst_dsp*,unsigned int) ;
 int FUNC_3 (struct sst_dsp*) ;
 int FUNC_4 (struct sst_dsp*) ;
 int FUNC_5 (struct sst_dsp*) ;
 int FUNC_6 (int ,char*,unsigned int,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,struct skl_ipc_dxstate_info*) ;
 int FUNC_9 (struct sst_dsp*,int ) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct sst_dsp *VAR_7, unsigned int VAR_8)
{
 struct skl_dev *VAR_9 = VAR_7->thread_context;
 unsigned int VAR_10 = FUNC_0(VAR_8);
 struct skl_ipc_dxstate_info VAR_11;
 int VAR_12;

 if (!VAR_9->fw_loaded) {
  VAR_9->boot_complete = 0;
  VAR_12 = FUNC_5(VAR_7);
  if (VAR_12 < 0) {
   FUNC_6(VAR_7->dev, "fw reload failed: %d\n", VAR_12);
   return VAR_12;
  }

  VAR_9->cores.state[VAR_8] = VAR_5;
  return VAR_12;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_10);
 if (VAR_12 < 0) {
  FUNC_6(VAR_7->dev, "enable dsp core %d failed: %d\n",
   VAR_8, VAR_12);
  goto err;
 }

 if (VAR_8 == VAR_4) {

  FUNC_3(VAR_7);
  FUNC_4(VAR_7);
  VAR_9->boot_complete = 0;

  VAR_12 = FUNC_10(VAR_9->boot_wait, VAR_9->boot_complete,
      FUNC_7(VAR_6));
  if (VAR_12 == 0) {
   FUNC_6(VAR_7->dev,
    "dsp boot timeout, status=%#x error=%#x\n",
    FUNC_9(VAR_7, VAR_1),
    FUNC_9(VAR_7, VAR_0));
   goto err;
  }
 } else {
  VAR_11.core_mask = VAR_10;
  VAR_11.dx_mask = VAR_10;

  VAR_12 = FUNC_8(&VAR_9->ipc, VAR_3,
         VAR_2, &VAR_11);
  if (VAR_12 < 0) {
   FUNC_6(VAR_7->dev, "set_dx failed, core: %d ret: %d\n",
    VAR_8, VAR_12);
   goto err;
  }
 }
 VAR_9->cores.state[VAR_8] = VAR_5;

 return 0;
err:
 FUNC_1(VAR_7, VAR_10);

 return VAR_12;
}

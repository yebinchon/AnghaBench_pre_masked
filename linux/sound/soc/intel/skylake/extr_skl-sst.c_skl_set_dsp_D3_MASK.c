
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* cl_cleanup_controller ) (struct sst_dsp*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct sst_dsp {TYPE_2__ cl_dev; int dev; struct skl_dev* thread_context; } ;
struct skl_ipc_dxstate_info {unsigned int core_mask; int dx_mask; } ;
struct TYPE_6__ {int * state; } ;
struct skl_dev {TYPE_3__ cores; int ipc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (struct sst_dsp*) ;
 int FUNC_3 (struct sst_dsp*,unsigned int) ;
 int FUNC_4 (struct sst_dsp*) ;
 int FUNC_5 (struct sst_dsp*) ;
 int FUNC_6 (int *,int ,int ,struct skl_ipc_dxstate_info*) ;
 int FUNC_7 (struct sst_dsp*) ;

__attribute__((used)) static int FUNC_8(struct sst_dsp *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct skl_ipc_dxstate_info VAR_8;
 struct skl_dev *VAR_9 = VAR_5->thread_context;
 unsigned int VAR_10 = FUNC_0(VAR_6);

 VAR_8.core_mask = VAR_10;
 VAR_8.dx_mask = VAR_4;

 VAR_7 = FUNC_6(&VAR_9->ipc, VAR_3, VAR_0, &VAR_8);
 if (VAR_7 < 0)
  FUNC_1(VAR_5->dev, "set Dx core %d fail: %d\n", VAR_6, VAR_7);

 if (VAR_6 == VAR_1) {

  VAR_5->cl_dev.ops.cl_cleanup_controller(VAR_5);
  FUNC_2(VAR_5);
  FUNC_5(VAR_5);
  FUNC_4(VAR_5);
 }

 VAR_7 = FUNC_3(VAR_5, VAR_10);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_9->cores.state[VAR_6] = VAR_2;
 return VAR_7;
}

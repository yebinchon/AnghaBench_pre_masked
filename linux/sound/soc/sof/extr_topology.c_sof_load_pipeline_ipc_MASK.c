
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int size; } ;
struct sof_ipc_pm_core_config {int core; int enable_mask; TYPE_1__ hdr; } ;
struct sof_ipc_pipe_new {int core; int enable_mask; TYPE_1__ hdr; } ;
struct sof_ipc_comp_reply {int core; int enable_mask; TYPE_1__ hdr; } ;
struct snd_sof_dev {int enabled_cores_mask; int dev; int ipc; } ;
typedef int pm_core_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sof_ipc_pm_core_config*,int ,int) ;
 int FUNC_2 (struct snd_sof_dev*,int) ;
 int FUNC_3 (int ,int,struct sof_ipc_pm_core_config*,int,struct sof_ipc_pm_core_config*,int) ;

int FUNC_4(struct snd_sof_dev *VAR_2,
     struct sof_ipc_pipe_new *VAR_3,
     struct sof_ipc_comp_reply *VAR_4)
{
 struct sof_ipc_pm_core_config VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2->ipc, VAR_3->hdr.cmd, VAR_3,
     sizeof(*VAR_3), VAR_4, sizeof(*VAR_4));
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "error: load pipeline ipc failure\n");
  return VAR_6;
 }


 VAR_6 = FUNC_2(VAR_2, 1 << VAR_3->core);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "error: powering up pipeline schedule core %d\n",
   VAR_3->core);
  return VAR_6;
 }


 VAR_2->enabled_cores_mask |= 1 << VAR_3->core;





 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.enable_mask = VAR_2->enabled_cores_mask;


 VAR_5.hdr.size = sizeof(VAR_5);
 VAR_5.hdr.cmd = VAR_0 | VAR_1;


 VAR_6 = FUNC_3(VAR_2->ipc, VAR_5.hdr.cmd,
     &VAR_5, sizeof(VAR_5),
     &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  FUNC_0(VAR_2->dev, "error: core enable ipc failure\n");

 return VAR_6;
}

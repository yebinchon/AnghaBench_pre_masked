
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sof_pdata {TYPE_1__* desc; } ;
struct snd_sof_dev {int first_boot; scalar_t__ ipc_timeout; scalar_t__ boot_timeout; int probe_work; int hw_lock; int ipc_lock; int route_list; int dai_list; int widget_list; int kcontrol_list; int pcm_list; struct snd_sof_pdata* pdata; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int ipc_pcm_params; int ipc_msg_data; int load_firmware; int send_msg; int block_write; int block_read; int run; int probe; } ;
struct TYPE_3__ {scalar_t__ ipc_timeout; scalar_t__ boot_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct device*,struct snd_sof_dev*) ;
 struct snd_sof_dev* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (struct snd_sof_dev*) ;
 int FUNC_7 (struct snd_sof_dev*) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;

int FUNC_9(struct device *VAR_7, struct snd_sof_pdata *VAR_8)
{
 struct snd_sof_dev *VAR_9;

 VAR_9 = FUNC_4(VAR_7, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;


 VAR_9->dev = VAR_7;

 VAR_9->pdata = VAR_8;
 VAR_9->first_boot = 1;
 FUNC_3(VAR_7, VAR_9);


 if (!FUNC_6(VAR_9) || !FUNC_6(VAR_9)->probe || !FUNC_6(VAR_9)->run ||
     !FUNC_6(VAR_9)->block_read || !FUNC_6(VAR_9)->block_write ||
     !FUNC_6(VAR_9)->send_msg || !FUNC_6(VAR_9)->load_firmware ||
     !FUNC_6(VAR_9)->ipc_msg_data || !FUNC_6(VAR_9)->ipc_pcm_params)
  return -VAR_1;

 FUNC_0(&VAR_9->pcm_list);
 FUNC_0(&VAR_9->kcontrol_list);
 FUNC_0(&VAR_9->widget_list);
 FUNC_0(&VAR_9->dai_list);
 FUNC_0(&VAR_9->route_list);
 FUNC_8(&VAR_9->ipc_lock);
 FUNC_8(&VAR_9->hw_lock);

 if (FUNC_2(VAR_0))
  FUNC_1(&VAR_9->probe_work, VAR_6);


 if (VAR_8->desc->ipc_timeout == 0)
  VAR_9->ipc_timeout = VAR_5;
 else
  VAR_9->ipc_timeout = VAR_8->desc->ipc_timeout;
 if (VAR_8->desc->boot_timeout == 0)
  VAR_9->boot_timeout = VAR_4;
 else
  VAR_9->boot_timeout = VAR_8->desc->boot_timeout;

 if (FUNC_2(VAR_0)) {
  FUNC_5(&VAR_9->probe_work);
  return 0;
 }

 return FUNC_7(VAR_9);
}

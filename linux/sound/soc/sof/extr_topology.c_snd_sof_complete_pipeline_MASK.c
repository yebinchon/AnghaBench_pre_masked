
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sof_ipc_reply {int dummy; } ;
struct TYPE_3__ {int size; int cmd; } ;
struct sof_ipc_pipe_ready {TYPE_1__ hdr; int comp_id; } ;
struct snd_sof_widget {int comp_id; TYPE_2__* widget; } ;
struct snd_sof_dev {int ipc; int dev; } ;
typedef int reply ;
typedef int ready ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct sof_ipc_pipe_ready*,int ,int) ;
 int FUNC_2 (int ,int,struct sof_ipc_pipe_ready*,int,struct sof_ipc_reply*,int) ;

int FUNC_3(struct snd_sof_dev *VAR_2,
         struct snd_sof_widget *VAR_3)
{
 struct sof_ipc_pipe_ready VAR_4;
 struct sof_ipc_reply VAR_5;
 int VAR_6;

 FUNC_0(VAR_2->dev, "tplg: complete pipeline %s id %d\n",
  VAR_3->widget->name, VAR_3->comp_id);

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.size = sizeof(VAR_4);
 VAR_4.hdr.cmd = VAR_0 | VAR_1;
 VAR_4.comp_id = VAR_3->comp_id;

 VAR_6 = FUNC_2(VAR_2->ipc,
     VAR_4.hdr.cmd, &VAR_4, sizeof(VAR_4), &VAR_5,
     sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 return 1;
}

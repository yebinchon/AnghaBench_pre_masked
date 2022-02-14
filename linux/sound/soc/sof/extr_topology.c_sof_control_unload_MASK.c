
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int size; } ;
struct sof_ipc_free {TYPE_1__ hdr; int id; } ;
struct snd_sof_dev {int ipc; int dev; } ;
struct snd_sof_control {int list; struct snd_sof_control* control_data; int comp_id; } ;
struct snd_soc_dobj {struct snd_sof_control* private; } ;
struct snd_soc_component {int name; } ;
typedef int fcomp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct snd_sof_control*) ;
 int FUNC_2 (int *) ;
 struct snd_sof_dev* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (int ,int,struct sof_ipc_free*,int,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2,
         struct snd_soc_dobj *VAR_3)
{
 struct snd_sof_dev *VAR_4 = FUNC_3(VAR_2);
 struct sof_ipc_free VAR_5;
 struct snd_sof_control *VAR_6 = VAR_3->private;

 FUNC_0(VAR_4->dev, "tplg: unload control name : %s\n", VAR_2->name);

 VAR_5.hdr.cmd = VAR_0 | VAR_1;
 VAR_5.hdr.size = sizeof(VAR_5);
 VAR_5.id = VAR_6->comp_id;

 FUNC_1(VAR_6->control_data);
 FUNC_2(&VAR_6->list);
 FUNC_1(VAR_6);

 return FUNC_4(VAR_4->ipc,
      VAR_5.hdr.cmd, &VAR_5, sizeof(VAR_5),
      ((void*)0), 0);
}

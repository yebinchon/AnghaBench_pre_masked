
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dobj {struct snd_sof_control* private; } ;
struct soc_mixer_control {struct snd_soc_dobj dobj; } ;
struct soc_enum {struct snd_soc_dobj dobj; } ;
struct soc_bytes_ext {struct snd_soc_dobj dobj; } ;
struct snd_sof_dev {int kcontrol_list; int dev; } ;
struct snd_sof_control {int list; struct snd_sof_dev* sdev; } ;
struct TYPE_2__ {int info; int put; int get; } ;
struct snd_soc_tplg_ctl_hdr {TYPE_1__ ops; int name; int type; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol_new {scalar_t__ private_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct snd_sof_control*) ;
 struct snd_sof_control* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 struct snd_sof_dev* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,struct snd_sof_control*,struct snd_kcontrol_new*,struct snd_soc_tplg_ctl_hdr*) ;
 int FUNC_8 (struct snd_soc_component*,struct snd_sof_control*,struct snd_kcontrol_new*,struct snd_soc_tplg_ctl_hdr*) ;
 int FUNC_9 (struct snd_soc_component*,struct snd_sof_control*,struct snd_kcontrol_new*,struct snd_soc_tplg_ctl_hdr*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_3, int VAR_4,
       struct snd_kcontrol_new *VAR_5,
       struct snd_soc_tplg_ctl_hdr *VAR_6)
{
 struct soc_mixer_control *VAR_7;
 struct soc_bytes_ext *VAR_8;
 struct soc_enum *VAR_9;
 struct snd_sof_dev *VAR_10 = FUNC_6(VAR_3);
 struct snd_soc_dobj *VAR_11;
 struct snd_sof_control *VAR_12;
 int VAR_13 = -VAR_0;

 FUNC_0(VAR_10->dev, "tplg: load control type %d name : %s\n",
  VAR_6->type, VAR_6->name);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->sdev = VAR_10;

 switch (FUNC_4(VAR_6->ops.info)) {
 case 135:
 case 134:
 case 133:
  VAR_7 = (struct soc_mixer_control *)VAR_5->private_value;
  VAR_11 = &VAR_7->dobj;
  VAR_13 = FUNC_9(VAR_3, VAR_12, VAR_5, VAR_6);
  break;
 case 140:
  VAR_8 = (struct soc_bytes_ext *)VAR_5->private_value;
  VAR_11 = &VAR_8->dobj;
  VAR_13 = FUNC_7(VAR_3, VAR_12, VAR_5, VAR_6);
  break;
 case 139:
 case 138:
  VAR_9 = (struct soc_enum *)VAR_5->private_value;
  VAR_11 = &VAR_9->dobj;
  VAR_13 = FUNC_8(VAR_3, VAR_12, VAR_5, VAR_6);
  break;
 case 137:
 case 136:
 case 128:
 case 132:
 case 130:
 case 131:
 case 129:
 default:
  FUNC_1(VAR_10->dev, "control type not supported %d:%d:%d\n",
    VAR_6->ops.get, VAR_6->ops.put, VAR_6->ops.info);
  FUNC_2(VAR_12);
  return 0;
 }

 VAR_11->private = VAR_12;
 FUNC_5(&VAR_12->list, &VAR_10->kcontrol_list);
 return VAR_13;
}

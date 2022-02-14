
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int template ;
struct soc_tplg {int pos; TYPE_5__* comp; int index; int ops; int dev; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct snd_soc_tplg_dapm_widget {scalar_t__ id; scalar_t__ reg; scalar_t__ shift; scalar_t__ mask; scalar_t__ subseq; scalar_t__ ignore_suspend; scalar_t__ num_kcontrols; int name; TYPE_1__ priv; int event_flags; scalar_t__ invert; int sname; } ;
struct TYPE_7__ {scalar_t__ info; int put; int get; } ;
struct snd_soc_tplg_ctl_hdr {TYPE_2__ ops; int type; } ;
struct TYPE_8__ {unsigned int kcontrol_type; } ;
struct TYPE_9__ {int list; int index; int ops; TYPE_3__ widget; int type; } ;
struct snd_soc_dapm_widget {int id; int reg; int shift; int mask; int subseq; int on_val; int off_val; int ignore_suspend; int num_kcontrols; void* name; void* sname; TYPE_4__ dobj; int kcontrol_news; int event_flags; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_card {scalar_t__ instantiated; } ;
struct TYPE_10__ {int dobj_list; struct snd_soc_card* card; struct snd_soc_dapm_context dapm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_soc_dapm_widget*) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (int ,char*,int ,scalar_t__,...) ;
 int FUNC_3 (int ,char*,int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct snd_soc_dapm_widget*,int ,int) ;
 int FUNC_11 (struct snd_soc_dapm_widget*) ;
 struct snd_soc_dapm_widget* FUNC_12 (struct snd_soc_dapm_context*,struct snd_soc_dapm_widget*) ;
 struct snd_soc_dapm_widget* FUNC_13 (struct snd_soc_dapm_context*,struct snd_soc_dapm_widget*) ;
 int FUNC_14 (struct snd_soc_dapm_widget*) ;
 int FUNC_15 (struct soc_tplg*,int) ;
 int FUNC_16 (struct soc_tplg*,int) ;
 int FUNC_17 (struct soc_tplg*,int) ;
 int FUNC_18 (struct soc_tplg*,struct snd_soc_dapm_widget*,struct snd_soc_tplg_dapm_widget*) ;
 int FUNC_19 (struct soc_tplg*,struct snd_soc_dapm_widget*,struct snd_soc_tplg_dapm_widget*) ;
 scalar_t__ FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct soc_tplg *VAR_8,
 struct snd_soc_tplg_dapm_widget *VAR_9)
{
 struct snd_soc_dapm_context *VAR_10 = &VAR_8->comp->dapm;
 struct snd_soc_dapm_widget VAR_11, *VAR_12;
 struct snd_soc_tplg_ctl_hdr *VAR_13;
 struct snd_soc_card *VAR_14 = VAR_8->comp->card;
 unsigned int VAR_15;
 int VAR_16 = 0;

 if (FUNC_20(VAR_9->name, VAR_3) ==
  VAR_3)
  return -VAR_0;
 if (FUNC_20(VAR_9->sname, VAR_3) ==
  VAR_3)
  return -VAR_0;

 FUNC_2(VAR_8->dev, "ASoC: creating DAPM widget %s id %d\n",
  VAR_9->name, VAR_9->id);

 FUNC_10(&VAR_11, 0, sizeof(VAR_11));


 VAR_11.id = FUNC_4(FUNC_8(VAR_9->id));
 if ((int)VAR_11.id < 0)
  return VAR_11.id;


 VAR_11.name = FUNC_6(VAR_9->name, VAR_2);
 if (!VAR_11.name)
  return -VAR_1;
 VAR_11.sname = FUNC_6(VAR_9->sname, VAR_2);
 if (!VAR_11.sname) {
  VAR_16 = -VAR_1;
  goto err;
 }
 VAR_11.reg = FUNC_8(VAR_9->reg);
 VAR_11.shift = FUNC_8(VAR_9->shift);
 VAR_11.mask = FUNC_8(VAR_9->mask);
 VAR_11.subseq = FUNC_8(VAR_9->subseq);
 VAR_11.on_val = VAR_9->invert ? 0 : 1;
 VAR_11.off_val = VAR_9->invert ? 1 : 0;
 VAR_11.ignore_suspend = FUNC_8(VAR_9->ignore_suspend);
 VAR_11.event_flags = FUNC_7(VAR_9->event_flags);
 VAR_11.dobj.index = VAR_8->index;

 VAR_8->pos +=
  (sizeof(struct snd_soc_tplg_dapm_widget) +
   FUNC_8(VAR_9->priv.size));

 if (VAR_9->num_kcontrols == 0) {
  VAR_15 = 0;
  VAR_11.num_kcontrols = 0;
  goto widget;
 }

 VAR_13 = (struct snd_soc_tplg_ctl_hdr *)VAR_8->pos;
 FUNC_2(VAR_8->dev, "ASoC: template %s has %d controls of type %x\n",
  VAR_9->name, VAR_9->num_kcontrols, VAR_13->type);

 switch (FUNC_8(VAR_13->ops.info)) {
 case 134:
 case 135:
 case 133:
 case 132:
 case 136:
 case 128:
  VAR_15 = VAR_7;
  VAR_11.num_kcontrols = FUNC_8(VAR_9->num_kcontrols);
  VAR_11.kcontrol_news =
   FUNC_17(VAR_8,
   VAR_11.num_kcontrols);
  if (!VAR_11.kcontrol_news) {
   VAR_16 = -VAR_1;
   goto hdr_err;
  }
  break;
 case 138:
 case 137:
 case 131:
 case 129:
 case 130:
  VAR_15 = VAR_6;
  VAR_11.num_kcontrols = FUNC_8(VAR_9->num_kcontrols);
  VAR_11.kcontrol_news =
   FUNC_16(VAR_8,
   VAR_11.num_kcontrols);
  if (!VAR_11.kcontrol_news) {
   VAR_16 = -VAR_1;
   goto hdr_err;
  }
  break;
 case 139:
  VAR_15 = VAR_5;
  VAR_11.num_kcontrols = FUNC_8(VAR_9->num_kcontrols);
  VAR_11.kcontrol_news =
   FUNC_15(VAR_8,
    VAR_11.num_kcontrols);
  if (!VAR_11.kcontrol_news) {
   VAR_16 = -VAR_1;
   goto hdr_err;
  }
  break;
 default:
  FUNC_3(VAR_8->dev, "ASoC: invalid widget control type %d:%d:%d\n",
   VAR_13->ops.get, VAR_13->ops.put,
   FUNC_8(VAR_13->ops.info));
  VAR_16 = -VAR_0;
  goto hdr_err;
 }

widget:
 VAR_16 = FUNC_18(VAR_8, &VAR_11, VAR_9);
 if (VAR_16 < 0)
  goto hdr_err;



 if (VAR_14->instantiated)
  VAR_12 = FUNC_12(VAR_10, &VAR_11);
 else
  VAR_12 = FUNC_13(VAR_10, &VAR_11);
 if (FUNC_0(VAR_12)) {
  VAR_16 = FUNC_1(VAR_12);
  goto hdr_err;
 }

 VAR_12->dobj.type = VAR_4;
 VAR_12->dobj.widget.kcontrol_type = VAR_15;
 VAR_12->dobj.ops = VAR_8->ops;
 VAR_12->dobj.index = VAR_8->index;
 FUNC_9(&VAR_12->dobj.list, &VAR_8->comp->dobj_list);

 VAR_16 = FUNC_19(VAR_8, VAR_12, VAR_9);
 if (VAR_16 < 0)
  goto ready_err;

 FUNC_5(VAR_11.sname);
 FUNC_5(VAR_11.name);

 return 0;

ready_err:
 FUNC_14(VAR_12);
 FUNC_11(VAR_12);
hdr_err:
 FUNC_5(VAR_11.sname);
err:
 FUNC_5(VAR_11.name);
 return VAR_16;
}

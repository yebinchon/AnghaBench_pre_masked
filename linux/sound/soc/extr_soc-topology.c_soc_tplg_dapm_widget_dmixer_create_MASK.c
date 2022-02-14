
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct soc_tplg {int dev; int index; scalar_t__ pos; } ;
struct TYPE_7__ {int list; int index; } ;
struct soc_mixer_control {long private_value; struct soc_mixer_control* name; TYPE_2__ dobj; int platform_max; int invert; int min; int max; void* rshift; void* shift; void* rreg; void* reg; int access; int iface; } ;
struct TYPE_8__ {int name; int access; } ;
struct TYPE_6__ {int size; } ;
struct snd_soc_tplg_mixer_control {TYPE_3__ hdr; int platform_max; int invert; int min; int max; int channel; TYPE_1__ priv; } ;
struct snd_soc_tplg_ctl_hdr {int dummy; } ;
struct snd_kcontrol_new {long private_value; struct snd_kcontrol_new* name; TYPE_2__ dobj; int platform_max; int invert; int min; int max; void* rshift; void* shift; void* rreg; void* reg; int access; int iface; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 struct soc_mixer_control* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct soc_mixer_control*) ;
 struct soc_mixer_control* FUNC_5 (int ,int ) ;
 struct soc_mixer_control* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct soc_tplg*,TYPE_3__*,int ) ;
 int FUNC_9 (struct soc_tplg*,struct soc_mixer_control*,TYPE_3__*) ;
 int FUNC_10 (struct soc_tplg*,struct soc_mixer_control*) ;
 int FUNC_11 (struct soc_tplg*,struct soc_mixer_control*,struct snd_soc_tplg_ctl_hdr*) ;
 int FUNC_12 (TYPE_3__*,struct soc_mixer_control*,struct soc_tplg*) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 void* FUNC_14 (struct soc_tplg*,int ,int ) ;
 void* FUNC_15 (struct soc_tplg*,int ,int ) ;

__attribute__((used)) static struct snd_kcontrol_new *FUNC_16(
 struct soc_tplg *VAR_5, int VAR_6)
{
 struct snd_kcontrol_new *VAR_7;
 struct soc_mixer_control *VAR_8;
 struct snd_soc_tplg_mixer_control *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9 = (struct snd_soc_tplg_mixer_control *)VAR_5->pos;


  if (FUNC_13(VAR_9->hdr.name, VAR_3) ==
   VAR_3)
   goto err_sm;

  VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_0);
  if (VAR_8 == ((void*)0))
   goto err_sm;

  VAR_5->pos += (sizeof(struct snd_soc_tplg_mixer_control) +
         FUNC_7(VAR_9->priv.size));

  FUNC_1(VAR_5->dev, " adding DAPM widget mixer control %s at %d\n",
   VAR_9->hdr.name, VAR_10);

  VAR_7[VAR_10].private_value = (long)VAR_8;
  VAR_7[VAR_10].name = FUNC_5(VAR_9->hdr.name, VAR_0);
  if (VAR_7[VAR_10].name == ((void*)0))
   goto err_sm;
  VAR_7[VAR_10].iface = VAR_4;
  VAR_7[VAR_10].access = VAR_9->hdr.access;


  VAR_8->reg = FUNC_14(VAR_5, VAR_9->channel,
   VAR_1);
  VAR_8->rreg = FUNC_14(VAR_5, VAR_9->channel,
   VAR_2);
  VAR_8->shift = FUNC_15(VAR_5, VAR_9->channel,
   VAR_1);
  VAR_8->rshift = FUNC_15(VAR_5, VAR_9->channel,
   VAR_2);

  VAR_8->max = VAR_9->max;
  VAR_8->min = VAR_9->min;
  VAR_8->invert = VAR_9->invert;
  VAR_8->platform_max = VAR_9->platform_max;
  VAR_8->dobj.index = VAR_5->index;
  FUNC_0(&VAR_8->dobj.list);


  VAR_11 = FUNC_12(&VAR_9->hdr, &VAR_7[VAR_10], VAR_5);
  if (VAR_11) {
   FUNC_8(VAR_5, &VAR_9->hdr, VAR_9->hdr.name);
   goto err_sm;
  }


  FUNC_9(VAR_5, &VAR_7[VAR_10], &VAR_9->hdr);


  VAR_11 = FUNC_11(VAR_5, &VAR_7[VAR_10],
   (struct snd_soc_tplg_ctl_hdr *)VAR_9);
  if (VAR_11 < 0) {
   FUNC_2(VAR_5->dev, "ASoC: failed to init %s\n",
    VAR_9->hdr.name);
   FUNC_10(VAR_5, &VAR_7[VAR_10]);
   goto err_sm;
  }
 }
 return VAR_7;

err_sm:
 for (; VAR_10 >= 0; VAR_10--) {
  VAR_8 = (struct soc_mixer_control *)VAR_7[VAR_10].private_value;
  FUNC_4(VAR_8);
  FUNC_4(VAR_7[VAR_10].name);
 }
 FUNC_4(VAR_7);

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct soc_tplg {int dev; int index; scalar_t__ pos; } ;
struct TYPE_7__ {int index; } ;
struct soc_enum {long private_value; struct soc_enum* name; TYPE_2__ dobj; int mask; int items; void* shift_r; void* shift_l; int reg; int access; int iface; } ;
struct TYPE_8__ {int info; } ;
struct TYPE_9__ {int name; TYPE_3__ ops; int access; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct snd_soc_tplg_enum_control {TYPE_4__ hdr; int mask; int items; int channel; TYPE_1__ priv; } ;
struct snd_soc_tplg_ctl_hdr {int dummy; } ;
struct snd_kcontrol_new {long private_value; struct snd_kcontrol_new* name; TYPE_2__ dobj; int mask; int items; void* shift_r; void* shift_l; int reg; int access; int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,...) ;
 struct soc_enum* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct soc_enum*) ;
 struct soc_enum* FUNC_4 (int ,int ) ;
 struct soc_enum* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct soc_tplg*,TYPE_4__*,int ) ;
 int FUNC_8 (struct soc_enum*,struct snd_soc_tplg_enum_control*) ;
 int FUNC_9 (struct soc_enum*,struct snd_soc_tplg_enum_control*) ;
 int FUNC_10 (struct soc_enum*) ;
 int FUNC_11 (struct soc_enum*) ;
 int FUNC_12 (struct soc_tplg*,struct soc_enum*,struct snd_soc_tplg_ctl_hdr*) ;
 int FUNC_13 (TYPE_4__*,struct soc_enum*,struct soc_tplg*) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (struct soc_tplg*,int ,int ) ;
 void* FUNC_16 (struct soc_tplg*,int ,int ) ;

__attribute__((used)) static struct snd_kcontrol_new *FUNC_17(
 struct soc_tplg *VAR_5, int VAR_6)
{
 struct snd_kcontrol_new *VAR_7;
 struct snd_soc_tplg_enum_control *VAR_8;
 struct soc_enum *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_8 = (struct snd_soc_tplg_enum_control *)VAR_5->pos;

  if (FUNC_14(VAR_8->hdr.name, VAR_3) ==
       VAR_3)
   goto err_se;

  VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_0);
  if (VAR_9 == ((void*)0))
   goto err_se;

  VAR_5->pos += (sizeof(struct snd_soc_tplg_enum_control) +
    VAR_8->priv.size);

  FUNC_0(VAR_5->dev, " adding DAPM widget enum control %s\n",
   VAR_8->hdr.name);

  VAR_7[VAR_10].private_value = (long)VAR_9;
  VAR_7[VAR_10].name = FUNC_4(VAR_8->hdr.name, VAR_0);
  if (VAR_7[VAR_10].name == ((void*)0))
   goto err_se;
  VAR_7[VAR_10].iface = VAR_4;
  VAR_7[VAR_10].access = VAR_8->hdr.access;


  VAR_9->reg = FUNC_15(VAR_5, VAR_8->channel, VAR_1);
  VAR_9->shift_l = FUNC_16(VAR_5, VAR_8->channel,
        VAR_1);
  VAR_9->shift_r = FUNC_16(VAR_5, VAR_8->channel,
        VAR_2);

  VAR_9->items = VAR_8->items;
  VAR_9->mask = VAR_8->mask;
  VAR_9->dobj.index = VAR_5->index;

  switch (FUNC_6(VAR_8->hdr.ops.info)) {
  case 131:
  case 129:
   VAR_11 = FUNC_9(VAR_9, VAR_8);
   if (VAR_11 < 0) {
    FUNC_1(VAR_5->dev, "ASoC: could not create values for %s\n",
     VAR_8->hdr.name);
    goto err_se;
   }

  case 132:
  case 130:
  case 128:
   VAR_11 = FUNC_8(VAR_9, VAR_8);
   if (VAR_11 < 0) {
    FUNC_1(VAR_5->dev, "ASoC: could not create texts for %s\n",
     VAR_8->hdr.name);
    goto err_se;
   }
   break;
  default:
   FUNC_1(VAR_5->dev, "ASoC: invalid enum control type %d for %s\n",
    VAR_8->hdr.ops.info, VAR_8->hdr.name);
   goto err_se;
  }


  VAR_11 = FUNC_13(&VAR_8->hdr, &VAR_7[VAR_10], VAR_5);
  if (VAR_11) {
   FUNC_7(VAR_5, &VAR_8->hdr, VAR_8->hdr.name);
   goto err_se;
  }


  VAR_11 = FUNC_12(VAR_5, &VAR_7[VAR_10],
   (struct snd_soc_tplg_ctl_hdr *)VAR_8);
  if (VAR_11 < 0) {
   FUNC_1(VAR_5->dev, "ASoC: failed to init %s\n",
    VAR_8->hdr.name);
   goto err_se;
  }
 }

 return VAR_7;

err_se:
 for (; VAR_10 >= 0; VAR_10--) {

  VAR_9 = (struct soc_enum *)VAR_7[VAR_10].private_value;

  if (VAR_9) {
   FUNC_11(VAR_9);
   FUNC_10(VAR_9);
  }

  FUNC_3(VAR_9);
  FUNC_3(VAR_7[VAR_10].name);
 }
 FUNC_3(VAR_7);

 return ((void*)0);
}

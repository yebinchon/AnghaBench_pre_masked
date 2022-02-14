
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct soc_tplg {int pos; TYPE_5__* comp; int dev; int ops; int index; } ;
struct TYPE_10__ {int kcontrol; } ;
struct TYPE_11__ {int list; TYPE_3__ control; int ops; int type; int index; } ;
struct soc_enum {int mask; TYPE_4__ dobj; void* shift_r; void* shift_l; int reg; } ;
struct TYPE_9__ {int info; } ;
struct TYPE_13__ {unsigned int name; TYPE_2__ ops; int access; } ;
struct TYPE_8__ {int size; } ;
struct snd_soc_tplg_enum_control {TYPE_6__ hdr; int mask; int channel; int items; TYPE_1__ priv; } ;
struct snd_soc_tplg_ctl_hdr {int dummy; } ;
struct snd_kcontrol_new {unsigned int name; long private_value; int access; int iface; } ;
typedef int kc ;
struct TYPE_12__ {int dobj_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_1 (int ,char*,unsigned int,int ) ;
 int FUNC_2 (int ,char*,unsigned int,...) ;
 int FUNC_3 (struct soc_enum*) ;
 struct soc_enum* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct snd_kcontrol_new*,int ,int) ;
 int FUNC_8 (struct soc_tplg*,TYPE_6__*,unsigned int) ;
 int FUNC_9 (struct soc_tplg*,struct snd_kcontrol_new*,int *) ;
 scalar_t__ FUNC_10 (struct soc_tplg*,int,unsigned int,size_t,char*) ;
 int FUNC_11 (struct soc_enum*,struct snd_soc_tplg_enum_control*) ;
 int FUNC_12 (struct soc_enum*,struct snd_soc_tplg_enum_control*) ;
 int FUNC_13 (struct soc_tplg*,struct snd_kcontrol_new*,struct snd_soc_tplg_ctl_hdr*) ;
 int FUNC_14 (TYPE_6__*,struct snd_kcontrol_new*,struct soc_tplg*) ;
 scalar_t__ FUNC_15 (unsigned int,scalar_t__) ;
 int FUNC_16 (struct soc_tplg*,int ,int ) ;
 void* FUNC_17 (struct soc_tplg*,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct soc_tplg *VAR_7, unsigned int VAR_8,
 size_t VAR_9)
{
 struct snd_soc_tplg_enum_control *VAR_10;
 struct soc_enum *VAR_11;
 struct snd_kcontrol_new VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if (FUNC_10(VAR_7,
  sizeof(struct snd_soc_tplg_enum_control),
  VAR_8, VAR_9, "enums")) {

  FUNC_2(VAR_7->dev, "ASoC: invalid count %d for enum controls\n",
   VAR_8);
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_10 = (struct snd_soc_tplg_enum_control *)VAR_7->pos;


  if (FUNC_15(VAR_10->hdr.name, VAR_4) ==
   VAR_4)
   return -VAR_0;

  VAR_11 = FUNC_4((sizeof(*VAR_11)), VAR_2);
  if (VAR_11 == ((void*)0))
   return -VAR_1;

  VAR_7->pos += (sizeof(struct snd_soc_tplg_enum_control) +
         FUNC_5(VAR_10->priv.size));

  FUNC_1(VAR_7->dev, "ASoC: adding enum kcontrol %s size %d\n",
   VAR_10->hdr.name, VAR_10->items);

  FUNC_7(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.name = VAR_10->hdr.name;
  VAR_12.private_value = (long)VAR_11;
  VAR_12.iface = VAR_5;
  VAR_12.access = FUNC_5(VAR_10->hdr.access);

  VAR_11->reg = FUNC_16(VAR_7, VAR_10->channel, VAR_3);
  VAR_11->shift_l = FUNC_17(VAR_7, VAR_10->channel,
   VAR_3);
  VAR_11->shift_r = FUNC_17(VAR_7, VAR_10->channel,
   VAR_3);

  VAR_11->mask = FUNC_5(VAR_10->mask);
  VAR_11->dobj.index = VAR_7->index;
  VAR_11->dobj.type = VAR_6;
  VAR_11->dobj.ops = VAR_7->ops;
  FUNC_0(&VAR_11->dobj.list);

  switch (FUNC_5(VAR_10->hdr.ops.info)) {
  case 129:
  case 131:
   VAR_15 = FUNC_12(VAR_11, VAR_10);
   if (VAR_15 < 0) {
    FUNC_2(VAR_7->dev,
     "ASoC: could not create values for %s\n",
     VAR_10->hdr.name);
    FUNC_3(VAR_11);
    continue;
   }

  case 132:
  case 130:
  case 128:
   VAR_15 = FUNC_11(VAR_11, VAR_10);
   if (VAR_15 < 0) {
    FUNC_2(VAR_7->dev,
     "ASoC: could not create texts for %s\n",
     VAR_10->hdr.name);
    FUNC_3(VAR_11);
    continue;
   }
   break;
  default:
   FUNC_2(VAR_7->dev,
    "ASoC: invalid enum control type %d for %s\n",
    VAR_10->hdr.ops.info, VAR_10->hdr.name);
   FUNC_3(VAR_11);
   continue;
  }


  VAR_15 = FUNC_14(&VAR_10->hdr, &VAR_12, VAR_7);
  if (VAR_15) {
   FUNC_8(VAR_7, &VAR_10->hdr, VAR_10->hdr.name);
   FUNC_3(VAR_11);
   continue;
  }


  VAR_15 = FUNC_13(VAR_7, &VAR_12,
   (struct snd_soc_tplg_ctl_hdr *) VAR_10);
  if (VAR_15 < 0) {
   FUNC_2(VAR_7->dev, "ASoC: failed to init %s\n",
    VAR_10->hdr.name);
   FUNC_3(VAR_11);
   continue;
  }


  VAR_14 = FUNC_9(VAR_7,
   &VAR_12, &VAR_11->dobj.control.kcontrol);
  if (VAR_14 < 0) {
   FUNC_2(VAR_7->dev, "ASoC: could not add kcontrol %s\n",
    VAR_10->hdr.name);
   FUNC_3(VAR_11);
   continue;
  }

  FUNC_6(&VAR_11->dobj.list, &VAR_7->comp->dobj_list);
 }

 return 0;
}

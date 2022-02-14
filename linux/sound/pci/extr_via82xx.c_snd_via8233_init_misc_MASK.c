
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct via82xx {scalar_t__ chip_type; int pci; struct snd_kcontrol** dxs_controls; TYPE_7__* card; int ac97; } ;
struct TYPE_9__ {int subdevice; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct snd_ctl_elem_id {int iface; int name; } ;
typedef int sid ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_ctl_elem_id*,int ,int) ;
 int FUNC_3 (int ,int ,unsigned char*) ;
 int FUNC_4 (int ,int ,unsigned char) ;
 int FUNC_5 (TYPE_7__*,struct snd_kcontrol*) ;
 int FUNC_6 (TYPE_7__*,struct snd_ctl_elem_id*) ;
 struct snd_kcontrol* FUNC_7 (TYPE_2__*,struct via82xx*) ;
 TYPE_2__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct via82xx *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 unsigned char VAR_15;

 VAR_14 = VAR_11->chip_type == VAR_2 ? 1 : 2;
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_7.index = VAR_12;
  VAR_13 = FUNC_5(VAR_11->card, FUNC_7(&VAR_7, VAR_11));
  if (VAR_13 < 0)
   return VAR_13;
 }
 if (FUNC_0(VAR_11->ac97)) {
  VAR_13 = FUNC_5(VAR_11->card, FUNC_7(&VAR_8, VAR_11));
  if (VAR_13 < 0)
   return VAR_13;
 }
 if (VAR_11->chip_type != VAR_2) {



  struct snd_ctl_elem_id VAR_16;
  FUNC_2(&VAR_16, 0, sizeof(VAR_16));
  FUNC_8(VAR_16.name, "PCM Playback Volume");
  VAR_16.iface = VAR_1;
  if (! FUNC_6(VAR_11->card, &VAR_16)) {
   FUNC_1(VAR_11->card->dev,
     "Using DXS as PCM Playback\n");
   VAR_13 = FUNC_5(VAR_11->card, FUNC_7(&VAR_10, VAR_11));
   if (VAR_13 < 0)
    return VAR_13;
  }
  else
  {
   for (VAR_12 = 0; VAR_12 < 4; ++VAR_12) {
    struct snd_kcontrol *VAR_17;

    VAR_17 = FUNC_7(
     &VAR_9, VAR_11);
    if (!VAR_17)
     return -VAR_0;
    VAR_17->id.subdevice = VAR_12;
    VAR_13 = FUNC_5(VAR_11->card, VAR_17);
    if (VAR_13 < 0)
     return VAR_13;
    VAR_11->dxs_controls[VAR_12] = VAR_17;
   }
  }
 }

 FUNC_3(VAR_11->pci, VAR_3, &VAR_15);
 VAR_15 = (VAR_15 & ~VAR_6) | VAR_5;
 VAR_15 &= ~VAR_4;
 FUNC_4(VAR_11->pci, VAR_3, VAR_15);

 return 0;
}

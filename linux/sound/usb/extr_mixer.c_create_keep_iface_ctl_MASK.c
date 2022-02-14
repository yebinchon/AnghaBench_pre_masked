
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_1__* chip; } ;
struct snd_kcontrol {int id; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (int *,struct usb_mixer_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_mixer_interface *VAR_1)
{
 struct snd_kcontrol *VAR_2 = FUNC_3(&VAR_0, VAR_1);


 if (FUNC_1(VAR_1->chip->card, &VAR_2->id)) {
  FUNC_2(VAR_2);
  return 0;
 }

 return FUNC_0(VAR_1->chip->card, VAR_2);
}

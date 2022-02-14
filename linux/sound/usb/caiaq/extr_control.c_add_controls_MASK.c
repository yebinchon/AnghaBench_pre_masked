
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int card; } ;
struct snd_usb_caiaqdev {TYPE_1__ chip; } ;
struct snd_kcontrol {int dummy; } ;
struct caiaq_controller {int index; int name; } ;
struct TYPE_5__ {int private_value; int name; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (TYPE_2__*,struct snd_usb_caiaqdev*) ;

__attribute__((used)) static int FUNC_2(struct caiaq_controller *VAR_1, int VAR_2,
   struct snd_usb_caiaqdev *VAR_3)
{
 int VAR_4, VAR_5;
 struct snd_kcontrol *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1++) {
  VAR_0.name = VAR_1->name;
  VAR_0.private_value = VAR_1->index;
  VAR_6 = FUNC_1(&VAR_0, VAR_3);
  VAR_5 = FUNC_0(VAR_3->chip.card, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}

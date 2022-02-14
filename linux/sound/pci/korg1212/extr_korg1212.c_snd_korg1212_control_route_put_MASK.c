
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_korg1212 {int lock; TYPE_1__* sharedBufferPtr; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {scalar_t__* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {unsigned int* routeData; scalar_t__* volumeData; } ;


 scalar_t__ VAR_0 ;
 struct snd_korg1212* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct snd_korg1212 *VAR_3 = FUNC_0(VAR_1);
        int VAR_4 = 0, VAR_5;

 FUNC_1(&VAR_3->lock);

 VAR_5 = VAR_1->private_value;

 if (VAR_2->value.enumerated.item[0] < VAR_0 &&
     VAR_2->value.enumerated.item[0] !=
     (unsigned) VAR_3->sharedBufferPtr->volumeData[VAR_5]) {
  VAR_3->sharedBufferPtr->routeData[VAR_5] = VAR_2->value.enumerated.item[0];
  VAR_4 = 1;
 }

 if (VAR_5 >= 8) {
  if (VAR_2->value.enumerated.item[1] < VAR_0 &&
      VAR_2->value.enumerated.item[1] !=
      (unsigned) VAR_3->sharedBufferPtr->volumeData[VAR_5+1]) {
   VAR_3->sharedBufferPtr->routeData[VAR_5+1] = VAR_2->value.enumerated.item[1];
   VAR_4 = 1;
  }
 }

 FUNC_2(&VAR_3->lock);

        return VAR_4;
}

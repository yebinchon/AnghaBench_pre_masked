
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_korg1212 {int lock; TYPE_3__* sharedBufferPtr; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {void** value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int * volumeData; } ;


 void* FUNC_0 (int ) ;
 struct snd_korg1212* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_korg1212 *VAR_2 = FUNC_1(VAR_0);
        int VAR_3;

 FUNC_2(&VAR_2->lock);

 VAR_3 = VAR_0->private_value;
        VAR_1->value.integer.value[0] = FUNC_0(VAR_2->sharedBufferPtr->volumeData[VAR_3]);

 if (VAR_3 >= 8)
                VAR_1->value.integer.value[1] = FUNC_0(VAR_2->sharedBufferPtr->volumeData[VAR_3+1]);

        FUNC_3(&VAR_2->lock);

        return 0;
}

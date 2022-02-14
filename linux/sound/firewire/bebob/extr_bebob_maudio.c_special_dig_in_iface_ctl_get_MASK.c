
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct special_params {int dig_in_fmt; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_bebob {int mutex; TYPE_3__* unit; struct special_params* maudio_special_quirk; } ;
struct TYPE_6__ {int device; } ;


 int FUNC_0 (TYPE_3__*,int,int,unsigned int*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct snd_bebob* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct snd_bebob *VAR_2 = FUNC_4(VAR_0);
 struct special_params *VAR_3 = VAR_2->maudio_special_quirk;
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 FUNC_2(&VAR_2->mutex);

 VAR_5 = FUNC_0(VAR_2->unit, 0x00, 0x04,
         &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_2->unit->device,
   "fail to get digital input interface: %d\n", VAR_5);
  goto end;
 }


 VAR_6 = (VAR_3->dig_in_fmt << 1) | (VAR_4 & 0x01);


 if (VAR_6 > 2)
  VAR_6 = 2;

 VAR_1->value.enumerated.item[0] = VAR_6;
end:
 FUNC_3(&VAR_2->mutex);
 return VAR_5;
}

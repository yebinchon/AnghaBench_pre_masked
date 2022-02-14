
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct special_params {scalar_t__ dig_in_fmt; int clk_lock; int dig_out_fmt; int clk_src; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_bebob {int mutex; TYPE_3__* unit; struct special_params* maudio_special_quirk; } ;
struct TYPE_6__ {int device; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int,int,unsigned int) ;
 int FUNC_2 (struct snd_bebob*,int ,unsigned int,int ,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct snd_bebob* FUNC_6 (struct snd_kcontrol*) ;
 int VAR_1 ;
 int FUNC_7 (struct snd_bebob*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_bebob *VAR_4 = FUNC_6(VAR_2);
 struct special_params *VAR_5 = VAR_4->maudio_special_quirk;
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = VAR_3->value.enumerated.item[0];
 if (VAR_6 >= FUNC_0(VAR_1))
  return -VAR_0;


 VAR_7 = (VAR_6 >> 1) & 0x01;
 VAR_8 = VAR_6 & 0x01;

 FUNC_4(&VAR_4->mutex);

 VAR_9 = FUNC_2(VAR_4,
      VAR_5->clk_src,
      VAR_7,
      VAR_5->dig_out_fmt,
      VAR_5->clk_lock);
 if (VAR_9 < 0)
  goto end;


 if (VAR_5->dig_in_fmt > 0) {
  VAR_9 = 1;
  goto end;
 }


 VAR_9 = FUNC_1(VAR_4->unit, 0x00, 0x04, VAR_8);
 if (VAR_9 < 0)
  FUNC_3(&VAR_4->unit->device,
   "fail to set digital input interface: %d\n", VAR_9);
 VAR_9 = 1;
end:
 FUNC_7(VAR_4);
 FUNC_5(&VAR_4->mutex);
 return VAR_9;
}

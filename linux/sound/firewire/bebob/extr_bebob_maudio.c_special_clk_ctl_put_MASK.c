
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct special_params {int clk_lock; int dig_out_fmt; int dig_in_fmt; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct snd_bebob {int mutex; struct special_params* maudio_special_quirk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_bebob*,int,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct snd_bebob* FUNC_4 (struct snd_kcontrol*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct snd_bebob *VAR_4 = FUNC_4(VAR_2);
 struct special_params *VAR_5 = VAR_4->maudio_special_quirk;
 int VAR_6, VAR_7;

 VAR_7 = VAR_3->value.enumerated.item[0];
 if (VAR_7 >= FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_4->mutex);

 VAR_6 = FUNC_1(VAR_4, VAR_7,
      VAR_5->dig_in_fmt,
      VAR_5->dig_out_fmt,
      VAR_5->clk_lock);
 FUNC_3(&VAR_4->mutex);

 if (VAR_6 >= 0)
  VAR_6 = 1;

 return VAR_6;
}

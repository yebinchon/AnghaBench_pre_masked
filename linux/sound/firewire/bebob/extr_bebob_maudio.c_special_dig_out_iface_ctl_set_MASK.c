
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct special_params {int clk_lock; int dig_in_fmt; int clk_src; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_bebob {int mutex; struct special_params* maudio_special_quirk; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_bebob*,int ,int ,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct snd_bebob* FUNC_4 (struct snd_kcontrol*) ;
 int VAR_1 ;
 int FUNC_5 (struct snd_bebob*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
 struct snd_bebob *VAR_4 = FUNC_4(VAR_2);
 struct special_params *VAR_5 = VAR_4->maudio_special_quirk;
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->value.enumerated.item[0];
 if (VAR_6 >= FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_4->mutex);

 VAR_7 = FUNC_1(VAR_4,
      VAR_5->clk_src,
      VAR_5->dig_in_fmt,
      VAR_6, VAR_5->clk_lock);
 if (VAR_7 >= 0) {
  FUNC_5(VAR_4);
  VAR_7 = 1;
 }

 FUNC_3(&VAR_4->mutex);
 return VAR_7;
}

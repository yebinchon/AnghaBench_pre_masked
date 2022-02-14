
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm_coeff_ctl {int type; int len; } ;
struct soc_bytes_ext {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int step; int max; int min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; int type; TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 struct wm_coeff_ctl* FUNC_0 (struct soc_bytes_ext*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_4,
    struct snd_ctl_elem_info *VAR_5)
{
 struct soc_bytes_ext *VAR_6 =
  (struct soc_bytes_ext *)VAR_4->private_value;
 struct wm_coeff_ctl *VAR_7 = FUNC_0(VAR_6);

 switch (VAR_7->type) {
 case 128:
  VAR_5->type = VAR_1;
  VAR_5->value.integer.min = VAR_3;
  VAR_5->value.integer.max = VAR_2;
  VAR_5->value.integer.step = 1;
  VAR_5->count = 1;
  break;
 default:
  VAR_5->type = VAR_0;
  VAR_5->count = VAR_7->len;
  break;
 }

 return 0;
}

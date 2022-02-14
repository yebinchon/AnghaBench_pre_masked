
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {size_t private_value; } ;
struct snd_dbri {struct dbri_streaminfo* stream_info; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct dbri_streaminfo {int right_gain; int left_gain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_dbri* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_dbri *VAR_3 = FUNC_1(VAR_1);
 struct dbri_streaminfo *VAR_4;

 if (FUNC_0(!VAR_3))
  return -VAR_0;
 VAR_4 = &VAR_3->stream_info[VAR_1->private_value];

 VAR_2->value.integer.value[0] = VAR_4->left_gain;
 VAR_2->value.integer.value[1] = VAR_4->right_gain;
 return 0;
}

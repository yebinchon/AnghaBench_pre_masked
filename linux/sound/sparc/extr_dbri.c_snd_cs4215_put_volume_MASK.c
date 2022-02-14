
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {size_t private_value; } ;
struct snd_dbri {struct dbri_streaminfo* stream_info; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct dbri_streaminfo {unsigned int left_gain; unsigned int right_gain; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_dbri*,int) ;
 struct snd_dbri* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct snd_dbri *VAR_6 = FUNC_1(VAR_4);
 struct dbri_streaminfo *VAR_7 =
    &VAR_6->stream_info[VAR_4->private_value];
 unsigned int VAR_8[2];
 int VAR_9 = 0;

 VAR_8[0] = VAR_5->value.integer.value[0];
 VAR_8[1] = VAR_5->value.integer.value[1];
 if (VAR_4->private_value == VAR_2) {
  if (VAR_8[0] > VAR_1 || VAR_8[1] > VAR_1)
   return -VAR_3;
 } else {
  if (VAR_8[0] > VAR_0 || VAR_8[1] > VAR_0)
   return -VAR_3;
 }

 if (VAR_7->left_gain != VAR_8[0]) {
  VAR_7->left_gain = VAR_8[0];
  VAR_9 = 1;
 }
 if (VAR_7->right_gain != VAR_8[1]) {
  VAR_7->right_gain = VAR_8[1];
  VAR_9 = 1;
 }
 if (VAR_9) {



  FUNC_0(VAR_6, 1);
  FUNC_2(125);
  FUNC_0(VAR_6, 0);
 }
 return VAR_9;
}

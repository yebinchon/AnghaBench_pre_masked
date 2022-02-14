
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct TYPE_4__ {short index; } ;
struct snd_ctl_elem_value {TYPE_3__ value; TYPE_1__ id; } ;
struct echoaudio {int** vmixer_gain; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,short,short,int) ;
 struct echoaudio* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct echoaudio *VAR_5;
 int VAR_6, VAR_7;
 short VAR_8, VAR_9;

 VAR_7 = 0;
 VAR_5 = FUNC_2(VAR_3);
 VAR_9 = VAR_4->id.index / FUNC_0(VAR_5);
 VAR_8 = VAR_4->id.index % FUNC_0(VAR_5);
 VAR_6 = VAR_4->value.integer.value[0];
 if (VAR_6 < VAR_1 || VAR_6 > VAR_0)
  return -VAR_2;
 if (VAR_5->vmixer_gain[VAR_9][VAR_8] != VAR_4->value.integer.value[0]) {
  FUNC_3(&VAR_5->lock);
  FUNC_1(VAR_5, VAR_9, VAR_8, VAR_4->value.integer.value[0]);
  FUNC_5(VAR_5);
  FUNC_4(&VAR_5->lock);
  VAR_7 = 1;
 }
 return VAR_7;
}

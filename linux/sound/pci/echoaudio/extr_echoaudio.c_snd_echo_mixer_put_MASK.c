
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
struct TYPE_4__ {unsigned int index; } ;
struct snd_ctl_elem_value {TYPE_3__ value; TYPE_1__ id; } ;
struct echoaudio {int** monitor_gain; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,unsigned int,unsigned int,int) ;
 struct echoaudio* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_5,
         struct snd_ctl_elem_value *VAR_6)
{
 struct echoaudio *VAR_7;
 int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_8 = 0;
 VAR_7 = FUNC_2(VAR_5);
 VAR_10 = VAR_6->id.index / FUNC_0(VAR_7);
 VAR_11 = VAR_6->id.index % FUNC_0(VAR_7);
 if (VAR_10 >= VAR_3 || VAR_11 >= VAR_2)
  return -VAR_4;
 VAR_9 = VAR_6->value.integer.value[0];
 if (VAR_9 < VAR_1 || VAR_9 > VAR_0)
  return -VAR_4;
 if (VAR_7->monitor_gain[VAR_10][VAR_11] != VAR_9) {
  FUNC_3(&VAR_7->lock);
  FUNC_1(VAR_7, VAR_10, VAR_11, VAR_9);
  FUNC_5(VAR_7);
  FUNC_4(&VAR_7->lock);
  VAR_8 = 1;
 }
 return VAR_8;
}

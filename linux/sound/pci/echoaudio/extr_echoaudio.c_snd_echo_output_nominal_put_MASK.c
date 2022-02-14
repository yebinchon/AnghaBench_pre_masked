
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct echoaudio {scalar_t__* nominal_level; int lock; } ;


 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,int,scalar_t__) ;
 struct echoaudio* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_value *VAR_1)
{
 struct echoaudio *VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = 0;
 VAR_2 = FUNC_2(VAR_0);
 FUNC_3(&VAR_2->lock);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if (VAR_2->nominal_level[VAR_3] != VAR_1->value.integer.value[VAR_3]) {
   FUNC_1(VAR_2, VAR_3,
       VAR_1->value.integer.value[VAR_3]);
   VAR_4 = 1;
  }
 }
 if (VAR_4)
  FUNC_5(VAR_2);
 FUNC_4(&VAR_2->lock);
 return VAR_4;
}

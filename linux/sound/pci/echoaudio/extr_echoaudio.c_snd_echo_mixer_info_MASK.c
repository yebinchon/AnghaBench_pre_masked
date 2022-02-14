
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * d; } ;
struct TYPE_5__ {int max; int min; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ dimen; TYPE_3__ value; int type; } ;
struct echoaudio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*) ;
 struct echoaudio* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_info *VAR_4)
{
 struct echoaudio *VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 VAR_4->type = VAR_2;
 VAR_4->count = 1;
 VAR_4->value.integer.min = VAR_1;
 VAR_4->value.integer.max = VAR_0;
 VAR_4->dimen.d[0] = FUNC_1(VAR_5);
 VAR_4->dimen.d[1] = FUNC_0(VAR_5);
 return 0;
}

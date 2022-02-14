
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdsp {int max_channels; int lock; } ;


 int FUNC_0 (struct hdsp*,int,int) ;
 int FUNC_1 (struct hdsp*,int,int) ;
 int FUNC_2 (struct hdsp*,int) ;
 struct hdsp* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct hdsp *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->value.integer.value[0];
 VAR_4 = VAR_1->value.integer.value[1];

 if (VAR_3 >= VAR_2->max_channels)
  VAR_5 = FUNC_1(VAR_2,VAR_3-VAR_2->max_channels,VAR_4);
 else
  VAR_5 = FUNC_0(VAR_2,VAR_3, VAR_4);

 FUNC_4(&VAR_2->lock);
 VAR_1->value.integer.value[2] = FUNC_2 (VAR_2, VAR_5);
 FUNC_5(&VAR_2->lock);
 return 0;
}

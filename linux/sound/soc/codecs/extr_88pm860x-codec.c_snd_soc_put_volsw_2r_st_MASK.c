
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int rreg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {unsigned int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_7__ {int m; int n; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_value *VAR_4)
{
 struct soc_mixer_control *VAR_5 =
  (struct soc_mixer_control *)VAR_3->private_value;
 struct snd_soc_component *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7 = VAR_5->reg;
 unsigned int VAR_8 = VAR_5->rreg;
 int VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_10 = VAR_4->value.integer.value[0];
 VAR_11 = VAR_4->value.integer.value[1];

 if (VAR_10 >= FUNC_0(VAR_2) || VAR_11 >= FUNC_0(VAR_2))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6, VAR_7, 0x3f, VAR_2[VAR_10].m);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_6, VAR_1, 0xf0,
      VAR_2[VAR_10].n << 4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_8, 0x3f, VAR_2[VAR_11].m);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_6, VAR_1, 0x0f,
      VAR_2[VAR_11].n);
 return VAR_9;
}

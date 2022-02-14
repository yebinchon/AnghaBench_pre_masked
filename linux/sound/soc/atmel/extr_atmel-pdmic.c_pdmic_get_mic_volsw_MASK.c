
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_7__ {unsigned int dgain; unsigned int scale; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_3__* VAR_6 ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_7,
 struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_2(VAR_7);
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = (FUNC_1(VAR_9, VAR_3) & VAR_4)
      >> VAR_5;

 VAR_11 = (FUNC_1(VAR_9, VAR_0) & VAR_1)
      >> VAR_2;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++) {
  if ((VAR_6[VAR_12].dgain == VAR_10) &&
      (VAR_6[VAR_12].scale == VAR_11))
   VAR_8->value.integer.value[0] = VAR_12;
 }

 return 0;
}

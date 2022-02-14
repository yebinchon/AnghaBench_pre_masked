
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_6,
        struct snd_ctl_elem_value *VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_0(VAR_6);
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = (VAR_7->value.integer.value[0] ?
        VAR_5 : VAR_4) <<
       VAR_1;
 VAR_9 |= (VAR_7->value.integer.value[1] ?
  VAR_5 : VAR_4) <<
        VAR_2;

 VAR_11 = VAR_3 << VAR_1 |
   VAR_3 << VAR_2;

 VAR_10 = FUNC_1(VAR_8, VAR_0,
         VAR_11, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}

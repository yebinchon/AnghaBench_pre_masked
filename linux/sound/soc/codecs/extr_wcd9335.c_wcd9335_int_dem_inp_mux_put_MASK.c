
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {scalar_t__ reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_soc_component*,int,int ,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_9,
     struct snd_ctl_elem_value *VAR_10)
{
 struct soc_enum *VAR_11 = (struct soc_enum *)VAR_9->private_value;
 struct snd_soc_component *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_1(VAR_9);
 VAR_14 = VAR_10->value.enumerated.item[0];

 if (VAR_11->reg == VAR_2)
  VAR_13 = VAR_1;
 else if (VAR_11->reg == VAR_4)
  VAR_13 = VAR_3;
 else if (VAR_11->reg == VAR_6)
  VAR_13 = VAR_5;
 else
  return -VAR_0;


 FUNC_0(VAR_12, VAR_13,
    VAR_8,
    VAR_14 ? VAR_7 : 0);

 return FUNC_2(VAR_9, VAR_10);
}

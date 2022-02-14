
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_17,
       struct snd_ctl_elem_value *VAR_18)
{
 struct snd_soc_component *VAR_19 = FUNC_1(VAR_17);
 u8 VAR_20;

 if (VAR_18->value.integer.value[0]) {

  if (FUNC_0(VAR_19, VAR_0) & VAR_1)
   goto err;


  if ((FUNC_0(VAR_19, VAR_15) &
   (VAR_4 | VAR_8 | VAR_9 |
   VAR_10)) != (VAR_4 |
   VAR_8 | VAR_9 | VAR_10))
   goto err;


  VAR_20 = FUNC_0(VAR_19, VAR_14);
  if (((VAR_20 & VAR_11) < VAR_12) ||
   (((VAR_20 & VAR_13) >> 4) <
   VAR_12))
   goto err;


  if (((FUNC_0(VAR_19, VAR_2) & VAR_3) <
      VAR_5) ||
      ((FUNC_0(VAR_19, VAR_6) & VAR_7) <
      VAR_5))
   goto err;
 }

 return FUNC_2(VAR_17, VAR_18);

err:
 return -VAR_16;
}

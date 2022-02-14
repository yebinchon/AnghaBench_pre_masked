
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct rt1011_priv {scalar_t__ recv_spk_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct snd_soc_component*) ;
 struct rt1011_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_9,
  struct snd_ctl_elem_value *VAR_10)
{
 struct snd_soc_component *VAR_11 =
  FUNC_3(VAR_9);
 struct rt1011_priv *VAR_12 =
  FUNC_1(VAR_11);

 if (VAR_10->value.integer.value[0] == VAR_12->recv_spk_mode)
  return 0;

 if (FUNC_0(VAR_11) == VAR_8) {
  VAR_12->recv_spk_mode = VAR_10->value.integer.value[0];

  if (VAR_12->recv_spk_mode) {


   FUNC_2(VAR_11,
    VAR_1,
    VAR_6,
    VAR_4);
   FUNC_2(VAR_11,
    VAR_0,
    VAR_3,
    VAR_2);
  } else {

   FUNC_2(VAR_11,
    VAR_1,
    VAR_6,
    VAR_5);
   FUNC_2(VAR_11,
    VAR_0,
    VAR_3,
    VAR_7);
  }
 }

 return 0;
}

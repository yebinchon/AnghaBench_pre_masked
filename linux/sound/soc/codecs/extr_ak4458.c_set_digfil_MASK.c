
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ak4458_priv {int digfil; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ak4458_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_7,
        struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_2(VAR_7);
 struct ak4458_priv *VAR_10 = FUNC_0(VAR_9);
 int VAR_11;

 VAR_11 = VAR_8->value.enumerated.item[0];
 if (VAR_11 > 4)
  return -VAR_6;

 VAR_10->digfil = VAR_11;


 FUNC_1(VAR_9, VAR_0,
       VAR_3,
       ((VAR_10->digfil & 0x02) << 4));


 FUNC_1(VAR_9, VAR_1,
       VAR_4,
       (VAR_10->digfil & 0x01));


 FUNC_1(VAR_9, VAR_2,
       VAR_5,
       ((VAR_10->digfil & 0x04) >> 2));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; scalar_t__ private_data; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct clk_cache {int count; TYPE_1__* s; } ;
struct snd_card_asihpi {struct clk_cache cc; } ;
struct TYPE_4__ {scalar_t__ source; scalar_t__ index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_card_asihpi *VAR_3 =
   (struct snd_card_asihpi *)(VAR_1->private_data);
 struct clk_cache *VAR_4 = &VAR_3->cc;
 u32 VAR_5 = VAR_1->private_value;
 u16 VAR_6, VAR_7 = 0;
 int VAR_8;

 VAR_2->value.enumerated.item[0] = 0;
 if (FUNC_0(VAR_5, &VAR_6))
  VAR_6 = 0;

 if (VAR_6 == VAR_0)
  if (FUNC_1(VAR_5, &VAR_7))
   VAR_7 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->count; VAR_8++)
  if ((VAR_4->s[VAR_8].source == VAR_6) &&
   (VAR_4->s[VAR_8].index == VAR_7))
   break;

 VAR_2->value.enumerated.item[0] = VAR_8;

 return 0;
}

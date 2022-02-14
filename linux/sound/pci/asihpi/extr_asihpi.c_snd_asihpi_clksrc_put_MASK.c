
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; scalar_t__ private_data; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct clk_cache {unsigned int count; TYPE_3__* s; } ;
struct snd_card_asihpi {struct clk_cache cc; } ;
struct TYPE_6__ {scalar_t__ source; int index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_card_asihpi *VAR_3 =
   (struct snd_card_asihpi *)(VAR_1->private_data);
 struct clk_cache *VAR_4 = &VAR_3->cc;
 unsigned int VAR_5;
 int VAR_6;
 u32 VAR_7 = VAR_1->private_value;

 VAR_6 = 1;
 VAR_5 = VAR_2->value.enumerated.item[0];
 if (VAR_5 >= VAR_4->count)
  VAR_5 = VAR_4->count-1;

 FUNC_0(FUNC_1(
    VAR_7, VAR_4->s[VAR_5].source));

 if (VAR_4->s[VAR_5].source == VAR_0)
  FUNC_0(FUNC_2(
    VAR_7, VAR_4->s[VAR_5].index));
 return VAR_6;
}

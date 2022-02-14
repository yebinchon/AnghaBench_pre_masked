
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_sub {int vol; } ;
struct uniphier_aio_chip {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct uniphier_aio_sub* FUNC_0 (struct uniphier_aio_chip*,int) ;
 struct uniphier_aio_chip* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_2(VAR_0);
 struct uniphier_aio_chip *VAR_3 = FUNC_1(VAR_2);
 struct uniphier_aio_sub *VAR_4;
 int VAR_5 = VAR_0->private_value;

 VAR_4 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_4)
  return 0;

 VAR_1->value.integer.value[0] = VAR_4->vol;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct mutex {int dummy; } ;
struct TYPE_10__ {struct mutex lock; int * cache; } ;
struct TYPE_8__ {struct mutex lock; int * cache; } ;
struct TYPE_7__ {struct mutex lock; int * cache; } ;
struct tscs454 {TYPE_4__ sub_ram; TYPE_2__ spk_ram; TYPE_1__ dac_ram; } ;
struct soc_bytes_ext {int max; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_9__ {int name; } ;
struct snd_kcontrol {TYPE_3__ id; scalar_t__ private_value; } ;
struct TYPE_11__ {int data; } ;
struct TYPE_12__ {TYPE_5__ bytes; } ;
struct snd_ctl_elem_value {TYPE_6__ value; } ;
struct coeff_ram_ctl {size_t addr; struct soc_bytes_ext bytes_ext; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;
 struct tscs454* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 =
  FUNC_4(VAR_2);
 struct tscs454 *VAR_5 = FUNC_3(VAR_4);
 struct coeff_ram_ctl *VAR_6 =
  (struct coeff_ram_ctl *)VAR_2->private_value;
 struct soc_bytes_ext *VAR_7 = &VAR_6->bytes_ext;
 u8 *VAR_8;
 struct mutex *VAR_9;

 if (FUNC_5(VAR_2->id.name, "DAC")) {
  VAR_8 = VAR_5->dac_ram.cache;
  VAR_9 = &VAR_5->dac_ram.lock;
 } else if (FUNC_5(VAR_2->id.name, "Speaker")) {
  VAR_8 = VAR_5->spk_ram.cache;
  VAR_9 = &VAR_5->spk_ram.lock;
 } else if (FUNC_5(VAR_2->id.name, "Sub")) {
  VAR_8 = VAR_5->sub_ram.cache;
  VAR_9 = &VAR_5->sub_ram.lock;
 } else {
  return -VAR_1;
 }

 FUNC_1(VAR_9);

 FUNC_0(VAR_3->value.bytes.data,
  &VAR_8[VAR_6->addr * VAR_0], VAR_7->max);

 FUNC_2(VAR_9);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct mutex {int dummy; } ;
struct TYPE_16__ {struct mutex lock; } ;
struct TYPE_15__ {struct mutex lock; } ;
struct TYPE_12__ {int synced; struct mutex lock; int * cache; } ;
struct TYPE_10__ {int synced; struct mutex lock; int * cache; } ;
struct TYPE_9__ {int synced; struct mutex lock; int * cache; } ;
struct tscs454 {TYPE_8__ pll1; TYPE_7__ pll2; TYPE_4__ sub_ram; TYPE_2__ spk_ram; TYPE_1__ dac_ram; } ;
struct soc_bytes_ext {size_t max; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_11__ {int name; } ;
struct snd_kcontrol {TYPE_3__ id; scalar_t__ private_value; } ;
struct TYPE_13__ {int data; } ;
struct TYPE_14__ {TYPE_5__ bytes; } ;
struct snd_ctl_elem_value {TYPE_6__ value; } ;
struct coeff_ram_ctl {size_t addr; struct soc_bytes_ext bytes_ext; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 struct tscs454* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_6 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (struct snd_soc_component*,int *,unsigned int,unsigned int,unsigned int,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_12,
 struct snd_ctl_elem_value *VAR_13)
{
 struct snd_soc_component *VAR_14 =
  FUNC_6(VAR_12);
 struct tscs454 *VAR_15 = FUNC_4(VAR_14);
 struct coeff_ram_ctl *VAR_16 =
  (struct coeff_ram_ctl *)VAR_12->private_value;
 struct soc_bytes_ext *VAR_17 = &VAR_16->bytes_ext;
 unsigned int VAR_18 = VAR_17->max / VAR_0;
 u8 *VAR_19;
 struct mutex *VAR_20;
 bool *VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 int VAR_26;

 if (FUNC_7(VAR_12->id.name, "DAC")) {
  VAR_19 = VAR_15->dac_ram.cache;
  VAR_20 = &VAR_15->dac_ram.lock;
  VAR_21 = &VAR_15->dac_ram.synced;
  VAR_22 = VAR_3;
  VAR_23 = VAR_2;
  VAR_24 = VAR_4;
 } else if (FUNC_7(VAR_12->id.name, "Speaker")) {
  VAR_19 = VAR_15->spk_ram.cache;
  VAR_20 = &VAR_15->spk_ram.lock;
  VAR_21 = &VAR_15->spk_ram.synced;
  VAR_22 = VAR_7;
  VAR_23 = VAR_6;
  VAR_24 = VAR_8;
 } else if (FUNC_7(VAR_12->id.name, "Sub")) {
  VAR_19 = VAR_15->sub_ram.cache;
  VAR_20 = &VAR_15->sub_ram.lock;
  VAR_21 = &VAR_15->sub_ram.synced;
  VAR_22 = VAR_10;
  VAR_23 = VAR_9;
  VAR_24 = VAR_11;
 } else {
  return -VAR_1;
 }

 FUNC_2(VAR_20);

 *VAR_21 = 0;

 FUNC_1(&VAR_19[VAR_16->addr * VAR_0],
  VAR_13->value.bytes.data, VAR_17->max);

 FUNC_2(&VAR_15->pll1.lock);
 FUNC_2(&VAR_15->pll2.lock);

 VAR_26 = FUNC_5(VAR_14, VAR_5, &VAR_25);
 if (VAR_26 < 0) {
  FUNC_0(VAR_14->dev, "Failed to read PLL status (%d)\n",
    VAR_26);
  goto exit;
 }
 if (VAR_25) {
  VAR_26 = FUNC_8(VAR_14, VAR_19,
   VAR_22, VAR_23, VAR_24,
   VAR_16->addr, VAR_18);
  if (VAR_26 < 0) {
   FUNC_0(VAR_14->dev,
    "Failed to flush coeff ram cache (%d)\n", VAR_26);
   goto exit;
  }
  *VAR_21 = 1;
 }

 VAR_26 = 0;
exit:
 FUNC_3(&VAR_15->pll2.lock);
 FUNC_3(&VAR_15->pll1.lock);
 FUNC_3(VAR_20);

 return VAR_26;
}

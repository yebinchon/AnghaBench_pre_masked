
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tscs42xx {int coeff_ram_synced; int coeff_ram_lock; int pll_lock; int * coeff_ram; } ;
struct soc_bytes_ext {size_t max; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct coeff_ram_ctl {size_t addr; struct soc_bytes_ext bytes_ext; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct snd_soc_component*) ;
 struct tscs42xx* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (struct snd_kcontrol*) ;
 int FUNC_7 (struct snd_soc_component*,int *,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 =
  FUNC_6(VAR_1);
 struct tscs42xx *VAR_4 = FUNC_5(VAR_3);
 struct coeff_ram_ctl *VAR_5 =
  (struct coeff_ram_ctl *)VAR_1->private_value;
 struct soc_bytes_ext *VAR_6 = &VAR_5->bytes_ext;
 unsigned int VAR_7 = VAR_6->max / VAR_0;
 int VAR_8;

 FUNC_2(&VAR_4->coeff_ram_lock);

 VAR_4->coeff_ram_synced = 0;

 FUNC_1(&VAR_4->coeff_ram[VAR_5->addr * VAR_0],
  VAR_2->value.bytes.data, VAR_6->max);

 FUNC_2(&VAR_4->pll_lock);

 if (FUNC_4(VAR_3)) {
  VAR_8 = FUNC_7(VAR_3, VAR_4->coeff_ram,
   VAR_5->addr, VAR_7);
  if (VAR_8 < 0) {
   FUNC_0(VAR_3->dev,
    "Failed to flush coeff ram cache (%d)\n", VAR_8);
   goto exit;
  }
  VAR_4->coeff_ram_synced = 1;
 }

 VAR_8 = 0;
exit:
 FUNC_3(&VAR_4->pll_lock);

 FUNC_3(&VAR_4->coeff_ram_lock);

 return VAR_8;
}

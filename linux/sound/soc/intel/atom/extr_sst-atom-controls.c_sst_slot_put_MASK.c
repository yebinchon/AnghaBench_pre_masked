
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct sst_enum {unsigned int reg; unsigned int tx; int max; int * texts; } ;
struct sst_data {int lock; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sst_data* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct sst_data*,struct snd_kcontrol*) ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
   struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_4(VAR_3);
 struct sst_data *VAR_6 = FUNC_3(VAR_5);
 struct sst_enum *VAR_7 = (void *)VAR_3->private_value;
 int VAR_8, VAR_9 = 0;
 unsigned int VAR_10 = VAR_7->reg;
 unsigned int VAR_11 = VAR_7->tx;
 unsigned int VAR_12;
 unsigned int VAR_13, VAR_14;
 u8 *VAR_15;

 VAR_15 = VAR_11 ? VAR_1 : VAR_2;

 VAR_13 = 1 << VAR_10;
 VAR_14 = VAR_4->value.enumerated.item[0];
 if (VAR_14 > VAR_7->max - 1)
  return -VAR_0;

 FUNC_1(&VAR_6->lock);

 for (VAR_8 = 0; VAR_8 < VAR_7->max; VAR_8++)
  VAR_15[VAR_8] &= ~VAR_13;

 if (VAR_14 == 0) {

  VAR_9 = FUNC_5(VAR_6, VAR_3);

  FUNC_2(&VAR_6->lock);
  return VAR_9;
 }


 VAR_12 = VAR_14 - 1;
 VAR_15[VAR_12] |= VAR_13;

 FUNC_0(VAR_5->dev, "%s %s map = %#x\n",
   VAR_11 ? "tx channel" : "rx slot",
   VAR_7->texts[VAR_14], VAR_15[VAR_12]);

 VAR_9 = FUNC_5(VAR_6, VAR_3);

 FUNC_2(&VAR_6->lock);
 return VAR_9;
}

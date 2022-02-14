
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct sst_enum {unsigned int reg; unsigned int tx; unsigned int max; int * texts; } ;
struct sst_data {int lock; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ,char*,char*,int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct sst_data* FUNC_4 (struct snd_soc_component*) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct sst_enum *VAR_4 = (void *)VAR_2->private_value;
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_2);
 struct sst_data *VAR_6 = FUNC_4(VAR_5);
 unsigned int VAR_7 = VAR_4->reg;
 unsigned int VAR_8 = VAR_4->tx;
 unsigned int VAR_9, VAR_10;
 u8 *VAR_11 = VAR_8 ? VAR_0 : VAR_1;

 FUNC_1(&VAR_6->lock);
 VAR_9 = 1 << VAR_7;

 for (VAR_10 = VAR_4->max; VAR_10 > 0; VAR_10--)
  if (VAR_11[VAR_10 - 1] & VAR_9)
   break;

 VAR_3->value.enumerated.item[0] = VAR_10;
 FUNC_2(&VAR_6->lock);

 FUNC_0(VAR_5->dev, "%s - %s map = %#x\n",
   VAR_8 ? "tx channel" : "rx slot",
    VAR_4->texts[VAR_10], VAR_10 ? VAR_11[VAR_10 - 1] : -1);
 return 0;
}

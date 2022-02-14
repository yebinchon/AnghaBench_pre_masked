
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_bytes_ext {int max; } ;
struct snd_soc_component {int regmap; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,void*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_7,
         struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_4(VAR_7);
 struct soc_bytes_ext *VAR_10 = (void *)VAR_7->private_value;
 void *VAR_11;

 if (!VAR_9->regmap)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_8->value.bytes.data,
  VAR_10->max, VAR_3 | VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_3(VAR_9->regmap, VAR_6,
  VAR_4, 0);
 FUNC_2(VAR_9->regmap, VAR_5,
  VAR_11, VAR_10->max);
 FUNC_3(VAR_9->regmap, VAR_6,
  VAR_4, VAR_4);

 FUNC_0(VAR_11);
 return 0;
}

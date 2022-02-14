
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct soc_bytes_ext {int max; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct nau8810 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int ) ;
 struct nau8810* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_4,
 struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_6(VAR_4);
 struct nau8810 *VAR_7 = FUNC_5(VAR_6);
 struct soc_bytes_ext *VAR_8 = (void *)VAR_4->private_value;
 void *VAR_9;
 u16 *VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_9 = FUNC_3(VAR_5->value.bytes.data,
  VAR_8->max, VAR_2 | VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = (u16 *)VAR_9;
 VAR_13 = VAR_3;
 for (VAR_12 = 0; VAR_12 < VAR_8->max / sizeof(u16); VAR_12++) {



  VAR_11 = FUNC_0(*(VAR_10 + VAR_12));
  VAR_14 = FUNC_4(VAR_7->regmap, VAR_13 + VAR_12, VAR_11);
  if (VAR_14) {
   FUNC_1(VAR_6->dev, "EQ configuration fail, register: %x ret: %d\n",
    VAR_13 + VAR_12, VAR_14);
   FUNC_2(VAR_9);
   return VAR_14;
  }
 }
 FUNC_2(VAR_9);

 return 0;
}


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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int,int ) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4,
 struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 =
   FUNC_5(VAR_4);
 struct soc_bytes_ext *VAR_7 = (void *)VAR_4->private_value;
 void *VAR_8;
 u16 *VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_8 = FUNC_3(VAR_5->value.bytes.data,
  VAR_7->max, VAR_2 | VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = (u16 *)VAR_8;
 VAR_12 = VAR_3;
 for (VAR_11 = 0; VAR_11 < VAR_7->max / sizeof(u16); VAR_11++) {



  VAR_10 = FUNC_0(*(VAR_9 + VAR_11));
  VAR_13 = FUNC_4(VAR_6, VAR_12 + VAR_11, VAR_10);
  if (VAR_13) {
   FUNC_1(VAR_6->dev,
       "EQ configuration fail, register: %x ret: %d\n",
       VAR_12 + VAR_11, VAR_13);
   FUNC_2(VAR_8);
   return VAR_13;
  }
 }
 FUNC_2(VAR_8);

 return 0;
}

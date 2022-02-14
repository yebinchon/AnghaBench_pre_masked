
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct soc_bytes_ext {int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
typedef int reg_val ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct snd_soc_component*,int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 =
   FUNC_3(VAR_1);
 struct soc_bytes_ext *VAR_4 = (void *)VAR_1->private_value;
 int VAR_5, VAR_6;
 u16 VAR_7, *VAR_8;

 VAR_8 = (u16 *)VAR_2->value.bytes.data;
 VAR_6 = VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_4->max / sizeof(u16); VAR_5++) {
  VAR_7 = FUNC_2(VAR_3, VAR_6 + VAR_5);



  VAR_7 = FUNC_0(VAR_7);
  FUNC_1(VAR_8 + VAR_5, &VAR_7, sizeof(VAR_7));
 }

 return 0;
}

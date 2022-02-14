
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct snd_soc_tplg_vendor_uuid_elem {int dummy; } ;
struct TYPE_2__ {int mod_uuid; int instance_id; int module_id; } ;
struct skl_module_pin {TYPE_1__ id; } ;
struct device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int *,struct snd_soc_tplg_vendor_uuid_elem*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
   struct snd_soc_tplg_vendor_value_elem *VAR_2,
   struct skl_module_pin *VAR_3,
   int VAR_4)
{
 int VAR_5;

 switch (VAR_2->token) {
 case 129:
  VAR_3[VAR_4].id.module_id = VAR_2->value;
  break;

 case 130:
  VAR_3[VAR_4].id.instance_id = VAR_2->value;
  break;

 case 128:
  VAR_5 = FUNC_1(VAR_1, &VAR_3[VAR_4].id.mod_uuid,
   (struct snd_soc_tplg_vendor_uuid_elem *)VAR_2);
  if (VAR_5 < 0)
   return VAR_5;

  break;

 default:
  FUNC_0(VAR_1, "%d Not a pin token\n", VAR_2->token);
  return -VAR_0;
 }

 return 0;
}

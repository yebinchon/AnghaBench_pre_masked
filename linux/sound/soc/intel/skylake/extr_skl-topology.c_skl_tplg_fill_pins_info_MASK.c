
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_vendor_value_elem {int dummy; } ;
struct skl_module_pin {int in_use; int pin_state; } ;
struct skl_module_cfg {struct skl_module_pin* m_out_pin; struct skl_module_pin* m_in_pin; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,struct snd_soc_tplg_vendor_value_elem*,struct skl_module_pin*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2,
  struct skl_module_cfg *VAR_3,
  struct snd_soc_tplg_vendor_value_elem *VAR_4,
  int VAR_5, int VAR_6)
{
 int VAR_7;
 struct skl_module_pin *VAR_8;

 switch (VAR_5) {
 case 129:
  VAR_8 = VAR_3->m_in_pin;
  break;

 case 128:
  VAR_8 = VAR_3->m_out_pin;
  break;

 default:
  FUNC_0(VAR_2, "Invalid direction value\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_8, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8[VAR_6].in_use = 0;
 VAR_8[VAR_6].pin_state = VAR_1;

 return 0;
}

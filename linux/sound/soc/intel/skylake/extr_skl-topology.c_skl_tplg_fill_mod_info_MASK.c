
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct skl_module {int nr_interfaces; int nr_resources; int max_output_pins; int max_input_pins; int output_pin_type; int input_pin_type; } ;
struct device {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
  struct snd_soc_tplg_vendor_value_elem *VAR_2,
  struct skl_module *VAR_3)
{

 if (!VAR_3)
  return -VAR_0;

 switch (VAR_2->token) {
 case 131:
  VAR_3->input_pin_type = VAR_2->value;
  break;

 case 129:
  VAR_3->output_pin_type = VAR_2->value;
  break;

 case 130:
  VAR_3->max_input_pins = VAR_2->value;
  break;

 case 128:
  VAR_3->max_output_pins = VAR_2->value;
  break;

 case 132:
  VAR_3->nr_resources = VAR_2->value;
  break;

 case 133:
  VAR_3->nr_interfaces = VAR_2->value;
  break;

 default:
  FUNC_0(VAR_1, "Invalid mod info token %d", VAR_2->token);
  return -VAR_0;
 }

 return 0;
}

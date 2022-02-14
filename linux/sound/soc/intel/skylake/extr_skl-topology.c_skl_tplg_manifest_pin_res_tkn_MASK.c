
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct skl_module_res {struct skl_module_pin_resources* output; struct skl_module_pin_resources* input; } ;
struct skl_module_pin_resources {int buf_size; int pin_index; } ;
struct device {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
  struct snd_soc_tplg_vendor_value_elem *VAR_2,
  struct skl_module_res *VAR_3, int VAR_4, int VAR_5)
{
 struct skl_module_pin_resources *VAR_6;

 switch (VAR_5) {
 case 131:
  VAR_6 = &VAR_3->input[VAR_4];
  break;

 case 130:
  VAR_6 = &VAR_3->output[VAR_4];
  break;

 default:
  FUNC_0(VAR_1, "Invalid pin direction: %d\n", VAR_5);
  return -VAR_0;
 }

 switch (VAR_2->token) {
 case 128:
  VAR_6->pin_index = VAR_2->value;
  break;

 case 129:
  VAR_6->buf_size = VAR_2->value;
  break;

 default:
  FUNC_0(VAR_1, "Invalid token: %d\n", VAR_2->token);
  return -VAR_0;
 }

 return 0;
}

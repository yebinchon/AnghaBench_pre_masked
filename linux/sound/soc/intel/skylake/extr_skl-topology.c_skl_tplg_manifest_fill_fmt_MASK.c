
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct skl_module_fmt {int dummy; } ;
struct skl_module_pin_fmt {int id; struct skl_module_fmt fmt; } ;
struct skl_module_iface {struct skl_module_pin_fmt* outputs; struct skl_module_pin_fmt* inputs; } ;
struct device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,struct skl_module_fmt*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
  struct skl_module_iface *VAR_2,
  struct snd_soc_tplg_vendor_value_elem *VAR_3,
  u32 VAR_4, int VAR_5)
{
 struct skl_module_pin_fmt *VAR_6;
 struct skl_module_fmt *VAR_7;
 int VAR_8;

 if (!VAR_2)
  return -VAR_0;

 switch (VAR_4) {
 case 130:
  VAR_6 = &VAR_2->inputs[VAR_5];
  break;

 case 129:
  VAR_6 = &VAR_2->outputs[VAR_5];
  break;

 default:
  FUNC_0(VAR_1, "Invalid direction: %d\n", VAR_4);
  return -VAR_0;
 }

 VAR_7 = &VAR_6->fmt;

 switch (VAR_3->token) {
 case 128:
  VAR_6->id = VAR_3->value;
  break;

 default:
  VAR_8 = FUNC_1(VAR_1, VAR_7, VAR_3->token,
     VAR_3->value);
  if (VAR_8 < 0)
   return VAR_8;
  break;
 }

 return 0;
}

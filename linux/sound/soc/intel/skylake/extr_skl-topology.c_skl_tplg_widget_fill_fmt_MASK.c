
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skl_module_iface {TYPE_2__* outputs; TYPE_1__* inputs; } ;
struct skl_module_fmt {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct skl_module_fmt fmt; } ;
struct TYPE_3__ {struct skl_module_fmt fmt; } ;


 int VAR_0 ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,struct skl_module_fmt*,int,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
  struct skl_module_iface *VAR_2,
  u32 VAR_3, u32 VAR_4, u32 VAR_5, int VAR_6)
{
 struct skl_module_fmt *VAR_7;

 if (!VAR_2)
  return -VAR_0;

 switch (VAR_5) {
 case 129:
  VAR_7 = &VAR_2->inputs[VAR_6].fmt;
  break;

 case 128:
  VAR_7 = &VAR_2->outputs[VAR_6].fmt;
  break;

 default:
  FUNC_0(VAR_1, "Invalid direction: %d\n", VAR_5);
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_7, VAR_3, VAR_4);
}

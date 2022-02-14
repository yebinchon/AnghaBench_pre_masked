
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct lpass_data {int ahbix_clk; TYPE_1__* variant; } ;
struct TYPE_2__ {int (* exit ) (struct platform_device*) ;} ;


 int FUNC_0 (int ) ;
 struct lpass_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;

int FUNC_3(struct platform_device *VAR_0)
{
 struct lpass_data *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->variant->exit)
  VAR_1->variant->exit(VAR_0);

 FUNC_0(VAR_1->ahbix_clk);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct mvsw61xx_state {int monitor_port; } ;


 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_0,
  const struct switch_attr *VAR_1, struct switch_val *VAR_2)
{
 struct mvsw61xx_state *VAR_3 = FUNC_0(VAR_0);

 VAR_2->value.i = VAR_3->monitor_port;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int type; } ;





 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_0)
{
 if (FUNC_1(VAR_0) < 0)
  return 0;

 switch (FUNC_0(VAR_0)->type) {
 case 128:
 case 130:
 case 129:
  return 1;
 }

 return 0;
}

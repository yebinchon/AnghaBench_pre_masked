
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;





 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1)
{
 switch (FUNC_0(VAR_1)->type) {
 case 130:
 case 128:
 case 132:
  return 0;
 case 131:
  return FUNC_2(VAR_1);
 case 129:
  return FUNC_1(VAR_1);
 default:
  return -VAR_0;
 }
}

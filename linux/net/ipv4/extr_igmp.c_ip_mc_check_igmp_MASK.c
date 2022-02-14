
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_2);

 if (VAR_3 < 0)
  return VAR_3;

 if (FUNC_0(VAR_2)->protocol != VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_2(VAR_2);
}

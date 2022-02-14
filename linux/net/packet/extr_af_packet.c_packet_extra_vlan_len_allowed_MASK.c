
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ h_proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(const struct net_device *VAR_2,
       struct sk_buff *VAR_3)
{




 if (FUNC_4(VAR_2->type != VAR_0))
  return 0;

 FUNC_3(VAR_3);
 return FUNC_2(FUNC_0(VAR_3)->h_proto == FUNC_1(VAR_1));
}

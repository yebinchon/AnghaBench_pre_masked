
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ip_options {int optlen; } ;
struct TYPE_2__ {struct ip_options opt; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_1))
  return 1;

 if (VAR_2 == VAR_0) {
  const struct ip_options *VAR_3;

  VAR_3 = &(FUNC_0(VAR_1)->opt);

  if (FUNC_2(VAR_3->optlen))
   return 1;
 }

 return 0;
}

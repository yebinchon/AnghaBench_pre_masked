
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ee_origin; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int iif; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_3,
          struct sock_exterr_skb *VAR_4)
{
 if (VAR_4->ee.ee_origin == VAR_0 ||
     VAR_4->ee.ee_origin == VAR_1)
  return 1;

 if (VAR_4->ee.ee_origin == VAR_2)
  return 0;

 if (!FUNC_0(VAR_3)->iif)
  return 0;

 return 1;
}

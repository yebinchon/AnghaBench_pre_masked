
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct inet_skb_parm {int dummy; } ;
struct TYPE_3__ {int h4; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int FUNC_0 (struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0)
{
 FUNC_2(FUNC_0(VAR_0), &FUNC_1(VAR_0)->header.h4,
  sizeof(struct inet_skb_parm));
}

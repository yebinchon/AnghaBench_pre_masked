
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ k; int pdu_unack_q; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 return FUNC_1(&FUNC_0(VAR_0)->pdu_unack_q) + 1 == FUNC_0(VAR_0)->k;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int pending; } ;
struct TYPE_8__ {TYPE_1__ icsk_ack; } ;
struct TYPE_7__ {scalar_t__ cwr; } ;
struct TYPE_6__ {int ecn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sock*) ;
 TYPE_3__* FUNC_1 (struct sk_buff const*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2, const struct sk_buff *VAR_3)
{
 if (FUNC_1(VAR_3)->cwr) {
  FUNC_2(VAR_2)->ecn_flags &= ~VAR_1;





  FUNC_0(VAR_2)->icsk_ack.pending |= VAR_0;
 }
}

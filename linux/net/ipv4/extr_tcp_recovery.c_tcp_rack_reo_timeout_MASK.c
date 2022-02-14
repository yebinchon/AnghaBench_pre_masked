
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {scalar_t__ icsk_ca_state; scalar_t__ icsk_pending; TYPE_1__* icsk_ca_ops; } ;
struct TYPE_3__ {int cong_control; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int,int ) ;
 int FUNC_2 (struct sock*,int) ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 int FUNC_4 (struct sock*,scalar_t__*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_6(VAR_2);
 u32 VAR_4, VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 FUNC_4(VAR_2, &VAR_4);
 if (VAR_5 != FUNC_3(VAR_3)) {
  if (FUNC_0(VAR_2)->icsk_ca_state != VAR_1) {
   FUNC_2(VAR_2, 0);
   if (!FUNC_0(VAR_2)->icsk_ca_ops->cong_control)
    FUNC_1(VAR_2, 1, 0);
  }
  FUNC_7(VAR_2);
 }
 if (FUNC_0(VAR_2)->icsk_pending != VAR_0)
  FUNC_5(VAR_2);
}

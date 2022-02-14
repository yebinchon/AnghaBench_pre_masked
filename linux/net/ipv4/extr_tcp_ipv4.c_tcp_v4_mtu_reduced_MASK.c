
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int sk_state; int sk_err_soft; } ;
struct inet_sock {scalar_t__ pmtudisc; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ icsk_pmtu_cookie; } ;
struct TYPE_3__ {scalar_t__ mtu_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 struct dst_entry* FUNC_2 (struct sock*,scalar_t__) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,struct dst_entry*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,scalar_t__) ;

void FUNC_9(struct sock *VAR_4)
{
 struct inet_sock *VAR_5 = FUNC_3(VAR_4);
 struct dst_entry *VAR_6;
 u32 VAR_7;

 if ((1 << VAR_4->sk_state) & (VAR_3 | VAR_2))
  return;
 VAR_7 = FUNC_7(VAR_4)->mtu_info;
 VAR_6 = FUNC_2(VAR_4, VAR_7);
 if (!VAR_6)
  return;




 if (VAR_7 < FUNC_0(VAR_6) && FUNC_4(VAR_4, VAR_6))
  VAR_4->sk_err_soft = VAR_0;

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_5->pmtudisc != VAR_1 &&
     FUNC_5(VAR_4) &&
     FUNC_1(VAR_4)->icsk_pmtu_cookie > VAR_7) {
  FUNC_8(VAR_4, VAR_7);






  FUNC_6(VAR_4);
 }
}

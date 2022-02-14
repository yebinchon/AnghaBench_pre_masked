
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ icsk_pmtu_cookie; } ;
struct TYPE_3__ {int mtu_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 struct dst_entry* FUNC_1 (struct sock*,int ) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2)
{
 struct dst_entry *VAR_3;

 if ((1 << VAR_2->sk_state) & (VAR_1 | VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_2, FUNC_4(VAR_2)->mtu_info);
 if (!VAR_3)
  return;

 if (FUNC_2(VAR_2)->icsk_pmtu_cookie > FUNC_0(VAR_3)) {
  FUNC_5(VAR_2, FUNC_0(VAR_3));
  FUNC_3(VAR_2);
 }
}

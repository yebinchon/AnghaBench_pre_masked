
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int sk_timer; } ;
struct dn_scp {scalar_t__ persist; scalar_t__ state; int (* keepalive_fxn ) (struct sock*) ;scalar_t__ keepalive; scalar_t__ stamp; scalar_t__ (* persist_fxn ) (struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 struct sock* VAR_4 ;
 int FUNC_4 (struct sock*,int *,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_6)
{
 struct sock *VAR_7 = FUNC_3(VAR_7, VAR_6, VAR_5);
 struct dn_scp *VAR_8 = FUNC_0(VAR_7);

 FUNC_1(VAR_7);

 if (FUNC_5(VAR_7)) {
  FUNC_4(VAR_7, &VAR_7->sk_timer, VAR_3 + VAR_1 / 10);
  goto out;
 }
 if (VAR_8->persist && VAR_8->persist_fxn) {
  if (VAR_8->persist <= VAR_2) {
   VAR_8->persist = 0;

   if (VAR_8->persist_fxn(VAR_7))
    goto out;
  } else {
   VAR_8->persist -= VAR_2;
  }
 }
 if (VAR_8->keepalive && VAR_8->keepalive_fxn && (VAR_8->state == VAR_0)) {
  if (FUNC_9(VAR_3, VAR_8->stamp + VAR_8->keepalive))
   VAR_8->keepalive_fxn(VAR_7);
 }

 FUNC_4(VAR_7, &VAR_7->sk_timer, VAR_3 + VAR_2);
out:
 FUNC_2(VAR_7);
 FUNC_6(VAR_7);
}

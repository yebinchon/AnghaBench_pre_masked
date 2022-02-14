
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {unsigned long sk_tsq_flags; } ;
struct TYPE_4__ {TYPE_1__* icsk_af_ops; } ;
struct TYPE_3__ {int (* mtu_reduced ) (struct sock*) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct sock*) ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct sock *VAR_5)
{
 unsigned long VAR_6, VAR_7;


 do {
  VAR_6 = VAR_5->sk_tsq_flags;
  if (!(VAR_6 & VAR_4))
   return;
  VAR_7 = VAR_6 & ~VAR_4;
 } while (FUNC_1(&VAR_5->sk_tsq_flags, VAR_6, VAR_7) != VAR_6);

 if (VAR_6 & VAR_2) {
  FUNC_6(VAR_5);
  FUNC_0(VAR_5);
 }
 FUNC_3(VAR_5);

 if (VAR_6 & VAR_3) {
  FUNC_7(VAR_5);
  FUNC_0(VAR_5);
 }
 if (VAR_6 & VAR_0) {
  FUNC_5(VAR_5);
  FUNC_0(VAR_5);
 }
 if (VAR_6 & VAR_1) {
  FUNC_2(VAR_5)->icsk_af_ops->mtu_reduced(VAR_5);
  FUNC_0(VAR_5);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_state; int sk_shutdown; int (* sk_state_change ) (struct sock*) ;TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* disconnect ) (struct sock*,int ) ;int (* shutdown ) (struct sock*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;

int FUNC_5(struct socket *VAR_12, int VAR_13)
{
 struct sock *VAR_14 = VAR_12->sk;
 int VAR_15 = 0;




 VAR_13++;


 if ((VAR_13 & ~VAR_4) || !VAR_13)
  return -VAR_0;

 FUNC_0(VAR_14);
 if (VAR_12->state == VAR_6) {
  if ((1 << VAR_14->sk_state) &
      (VAR_11 | VAR_10 | VAR_9))
   VAR_12->state = VAR_7;
  else
   VAR_12->state = VAR_5;
 }

 switch (VAR_14->sk_state) {
 case 130:
  VAR_15 = -VAR_1;



 default:
  VAR_14->sk_shutdown |= VAR_13;
  if (VAR_14->sk_prot->shutdown)
   VAR_14->sk_prot->shutdown(VAR_14, VAR_13);
  break;





 case 129:
  if (!(VAR_13 & VAR_3))
   break;

 case 128:
  VAR_15 = VAR_14->sk_prot->disconnect(VAR_14, VAR_2);
  VAR_12->state = VAR_15 ? VAR_7 : VAR_8;
  break;
 }


 VAR_14->sk_state_change(VAR_14);
 FUNC_1(VAR_14);
 return VAR_15;
}

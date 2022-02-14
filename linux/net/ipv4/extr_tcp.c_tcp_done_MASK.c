
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {int fastopen_rsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sock*) ;
 struct request_sock* FUNC_2 (int ,int) ;
 int FUNC_3 (struct sock*,struct request_sock*,int) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 TYPE_1__* FUNC_9 (struct sock*) ;

void FUNC_10(struct sock *VAR_6)
{
 struct request_sock *VAR_7;





 VAR_7 = FUNC_2(FUNC_9(VAR_6)->fastopen_rsk, 1);

 if (VAR_6->sk_state == VAR_5 || VAR_6->sk_state == VAR_4)
  FUNC_0(FUNC_5(VAR_6), VAR_3);

 FUNC_8(VAR_6, VAR_2);
 FUNC_7(VAR_6);
 if (VAR_7)
  FUNC_3(VAR_6, VAR_7, 0);

 VAR_6->sk_shutdown = VAR_0;

 if (!FUNC_4(VAR_6, VAR_1))
  VAR_6->sk_state_change(VAR_6);
 else
  FUNC_1(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int sa; int src_name; } ;
struct j1939_sock {int state; int filters; TYPE_1__ addr; int sk; int waitq; struct j1939_priv* priv; } ;
struct j1939_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct j1939_priv*,struct sock*) ;
 int FUNC_1 (struct j1939_priv*,struct j1939_sock*) ;
 int FUNC_2 (struct j1939_priv*,int ,int ) ;
 int FUNC_3 (struct j1939_priv*) ;
 struct j1939_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct j1939_priv*,struct j1939_sock*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_2)
{
 struct sock *VAR_3 = VAR_2->sk;
 struct j1939_sock *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_4(VAR_3);
 FUNC_8(VAR_3);

 if (VAR_4->state & VAR_1) {
  struct j1939_priv *VAR_5 = VAR_4->priv;

  if (FUNC_12(VAR_4->waitq,
          !FUNC_6(&VAR_4->sk))) {
   FUNC_0(VAR_5, VAR_3);
   FUNC_5(VAR_5, VAR_4, VAR_0);
  }

  FUNC_1(VAR_5, VAR_4);

  FUNC_2(VAR_5, VAR_4->addr.src_name,
        VAR_4->addr.sa);

  FUNC_3(VAR_5);
 }

 FUNC_7(VAR_4->filters);
 FUNC_10(VAR_3);
 VAR_2->sk = ((void*)0);

 FUNC_9(VAR_3);
 FUNC_11(VAR_3);

 return 0;
}

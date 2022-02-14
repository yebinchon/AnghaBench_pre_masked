
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_err; int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sco_conn {scalar_t__ hcon; int * sk; } ;
struct TYPE_2__ {struct sco_conn* conn; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*,struct sco_conn*,int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sco_conn*) ;
 int FUNC_3 (struct sco_conn*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, int VAR_3)
{
 struct sco_conn *VAR_4;

 VAR_4 = FUNC_4(VAR_2)->conn;

 FUNC_0("sk %p, conn %p, err %d", VAR_2, VAR_4, VAR_3);

 if (VAR_4) {
  FUNC_2(VAR_4);
  VAR_4->sk = ((void*)0);
  FUNC_4(VAR_2)->conn = ((void*)0);
  FUNC_3(VAR_4);

  if (VAR_4->hcon)
   FUNC_1(VAR_4->hcon);
 }

 VAR_2->sk_state = VAR_0;
 VAR_2->sk_err = VAR_3;
 VAR_2->sk_state_change(VAR_2);

 FUNC_5(VAR_2, VAR_1);
}

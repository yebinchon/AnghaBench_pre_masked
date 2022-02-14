
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {long sk_lingertime; int sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct smc_connection {int tx_work; } ;
struct smc_sock {struct sock sk; struct smc_connection conn; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;




 long VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct smc_connection*) ;
 int FUNC_4 (struct smc_sock*,long) ;
 int FUNC_5 (struct smc_connection*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;

int FUNC_8(struct smc_sock *VAR_4)
{
 struct smc_connection *VAR_5 = &VAR_4->conn;
 struct sock *VAR_6 = &VAR_4->sk;
 int VAR_7;
 long VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_3->flags & VAR_0 ?
    0 : FUNC_6(VAR_6, VAR_2) ?
        VAR_6->sk_lingertime : VAR_1;

 VAR_7 = VAR_6->sk_state;
again:
 switch (VAR_6->sk_state) {
 case 136:
  FUNC_4(VAR_4, VAR_8);
  FUNC_2(VAR_6);
  FUNC_0(&VAR_5->tx_work);
  FUNC_1(VAR_6);
  if (VAR_6->sk_state != 136)
   goto again;

  VAR_9 = FUNC_5(VAR_5);
  if (VAR_9)
   break;
  VAR_6->sk_state = 131;
  break;
 case 135:

  if (!FUNC_3(VAR_5))
   FUNC_4(VAR_4, VAR_8);
  FUNC_2(VAR_6);
  FUNC_0(&VAR_5->tx_work);
  FUNC_1(VAR_6);
  if (VAR_6->sk_state != 135)
   goto again;

  VAR_9 = FUNC_5(VAR_5);
  if (VAR_9)
   break;
  VAR_6->sk_state = 134;
  break;
 case 134:
 case 129:
 case 131:
 case 130:
 case 133:
 case 128:
 case 132:

  break;
 }

 if (VAR_7 != VAR_6->sk_state)
  VAR_6->sk_state_change(VAR_6);
 return VAR_9;
}

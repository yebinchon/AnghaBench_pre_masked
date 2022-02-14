
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_err; } ;
struct smc_sock {int wait_close_tx_prepared; int conn; struct sock sk; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,long*,int,int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct smc_sock *VAR_5, long VAR_6)
{
 FUNC_0(VAR_3, VAR_4);
 struct sock *VAR_7 = &VAR_5->sk;

 if (!VAR_6)
  return;

 if (!FUNC_6(&VAR_5->conn))
  return;

 VAR_5->wait_close_tx_prepared = 1;
 FUNC_1(FUNC_4(VAR_7), &VAR_3);
 while (!FUNC_3(VAR_2) && VAR_6) {
  int VAR_8;

  VAR_8 = FUNC_5(VAR_7, &VAR_6,
       !FUNC_6(&VAR_5->conn) ||
       (VAR_7->sk_err == VAR_0) ||
       (VAR_7->sk_err == VAR_1),
       &VAR_3);
  if (VAR_8)
   break;
 }
 FUNC_2(FUNC_4(VAR_7), &VAR_3);
 VAR_5->wait_close_tx_prepared = 0;
}

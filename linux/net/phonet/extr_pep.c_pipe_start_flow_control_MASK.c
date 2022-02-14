
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_write_space ) (struct sock*) ;} ;
struct pep_sock {int tx_credits; int tx_fc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct pep_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct pep_sock *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_3(VAR_2->tx_fc)) {
  FUNC_0(&VAR_2->tx_credits, 1);
  VAR_1->sk_write_space(VAR_1);
 }
 FUNC_2(VAR_1, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct pep_sock {int rx_fc; int tx_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,int ,int,int *,int,int ) ;
 int FUNC_1 (int) ;
 struct pep_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_3)
{
 struct pep_sock *VAR_4 = FUNC_2(VAR_3);
 u8 VAR_5[4] = {
  VAR_2, FUNC_1(2),
  VAR_4->tx_fc, VAR_4->rx_fc,
 };

 return FUNC_0(VAR_3, VAR_1, 1 ,
    VAR_5, 4, VAR_0);
}

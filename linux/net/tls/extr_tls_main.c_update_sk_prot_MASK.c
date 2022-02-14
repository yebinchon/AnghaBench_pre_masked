
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {size_t tx_conf; size_t rx_conf; } ;
struct sock {scalar_t__ sk_family; int * sk_prot; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int *** VAR_3 ;

__attribute__((used)) static void FUNC_0(struct sock *VAR_4, struct tls_context *VAR_5)
{
 int VAR_6 = VAR_4->sk_family == VAR_0 ? VAR_2 : VAR_1;

 VAR_4->sk_prot = &VAR_3[VAR_6][VAR_5->tx_conf][VAR_5->rx_conf];
}

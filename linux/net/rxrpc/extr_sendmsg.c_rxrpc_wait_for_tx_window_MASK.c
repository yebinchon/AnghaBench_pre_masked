
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {int dummy; } ;
struct rxrpc_call {int waitq; int tx_winsize; int tx_top; int tx_hard_ack; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct rxrpc_sock*,struct rxrpc_call*,long*) ;
 int FUNC_6 (struct rxrpc_sock*,struct rxrpc_call*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct rxrpc_sock *VAR_3,
        struct rxrpc_call *VAR_4,
        long *VAR_5,
        bool VAR_6)
{
 FUNC_0(VAR_2, VAR_1);
 int VAR_7;

 FUNC_1(",{%u,%u,%u}",
        VAR_4->tx_hard_ack, VAR_4->tx_top, VAR_4->tx_winsize);

 FUNC_3(&VAR_4->waitq, &VAR_2);

 if (VAR_6)
  VAR_7 = FUNC_6(VAR_3, VAR_4);
 else
  VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5);

 FUNC_4(&VAR_4->waitq, &VAR_2);
 FUNC_7(VAR_0);
 FUNC_2(" = %d", VAR_7);
 return VAR_7;
}

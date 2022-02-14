
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dctcp {int ce_state; int prior_rcv_nxt; } ;
typedef enum tcp_ca_event { ____Placeholder_tcp_ca_event } tcp_ca_event ;





 int FUNC_0 (struct sock*,int,int *,int *) ;
 int FUNC_1 (struct sock*) ;
 struct dctcp* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, enum tcp_ca_event VAR_1)
{
 struct dctcp *VAR_2 = FUNC_2(VAR_0);

 switch (VAR_1) {
 case 130:
 case 129:
  FUNC_0(VAR_0, VAR_1, &VAR_2->prior_rcv_nxt, &VAR_2->ce_state);
  break;
 case 128:
  FUNC_1(VAR_0);
  break;
 default:

  break;
 }
}

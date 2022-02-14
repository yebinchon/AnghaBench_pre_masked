
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_rx_sock {int rx_state; } ;
typedef enum ccid3_hc_rx_states { ____Placeholder_ccid3_hc_rx_states } ccid3_hc_rx_states ;


 int FUNC_0 (int) ;
 struct ccid3_hc_rx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,int ,struct sock*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0,
      enum ccid3_hc_rx_states VAR_1)
{
 struct ccid3_hc_rx_sock *VAR_2 = FUNC_1(VAR_0);
 enum ccid3_hc_rx_states VAR_3 = VAR_2->rx_state;

 FUNC_2("%s(%p) %-8.8s -> %s\n",
         FUNC_4(VAR_0), VAR_0, FUNC_3(VAR_3),
         FUNC_3(VAR_1));
 FUNC_0(VAR_1 == VAR_3);
 VAR_2->rx_state = VAR_1;
}

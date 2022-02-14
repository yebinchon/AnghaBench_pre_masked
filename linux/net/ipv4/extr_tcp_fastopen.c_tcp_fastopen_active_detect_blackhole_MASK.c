
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {scalar_t__ syn_data_acked; scalar_t__ syn_data; scalar_t__ syn_fastopen; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int icsk_retransmits; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

void FUNC_5(struct sock *VAR_1, bool VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1)->icsk_retransmits;
 struct tcp_sock *VAR_4 = FUNC_4(VAR_1);






 if ((VAR_4->syn_fastopen || VAR_4->syn_data || VAR_4->syn_data_acked) &&
     (VAR_3 == 2 || (VAR_3 < 2 && VAR_2))) {
  FUNC_3(VAR_1);
  FUNC_0(FUNC_2(VAR_1), VAR_0);
 }
}

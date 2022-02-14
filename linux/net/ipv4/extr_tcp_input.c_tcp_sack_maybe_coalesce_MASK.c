
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_sacks; } ;
struct tcp_sock {TYPE_1__ rx_opt; struct tcp_sack_block* selective_acks; } ;
struct tcp_sack_block {int end_seq; int start_seq; } ;


 scalar_t__ FUNC_0 (struct tcp_sack_block*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tcp_sock *VAR_0)
{
 int VAR_1;
 struct tcp_sack_block *VAR_2 = &VAR_0->selective_acks[0];
 struct tcp_sack_block *VAR_3 = VAR_2 + 1;




 for (VAR_1 = 1; VAR_1 < VAR_0->rx_opt.num_sacks;) {
  if (FUNC_0(VAR_2, VAR_3->start_seq, VAR_3->end_seq)) {
   int VAR_4;




   VAR_0->rx_opt.num_sacks--;
   for (VAR_4 = VAR_1; VAR_4 < VAR_0->rx_opt.num_sacks; VAR_4++)
    VAR_2[VAR_4] = VAR_2[VAR_4 + 1];
   continue;
  }
  VAR_1++, VAR_3++;
 }
}

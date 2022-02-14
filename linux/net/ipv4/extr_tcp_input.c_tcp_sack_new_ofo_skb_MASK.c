
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int num_sacks; } ;
struct tcp_sock {scalar_t__ compressed_ack; TYPE_1__ rx_opt; struct tcp_sack_block* selective_acks; } ;
struct tcp_sack_block {void* end_seq; void* start_seq; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcp_sack_block,struct tcp_sack_block) ;
 scalar_t__ FUNC_1 (struct tcp_sack_block*,void*,void*) ;
 int FUNC_2 (struct tcp_sock*) ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_4(VAR_2);
 struct tcp_sack_block *VAR_6 = &VAR_5->selective_acks[0];
 int VAR_7 = VAR_5->rx_opt.num_sacks;
 int VAR_8;

 if (!VAR_7)
  goto new_sack;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_6++) {
  if (FUNC_1(VAR_6, VAR_3, VAR_4)) {

   for (; VAR_8 > 0; VAR_8--, VAR_6--)
    FUNC_0(*VAR_6, *(VAR_6 - 1));
   if (VAR_7 > 1)
    FUNC_2(VAR_5);
   return;
  }
 }







 if (VAR_8 >= VAR_1) {
  if (VAR_5->compressed_ack > VAR_0)
   FUNC_3(VAR_2);
  VAR_8--;
  VAR_5->rx_opt.num_sacks--;
  VAR_6--;
 }
 for (; VAR_8 > 0; VAR_8--, VAR_6--)
  *VAR_6 = *(VAR_6 - 1);

new_sack:

 VAR_6->start_seq = VAR_3;
 VAR_6->end_seq = VAR_4;
 VAR_5->rx_opt.num_sacks++;
}

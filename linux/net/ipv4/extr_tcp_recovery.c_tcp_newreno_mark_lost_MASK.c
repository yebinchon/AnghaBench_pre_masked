
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ sacked_out; scalar_t__ reordering; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int sacked; } ;
struct TYPE_3__ {scalar_t__ icsk_ca_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,struct sk_buff*,scalar_t__,scalar_t__,int ) ;
 struct sk_buff* FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

void FUNC_8(struct sock *VAR_4, bool VAR_5)
{
 const u8 VAR_6 = FUNC_1(VAR_4)->icsk_ca_state;
 struct tcp_sock *VAR_7 = FUNC_4(VAR_4);

 if ((VAR_6 < VAR_2 && VAR_7->sacked_out >= VAR_7->reordering) ||
     (VAR_6 == VAR_2 && VAR_5)) {
  struct sk_buff *VAR_8 = FUNC_3(VAR_4);
  u32 VAR_9;

  if (FUNC_0(VAR_8)->sacked & VAR_1)
   return;

  VAR_9 = FUNC_6(VAR_8);
  if (FUNC_7(VAR_8) > 1 && VAR_8->len > VAR_9)
   FUNC_2(VAR_4, VAR_3, VAR_8,
         VAR_9, VAR_9, VAR_0);

  FUNC_5(VAR_7, VAR_8);
 }
}

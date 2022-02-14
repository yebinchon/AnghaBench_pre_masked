
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {unsigned int pushed_seq; scalar_t__ snd_una; int snd_up; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {unsigned int seq; unsigned int end_seq; int tcp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,int ,struct sk_buff*,unsigned int,unsigned int,int ) ;
 struct sk_buff* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*,unsigned int) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,int,int ) ;
 unsigned int FUNC_12 (struct tcp_sock*) ;
 int FUNC_13 (struct sock*,int,int) ;

int FUNC_14(struct sock *VAR_4, int VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_9(VAR_4);
 struct sk_buff *VAR_7;

 if (VAR_4->sk_state == VAR_2)
  return -1;

 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7 && FUNC_1(FUNC_0(VAR_7)->seq, FUNC_12(VAR_6))) {
  int VAR_8;
  unsigned int VAR_9 = FUNC_4(VAR_4);
  unsigned int VAR_10 = FUNC_12(VAR_6) - FUNC_0(VAR_7)->seq;

  if (FUNC_1(VAR_6->pushed_seq, FUNC_0(VAR_7)->end_seq))
   VAR_6->pushed_seq = FUNC_0(VAR_7)->end_seq;





  if (VAR_10 < FUNC_0(VAR_7)->end_seq - FUNC_0(VAR_7)->seq ||
      VAR_7->len > VAR_9) {
   VAR_10 = FUNC_3(VAR_10, VAR_9);
   FUNC_0(VAR_7)->tcp_flags |= VAR_1;
   if (FUNC_6(VAR_4, VAR_3,
      VAR_7, VAR_10, VAR_9, VAR_0))
    return -1;
  } else if (!FUNC_10(VAR_7))
   FUNC_8(VAR_7, VAR_9);

  FUNC_0(VAR_7)->tcp_flags |= VAR_1;
  VAR_8 = FUNC_11(VAR_4, VAR_7, 1, VAR_0);
  if (!VAR_8)
   FUNC_5(VAR_4, VAR_7);
  return VAR_8;
 } else {
  if (FUNC_2(VAR_6->snd_up, VAR_6->snd_una + 1, VAR_6->snd_una + 0xFFFF))
   FUNC_13(VAR_4, 1, VAR_5);
  return FUNC_13(VAR_4, 0, VAR_5);
 }
}

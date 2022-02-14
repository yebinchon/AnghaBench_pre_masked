
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_sock {scalar_t__ pushed_seq; int snd_nxt; scalar_t__ write_seq; scalar_t__ fastopen_req; int retrans_stamp; struct sk_buff* repair; } ;
struct sock {int sk_allocation; int tcp_rtx_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ seq; } ;
struct TYPE_5__ {int icsk_rto; TYPE_1__* icsk_af_ops; } ;
struct TYPE_4__ {scalar_t__ (* rebuild_header ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (struct sock*,int ,int ,int) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ,int ,int *) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*,struct sk_buff*) ;
 int FUNC_12 (struct sock*,int *) ;
 int FUNC_13 (struct sk_buff*,int ,int ) ;
 int FUNC_14 (struct tcp_sock*) ;
 int FUNC_15 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*,struct sk_buff*) ;
 struct tcp_sock* FUNC_18 (struct sock*) ;
 int FUNC_19 (struct tcp_sock*) ;
 int FUNC_20 (struct sock*,struct sk_buff*,int,int ) ;
 scalar_t__ FUNC_21 (int) ;

int FUNC_22(struct sock *VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_18(VAR_8);
 struct sk_buff *VAR_10;
 int VAR_11;

 FUNC_8(VAR_8, VAR_0, 0, ((void*)0));

 if (FUNC_3(VAR_8)->icsk_af_ops->rebuild_header(VAR_8))
  return -VAR_2;

 FUNC_9(VAR_8);

 if (FUNC_21(VAR_9->repair)) {
  FUNC_12(VAR_8, ((void*)0));
  return 0;
 }

 VAR_10 = FUNC_5(VAR_8, 0, VAR_8->sk_allocation, 1);
 if (FUNC_21(!VAR_10))
  return -VAR_3;

 FUNC_13(VAR_10, VAR_9->write_seq++, VAR_5);
 FUNC_14(VAR_9);
 VAR_9->retrans_stamp = FUNC_19(VAR_9);
 FUNC_10(VAR_8, VAR_10);
 FUNC_11(VAR_8, VAR_10);
 FUNC_15(&VAR_8->tcp_rtx_queue, VAR_10);


 VAR_11 = VAR_9->fastopen_req ? FUNC_17(VAR_8, VAR_10) :
       FUNC_20(VAR_8, VAR_10, 1, VAR_8->sk_allocation);
 if (VAR_11 == -VAR_1)
  return VAR_11;




 FUNC_2(VAR_9->snd_nxt, VAR_9->write_seq);
 VAR_9->pushed_seq = VAR_9->write_seq;
 VAR_10 = FUNC_16(VAR_8);
 if (FUNC_21(VAR_10)) {
  FUNC_2(VAR_9->snd_nxt, FUNC_1(VAR_10)->seq);
  VAR_9->pushed_seq = FUNC_1(VAR_10)->seq;
 }
 FUNC_0(FUNC_6(VAR_8), VAR_6);


 FUNC_4(VAR_8, VAR_4,
      FUNC_3(VAR_8)->icsk_rto, VAR_7);
 return 0;
}

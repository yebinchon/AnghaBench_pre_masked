
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcp_sock {scalar_t__ rcv_nxt; scalar_t__ rcv_wup; int snd_wnd; int max_window; int fastopen_rsk; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int lock; int qlen; } ;
struct request_sock_queue {TYPE_2__ fastopenq; } ;
struct request_sock {int rsk_refcnt; } ;
struct TYPE_12__ {scalar_t__ seq; } ;
struct TYPE_11__ {TYPE_1__* icsk_af_ops; struct request_sock_queue icsk_accept_queue; } ;
struct TYPE_10__ {int window; } ;
struct TYPE_9__ {int tfo_listener; scalar_t__ rcv_nxt; } ;
struct TYPE_7__ {struct sock* (* syn_recv_sock ) (struct sock*,struct sk_buff*,struct request_sock*,int *,int *,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct request_sock*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sock* FUNC_8 (struct sock*,struct sk_buff*,struct request_sock*,int *,int *,int*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 TYPE_4__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sock*,int ) ;
 TYPE_3__* FUNC_12 (struct request_sock*) ;
 struct tcp_sock* FUNC_13 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_14(struct sock *VAR_4,
           struct sk_buff *VAR_5,
           struct request_sock *VAR_6)
{
 struct tcp_sock *VAR_7;
 struct request_sock_queue *VAR_8 = &FUNC_1(VAR_4)->icsk_accept_queue;
 struct sock *VAR_9;
 bool VAR_10;

 VAR_9 = FUNC_1(VAR_4)->icsk_af_ops->syn_recv_sock(VAR_4, VAR_5, VAR_6, ((void*)0),
        ((void*)0), &VAR_10);
 if (!VAR_9)
  return ((void*)0);

 FUNC_6(&VAR_8->fastopenq.lock);
 VAR_8->fastopenq.qlen++;
 FUNC_7(&VAR_8->fastopenq.lock);





 VAR_7 = FUNC_13(VAR_9);

 FUNC_4(VAR_7->fastopen_rsk, VAR_6);
 FUNC_12(VAR_6)->tfo_listener = 1;




 VAR_7->snd_wnd = FUNC_3(FUNC_10(VAR_5)->window);
 VAR_7->max_window = VAR_7->snd_wnd;





 FUNC_2(VAR_9, VAR_1,
      VAR_3, VAR_2);

 FUNC_5(&VAR_6->rsk_refcnt, 2);


 FUNC_11(VAR_9, VAR_0);

 VAR_7->rcv_nxt = FUNC_0(VAR_5)->seq + 1;

 FUNC_9(VAR_9, VAR_5);

 FUNC_12(VAR_6)->rcv_nxt = VAR_7->rcv_nxt;
 VAR_7->rcv_wup = VAR_7->rcv_nxt;



 return VAR_9;
}

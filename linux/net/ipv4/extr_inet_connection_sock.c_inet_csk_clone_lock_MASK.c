
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_cookie; int sk_mark; } ;
struct request_sock {int dummy; } ;
struct inet_connection_sock {int icsk_accept_queue; scalar_t__ icsk_probes_out; scalar_t__ icsk_backoff; scalar_t__ icsk_retransmits; int * icsk_bind_hash; } ;
typedef int gfp_t ;
struct TYPE_4__ {int ir_cookie; int ir_mark; int ir_num; int ir_rmt_port; } ;
struct TYPE_3__ {int * mc_list; int inet_sport; int inet_num; int inet_dport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 TYPE_2__* FUNC_4 (struct request_sock const*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct sock*,struct request_sock const*) ;
 struct sock* FUNC_9 (struct sock const*,int const) ;
 int FUNC_10 (struct sock*,int ) ;

struct sock *FUNC_11(const struct sock *VAR_2,
     const struct request_sock *VAR_3,
     const gfp_t VAR_4)
{
 struct sock *VAR_5 = FUNC_9(VAR_2, VAR_4);

 if (VAR_5) {
  struct inet_connection_sock *VAR_6 = FUNC_3(VAR_5);

  FUNC_6(VAR_5, VAR_1);
  VAR_6->icsk_bind_hash = ((void*)0);

  FUNC_5(VAR_5)->inet_dport = FUNC_4(VAR_3)->ir_rmt_port;
  FUNC_5(VAR_5)->inet_num = FUNC_4(VAR_3)->ir_num;
  FUNC_5(VAR_5)->inet_sport = FUNC_2(FUNC_4(VAR_3)->ir_num);


  FUNC_10(VAR_5, VAR_0);

  FUNC_5(VAR_5)->mc_list = ((void*)0);

  VAR_5->sk_mark = FUNC_4(VAR_3)->ir_mark;
  FUNC_1(&VAR_5->sk_cookie,
        FUNC_0(&FUNC_4(VAR_3)->ir_cookie));

  VAR_6->icsk_retransmits = 0;
  VAR_6->icsk_backoff = 0;
  VAR_6->icsk_probes_out = 0;


  FUNC_7(&VAR_6->icsk_accept_queue, 0, sizeof(VAR_6->icsk_accept_queue));

  FUNC_8(VAR_5, VAR_3);
 }
 return VAR_5;
}

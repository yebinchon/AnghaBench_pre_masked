
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int window_clamp; } ;
struct sock {int sk_userlocks; } ;
struct request_sock {int rsk_window_clamp; int rsk_rcv_wnd; } ;
struct inet_request_sock {int rcv_wscale; int wscale_ok; scalar_t__ tstamp_ok; } ;
struct dst_entry {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct dst_entry const*,int ) ;
 int FUNC_2 (struct dst_entry const*) ;
 struct inet_request_sock* FUNC_3 (struct request_sock*) ;
 int FUNC_4 (struct sock const*) ;
 int FUNC_5 (struct tcp_sock const*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock const*,int,int,int *,int*,int ,int *,int) ;
 struct tcp_sock* FUNC_8 (struct sock const*) ;

void FUNC_9(struct request_sock *VAR_4,
      const struct sock *VAR_5,
      const struct dst_entry *VAR_6)
{
 struct inet_request_sock *VAR_7 = FUNC_3(VAR_4);
 const struct tcp_sock *VAR_8 = FUNC_8(VAR_5);
 int VAR_9 = FUNC_4(VAR_5);
 u32 VAR_10;
 __u8 VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_8, FUNC_2(VAR_6));
 VAR_10 = FUNC_0(VAR_8->window_clamp);

 VAR_4->rsk_window_clamp = VAR_10 ? : FUNC_1(VAR_6, VAR_1);


 if (VAR_5->sk_userlocks & VAR_2 &&
     (VAR_4->rsk_window_clamp > VAR_9 || VAR_4->rsk_window_clamp == 0))
  VAR_4->rsk_window_clamp = VAR_9;

 VAR_12 = FUNC_6((struct sock *)VAR_4);
 if (VAR_12 == 0)
  VAR_12 = FUNC_1(VAR_6, VAR_0);
 else if (VAR_9 < VAR_12 * VAR_13)
  VAR_9 = VAR_12 * VAR_13;


 FUNC_7(VAR_5, VAR_9,
  VAR_13 - (VAR_7->tstamp_ok ? VAR_3 : 0),
  &VAR_4->rsk_rcv_wnd,
  &VAR_4->rsk_window_clamp,
  VAR_7->wscale_ok,
  &VAR_11,
  VAR_12);
 VAR_7->rcv_wscale = VAR_11;
}

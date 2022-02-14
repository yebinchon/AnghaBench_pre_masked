
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {int mss_cache; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ search_high; scalar_t__ search_low; scalar_t__ enabled; } ;
struct inet_connection_sock {TYPE_1__ icsk_mtup; scalar_t__ icsk_pmtu_cookie; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct tcp_sock*,int) ;
 int FUNC_3 (struct sock*,scalar_t__) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

unsigned int FUNC_5(struct sock *VAR_0, u32 VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_4(VAR_0);
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 if (VAR_3->icsk_mtup.search_high > VAR_1)
  VAR_3->icsk_mtup.search_high = VAR_1;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 VAR_4 = FUNC_2(VAR_2, VAR_4);


 VAR_3->icsk_pmtu_cookie = VAR_1;
 if (VAR_3->icsk_mtup.enabled)
  VAR_4 = FUNC_1(VAR_4, FUNC_3(VAR_0, VAR_3->icsk_mtup.search_low));
 VAR_2->mss_cache = VAR_4;

 return VAR_4;
}

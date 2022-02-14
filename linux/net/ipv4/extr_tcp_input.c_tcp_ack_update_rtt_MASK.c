
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u32 ;
struct TYPE_3__ {long rcv_tsecr; scalar_t__ saw_tstamp; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct rate_sample {long rtt_us; } ;
struct TYPE_4__ {scalar_t__ icsk_backoff; } ;


 int const VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sock*,long) ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 long FUNC_5 (struct tcp_sock const*) ;
 int FUNC_6 (struct sock*,long,int const) ;

__attribute__((used)) static bool FUNC_7(struct sock *VAR_4, const int VAR_5,
          long VAR_6, long VAR_7,
          long VAR_8, struct rate_sample *VAR_9)
{
 const struct tcp_sock *VAR_10 = FUNC_4(VAR_4);






 if (VAR_6 < 0)
  VAR_6 = VAR_7;







 if (VAR_6 < 0 && VAR_10->rx_opt.saw_tstamp && VAR_10->rx_opt.rcv_tsecr &&
     VAR_5 & VAR_0) {
  u32 VAR_11 = FUNC_5(VAR_10) - VAR_10->rx_opt.rcv_tsecr;

  if (FUNC_1(VAR_11 < VAR_1 / (VAR_3 / VAR_2))) {
   VAR_6 = VAR_11 * (VAR_3 / VAR_2);
   VAR_8 = VAR_6;
  }
 }
 VAR_9->rtt_us = VAR_8;
 if (VAR_6 < 0)
  return 0;





 FUNC_6(VAR_4, VAR_8, VAR_5);
 FUNC_2(VAR_4, VAR_6);
 FUNC_3(VAR_4);


 FUNC_0(VAR_4)->icsk_backoff = 0;
 return 1;
}

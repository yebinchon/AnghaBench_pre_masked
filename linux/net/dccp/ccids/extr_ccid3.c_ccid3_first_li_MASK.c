
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct sock {int dummy; } ;
struct ccid3_hc_rx_sock {scalar_t__ rx_rtt; unsigned int rx_bytes_recv; scalar_t__ rx_x_recv; int rx_s; int rx_tstamp_last_feedback; } ;
typedef unsigned int s64 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 struct ccid3_hc_rx_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (char*,int ,struct sock*,unsigned int,unsigned int) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (int ,int ) ;
 unsigned int FUNC_7 (int,unsigned int) ;
 void* FUNC_8 (unsigned int,unsigned int) ;
 unsigned int FUNC_9 (unsigned int) ;

__attribute__((used)) static u32 FUNC_10(struct sock *VAR_1)
{
 struct ccid3_hc_rx_sock *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3, VAR_4;
 s64 VAR_5;
 u64 VAR_6;

 if (VAR_2->rx_rtt == 0) {
  FUNC_1("No RTT estimate available, using fallback RTT\n");
  VAR_2->rx_rtt = VAR_0;
 }

 VAR_5 = FUNC_6(FUNC_5(), VAR_2->rx_tstamp_last_feedback);
 if (VAR_5 <= 0)
  VAR_5 = 1;
 VAR_3 = FUNC_8(VAR_2->rx_bytes_recv, VAR_5);
 if (VAR_3 == 0) {
  FUNC_1("X_recv==0\n");
  if (VAR_2->rx_x_recv == 0) {
   FUNC_0("stored value of X_recv is zero");
   return ~0U;
  }
  VAR_3 = VAR_2->rx_x_recv;
 }

 VAR_6 = FUNC_7(VAR_2->rx_s, VAR_2->rx_rtt);
 VAR_6 = FUNC_8(VAR_6, VAR_3);
 VAR_4 = FUNC_9(VAR_6);

 FUNC_3("%s(%p), receive rate=%u bytes/s, implied "
         "loss rate=%u\n", FUNC_4(VAR_1), VAR_1, VAR_3, VAR_4);

 return VAR_4 == 0 ? ~0U : FUNC_7(1, VAR_4);
}

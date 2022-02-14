
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {int tx_cwnd; int tx_cwnd_stamp; void* tx_cwnd_used; void* tx_ssthresh; } ;
struct TYPE_2__ {int dccps_mss_cache; } ;


 int FUNC_0 (struct sock*) ;
 struct ccid2_hc_tx_sock* FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 void* FUNC_3 (void*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, const u32 VAR_1)
{
 struct ccid2_hc_tx_sock *VAR_2 = FUNC_1(VAR_0);

 u32 VAR_3 = FUNC_4(FUNC_2(VAR_0)->dccps_mss_cache),
     VAR_4 = FUNC_3(VAR_2->tx_cwnd_used, VAR_3);

 if (VAR_4 < VAR_2->tx_cwnd) {
  VAR_2->tx_ssthresh = FUNC_3(VAR_2->tx_ssthresh,
         (VAR_2->tx_cwnd >> 1) + (VAR_2->tx_cwnd >> 2));
  VAR_2->tx_cwnd = (VAR_2->tx_cwnd + VAR_4) >> 1;
 }
 VAR_2->tx_cwnd_used = 0;
 VAR_2->tx_cwnd_stamp = VAR_1;

 FUNC_0(VAR_0);
}

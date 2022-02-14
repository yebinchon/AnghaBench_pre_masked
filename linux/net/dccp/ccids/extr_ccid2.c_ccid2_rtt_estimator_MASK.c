
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {long tx_srtt; long tx_mdev; long tx_mdev_max; long tx_rttvar; int tx_rto; int tx_rtt_seq; } ;
struct TYPE_2__ {int dccps_gss; int dccps_gar; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct ccid2_hc_tx_sock* FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 long FUNC_3 (long,int) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, const long VAR_2)
{
 struct ccid2_hc_tx_sock *VAR_3 = FUNC_1(VAR_1);
 long VAR_4 = VAR_2 ? : 1;

 if (VAR_3->tx_srtt == 0) {

  VAR_3->tx_srtt = VAR_4 << 3;
  VAR_3->tx_mdev = VAR_4 << 1;

  VAR_3->tx_mdev_max = FUNC_3(VAR_3->tx_mdev, FUNC_4(VAR_1));
  VAR_3->tx_rttvar = VAR_3->tx_mdev_max;

  VAR_3->tx_rtt_seq = FUNC_2(VAR_1)->dccps_gss;
 } else {

  VAR_4 -= (VAR_3->tx_srtt >> 3);
  VAR_3->tx_srtt += VAR_4;


  if (VAR_4 < 0) {
   VAR_4 = -VAR_4;
   VAR_4 -= (VAR_3->tx_mdev >> 2);





   if (VAR_4 > 0)
    VAR_4 >>= 3;
  } else {
   VAR_4 -= (VAR_3->tx_mdev >> 2);
  }
  VAR_3->tx_mdev += VAR_4;

  if (VAR_3->tx_mdev > VAR_3->tx_mdev_max) {
   VAR_3->tx_mdev_max = VAR_3->tx_mdev;
   if (VAR_3->tx_mdev_max > VAR_3->tx_rttvar)
    VAR_3->tx_rttvar = VAR_3->tx_mdev_max;
  }
  if (FUNC_0(FUNC_2(VAR_1)->dccps_gar, VAR_3->tx_rtt_seq)) {
   if (VAR_3->tx_mdev_max < VAR_3->tx_rttvar)
    VAR_3->tx_rttvar -= (VAR_3->tx_rttvar -
        VAR_3->tx_mdev_max) >> 2;
   VAR_3->tx_rtt_seq = FUNC_2(VAR_1)->dccps_gss;
   VAR_3->tx_mdev_max = FUNC_4(VAR_1);
  }
 }
 VAR_3->tx_rto = (VAR_3->tx_srtt >> 3) + VAR_3->tx_rttvar;

 if (VAR_3->tx_rto > VAR_0)
  VAR_3->tx_rto = VAR_0;
}

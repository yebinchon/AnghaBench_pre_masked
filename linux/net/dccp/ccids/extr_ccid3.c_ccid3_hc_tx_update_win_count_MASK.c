
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccid3_hc_tx_sock {int tx_rtt; int tx_last_win_count; int tx_t_last_win_count; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct ccid3_hc_tx_sock *VAR_0,
      ktime_t VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1, VAR_0->tx_t_last_win_count),
     VAR_3 = (4 * VAR_2) / VAR_0->tx_rtt;

 if (VAR_3 > 0) {
  VAR_0->tx_t_last_win_count = VAR_1;
  VAR_0->tx_last_win_count += FUNC_1(VAR_3, 5U);
  VAR_0->tx_last_win_count &= 0xF;
 }
}

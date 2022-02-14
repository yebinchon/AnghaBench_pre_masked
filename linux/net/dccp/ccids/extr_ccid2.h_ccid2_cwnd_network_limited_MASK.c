
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccid2_hc_tx_sock {scalar_t__ tx_pipe; scalar_t__ tx_cwnd; } ;



__attribute__((used)) static inline bool FUNC_0(struct ccid2_hc_tx_sock *VAR_0)
{
 return VAR_0->tx_pipe >= VAR_0->tx_cwnd;
}

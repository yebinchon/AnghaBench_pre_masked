
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ccid3_hc_tx_sock {scalar_t__ tx_s; } ;


 int FUNC_0 (struct ccid3_hc_tx_sock*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct ccid3_hc_tx_sock *VAR_0, int VAR_1)
{
 const u16 VAR_2 = VAR_0->tx_s;

 VAR_0->tx_s = FUNC_1(VAR_0->tx_s, VAR_1, 9);

 if (VAR_0->tx_s != VAR_2)
  FUNC_0(VAR_0);
}

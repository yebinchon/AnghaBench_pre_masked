
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ tx_win; scalar_t__ ack_win; scalar_t__ tx_win_max; int flags; int conn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_3(struct l2cap_chan *VAR_4)
{
 if (VAR_4->tx_win > VAR_2 &&
     FUNC_0(VAR_4->conn)) {

  FUNC_2(VAR_0, &VAR_4->flags);
  VAR_4->tx_win_max = VAR_1;
 } else {
  VAR_4->tx_win = FUNC_1(VAR_3, VAR_4->tx_win,
         VAR_2);
  VAR_4->tx_win_max = VAR_2;
 }
 VAR_4->ack_win = VAR_4->tx_win;
}

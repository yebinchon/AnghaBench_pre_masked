
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tfrc_rx_hist_entry {int tfrchrx_ccval; int tfrchrx_seqno; } ;
struct tfrc_loss_interval {int li_ccval; scalar_t__ li_is_closed; int li_seqno; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct tfrc_loss_interval *VAR_0,
         struct tfrc_rx_hist_entry *VAR_1)
{
 return FUNC_1(VAR_0->li_seqno, VAR_1->tfrchrx_seqno) > 0 &&
  (VAR_0->li_is_closed || FUNC_0(VAR_1->tfrchrx_ccval, VAR_0->li_ccval) > 4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct ccid3_hc_rx_sock {scalar_t__ rx_state; scalar_t__ rx_s; scalar_t__ rx_rtt; int rx_hist; int rx_last_counter; int rx_li_hist; int rx_bytes_recv; } ;
typedef enum ccid3_fback_type { ____Placeholder_ccid3_fback_type } ccid3_fback_type ;
struct TYPE_6__ {int dccph_doff; int dccph_ccval; } ;
struct TYPE_4__ {int dccpor_ndp; } ;
struct TYPE_5__ {TYPE_1__ dccps_options_received; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sock*,struct sk_buff*,int) ;
 int FUNC_2 (struct sock*,int ) ;
 struct ccid3_hc_rx_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 TYPE_2__* FUNC_6 (struct sock*) ;
 void* FUNC_7 (scalar_t__,scalar_t__ const,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_10 (int *,int *,struct sk_buff*,int const,int ,struct sock*) ;
 int FUNC_11 (int *,struct sk_buff*,int const) ;
 scalar_t__ FUNC_12 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct ccid3_hc_rx_sock *VAR_9 = FUNC_3(VAR_7);
 enum ccid3_fback_type VAR_10 = VAR_1;
 const u64 VAR_11 = FUNC_6(VAR_7)->dccps_options_received.dccpor_ndp;
 const bool VAR_12 = FUNC_4(VAR_8);

 if (FUNC_15(VAR_9->rx_state == VAR_5)) {
  if (VAR_12) {
   const u32 VAR_13 = VAR_8->len - FUNC_5(VAR_8)->dccph_doff * 4;
   VAR_10 = VAR_0;
   FUNC_2(VAR_7, VAR_4);
   VAR_9->rx_s = VAR_13;





  }
  goto update_records;
 }

 if (FUNC_12(&VAR_9->rx_hist, VAR_8))
  return;

 if (VAR_12) {
  const u32 VAR_14 = VAR_8->len - FUNC_5(VAR_8)->dccph_doff * 4;



  VAR_9->rx_s = FUNC_7(VAR_9->rx_s, VAR_14, 9);
  VAR_9->rx_bytes_recv += VAR_14;
 }




 if (FUNC_10(&VAR_9->rx_hist, &VAR_9->rx_li_hist,
    VAR_8, VAR_11, VAR_6, VAR_7)) {
  VAR_10 = VAR_2;
  goto done_receiving;
 }

 if (FUNC_13(&VAR_9->rx_hist))
  return;




 if (FUNC_15(!VAR_12))
  goto update_records;

 if (!FUNC_8(&VAR_9->rx_li_hist)) {
  const u32 VAR_15 = FUNC_14(&VAR_9->rx_hist, VAR_8);





  if (VAR_15 != 0)
   VAR_9->rx_rtt = FUNC_7(VAR_9->rx_rtt, VAR_15, 9);

 } else if (FUNC_9(&VAR_9->rx_li_hist, VAR_8)) {




  VAR_10 = VAR_2;
 }




 if (FUNC_0(FUNC_5(VAR_8)->dccph_ccval, VAR_9->rx_last_counter) > 3)
  VAR_10 = VAR_3;

update_records:
 FUNC_11(&VAR_9->rx_hist, VAR_8, VAR_11);

done_receiving:
 if (VAR_10)
  FUNC_1(VAR_7, VAR_8, VAR_10);
}

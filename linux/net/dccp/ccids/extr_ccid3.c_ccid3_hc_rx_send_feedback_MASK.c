
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_hc_rx_insert_options; } ;
struct ccid3_hc_rx_sock {unsigned int rx_pinv; scalar_t__ rx_bytes_recv; int rx_last_counter; int rx_tstamp_last_feedback; int rx_x_recv; } ;
typedef int s64 ;
typedef int ktime_t ;
typedef enum ccid3_fback_type { ____Placeholder_ccid3_fback_type } ccid3_fback_type ;
struct TYPE_2__ {int dccph_ccval; } ;





 struct ccid3_hc_rx_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (char*,int,int ,unsigned int) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sock*) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_0,
          const struct sk_buff *VAR_1,
          enum ccid3_fback_type VAR_2)
{
 struct ccid3_hc_rx_sock *VAR_3 = FUNC_0(VAR_0);
 struct dccp_sock *VAR_4 = FUNC_4(VAR_0);
 ktime_t VAR_5 = FUNC_5();
 s64 VAR_6 = 0;

 switch (VAR_2) {
 case 130:
  VAR_3->rx_x_recv = 0;
  VAR_3->rx_pinv = ~0U;
  break;
 case 129:
  if (VAR_3->rx_x_recv > 0)
   break;

 case 128:
  VAR_6 = FUNC_6(VAR_5, VAR_3->rx_tstamp_last_feedback);
  if (VAR_6 <= 0)
   VAR_6 = 1;
  VAR_3->rx_x_recv = FUNC_7(VAR_3->rx_bytes_recv, VAR_6);
  break;
 default:
  return;
 }

 FUNC_1("Interval %lldusec, X_recv=%u, 1/p=%u\n", VAR_6,
         VAR_3->rx_x_recv, VAR_3->rx_pinv);

 VAR_3->rx_tstamp_last_feedback = VAR_5;
 VAR_3->rx_last_counter = FUNC_2(VAR_1)->dccph_ccval;
 VAR_3->rx_bytes_recv = 0;

 VAR_4->dccps_hc_rx_insert_options = 1;
 FUNC_3(VAR_0);
}

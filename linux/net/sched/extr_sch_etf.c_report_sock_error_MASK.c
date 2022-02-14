
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int ee_data; int ee_info; scalar_t__ ee_pad; int ee_code; scalar_t__ ee_type; int ee_origin; int ee_errno; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct sk_buff {int tstamp; TYPE_2__* sk; } ;
typedef int ktime_t ;
struct TYPE_4__ {int sk_txtime_report_errors; } ;


 int VAR_0 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_2, u32 VAR_3, u8 VAR_4)
{
 struct sock_exterr_skb *VAR_5;
 struct sk_buff *VAR_6;
 ktime_t VAR_7 = VAR_2->tstamp;

 if (!VAR_2->sk || !(VAR_2->sk->sk_txtime_report_errors))
  return;

 VAR_6 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_6)
  return;

 VAR_5 = FUNC_0(VAR_6);
 VAR_5->ee.ee_errno = VAR_3;
 VAR_5->ee.ee_origin = VAR_1;
 VAR_5->ee.ee_type = 0;
 VAR_5->ee.ee_code = VAR_4;
 VAR_5->ee.ee_pad = 0;
 VAR_5->ee.ee_data = (VAR_7 >> 32);
 VAR_5->ee.ee_info = VAR_7;

 if (FUNC_3(VAR_2->sk, VAR_6))
  FUNC_1(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int lost; int delivered; int delivered_mstamp; } ;
struct sock {int dummy; } ;
struct bbr {scalar_t__ lt_rtt_cnt; int lt_last_lost; int lt_last_delivered; int lt_last_stamp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct bbr* FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_2(VAR_1);
 struct bbr *VAR_3 = FUNC_1(VAR_1);

 VAR_3->lt_last_stamp = FUNC_0(VAR_2->delivered_mstamp, VAR_0);
 VAR_3->lt_last_delivered = VAR_2->delivered;
 VAR_3->lt_last_lost = VAR_2->lost;
 VAR_3->lt_rtt_cnt = 0;
}

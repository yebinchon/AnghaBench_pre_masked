
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpnv {int nv_base_rtt; int nv_lower_bound_rtt; int nv_allow_cwnd_growth; scalar_t__ cwnd_growth_factor; scalar_t__ nv_catchup; int nv_min_cwnd; void* nv_min_rtt_new; void* nv_min_rtt; scalar_t__ nv_min_rtt_reset_jiffies; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct tcpnv* FUNC_0 (struct sock*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sock*,int ,int ,int *) ;
 int FUNC_2 (struct tcpnv*,struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_5)
{
 struct tcpnv *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 FUNC_2(VAR_6, VAR_5);






 VAR_7 = FUNC_1(VAR_5, VAR_0, 0, ((void*)0));
 if (VAR_7 > 0) {
  VAR_6->nv_base_rtt = VAR_7;
  VAR_6->nv_lower_bound_rtt = (VAR_7 * 205) >> 8;
 } else {
  VAR_6->nv_base_rtt = 0;
  VAR_6->nv_lower_bound_rtt = 0;
 }

 VAR_6->nv_allow_cwnd_growth = 1;
 VAR_6->nv_min_rtt_reset_jiffies = VAR_4 + 2 * VAR_1;
 VAR_6->nv_min_rtt = VAR_2;
 VAR_6->nv_min_rtt_new = VAR_2;
 VAR_6->nv_min_cwnd = VAR_3;
 VAR_6->nv_catchup = 0;
 VAR_6->cwnd_growth_factor = 0;
}

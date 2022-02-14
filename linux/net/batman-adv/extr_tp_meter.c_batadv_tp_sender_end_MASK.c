
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct batadv_tp_vars {int srtt; int rttvar; int tot_sent; int start_time; int other_end; int reason; int icmp_uid; int session; int ss_threshold; int cwnd; int rto; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,int,int,...) ;
 int FUNC_2 (int ,int ,struct batadv_priv*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct batadv_priv *VAR_1,
     struct batadv_tp_vars *VAR_2)
{
 u32 VAR_3;

 FUNC_1(VAR_0, VAR_1,
     "Test towards %pM finished..shutting down (reason=%d)\n",
     VAR_2->other_end, VAR_2->reason);

 FUNC_1(VAR_0, VAR_1,
     "Last timing stats: SRTT=%ums RTTVAR=%ums RTO=%ums\n",
     VAR_2->srtt >> 3, VAR_2->rttvar >> 2, VAR_2->rto);

 FUNC_1(VAR_0, VAR_1,
     "Final values: cwnd=%u ss_threshold=%u\n",
     VAR_2->cwnd, VAR_2->ss_threshold);

 VAR_3 = FUNC_3(VAR_2->session,
        VAR_2->icmp_uid);

 FUNC_2(VAR_2->reason,
    VAR_2->other_end,
    VAR_1,
    VAR_2->start_time,
    FUNC_0(&VAR_2->tot_sent),
    VAR_3);
}

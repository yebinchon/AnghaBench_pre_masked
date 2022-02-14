
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct batadv_tp_vars {int rto; int ss_threshold; int cwnd; int more_bytes; int last_acked; scalar_t__ last_sent; int cwnd_lock; int other_end; int sending; struct batadv_priv* bat_priv; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,int ,int,int,scalar_t__) ;
 int FUNC_2 (struct batadv_tp_vars*) ;
 int FUNC_3 (struct batadv_tp_vars*,int ) ;
 struct batadv_tp_vars* FUNC_4 (int ,struct timer_list*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 struct batadv_tp_vars* VAR_5 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_6)
{
 struct batadv_tp_vars *VAR_7 = FUNC_4(VAR_7, VAR_6, VAR_4);
 struct batadv_priv *VAR_8 = VAR_7->bat_priv;

 if (FUNC_0(&VAR_7->sending) == 0)
  return;


 if (FUNC_7(VAR_7->rto >= VAR_1)) {
  FUNC_3(VAR_7,
       VAR_3);
  return;
 }




 VAR_7->rto <<= 1;

 FUNC_5(&VAR_7->cwnd_lock);

 VAR_7->ss_threshold = VAR_7->cwnd >> 1;
 if (VAR_7->ss_threshold < VAR_2 * 2)
  VAR_7->ss_threshold = VAR_2 * 2;

 FUNC_1(VAR_0, VAR_8,
     "Meter: RTO fired during test towards %pM! cwnd=%u new ss_thr=%u, resetting last_sent to %u\n",
     VAR_7->other_end, VAR_7->cwnd, VAR_7->ss_threshold,
     FUNC_0(&VAR_7->last_acked));

 VAR_7->cwnd = VAR_2 * 3;

 FUNC_6(&VAR_7->cwnd_lock);


 VAR_7->last_sent = FUNC_0(&VAR_7->last_acked);
 FUNC_8(&VAR_7->more_bytes);

 FUNC_2(VAR_7);
}

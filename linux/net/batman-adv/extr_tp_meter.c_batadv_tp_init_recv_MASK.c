
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_tp_vars {int timer; int refcount; int list; int unacked_list; int unacked_lock; struct batadv_priv* bat_priv; int last_recv; int session; int role; int other_end; } ;
struct batadv_priv {int tp_list_lock; int tp_list; int tp_num; } ;
struct batadv_icmp_tp_packet {int session; int orig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,struct batadv_priv*,char*) ;
 struct batadv_tp_vars* FUNC_3 (struct batadv_priv*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct batadv_tp_vars*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 struct batadv_tp_vars* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ) ;

__attribute__((used)) static struct batadv_tp_vars *
FUNC_15(struct batadv_priv *VAR_6,
      const struct batadv_icmp_tp_packet *VAR_7)
{
 struct batadv_tp_vars *VAR_8;

 FUNC_11(&VAR_6->tp_list_lock);
 VAR_8 = FUNC_3(VAR_6, VAR_7->orig,
           VAR_7->session);
 if (VAR_8)
  goto out_unlock;

 if (!FUNC_1(&VAR_6->tp_num, 1, VAR_2)) {
  FUNC_2(VAR_0, VAR_6,
      "Meter: too many ongoing sessions, aborting (RECV)\n");
  goto out_unlock;
 }

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  goto out_unlock;

 FUNC_5(VAR_8->other_end, VAR_7->orig);
 VAR_8->role = VAR_3;
 FUNC_10(VAR_8->session, VAR_7->session, sizeof(VAR_8->session));
 VAR_8->last_recv = VAR_1;
 VAR_8->bat_priv = VAR_6;
 FUNC_9(&VAR_8->refcount);

 FUNC_12(&VAR_8->unacked_lock);
 FUNC_0(&VAR_8->unacked_list);

 FUNC_8(&VAR_8->refcount);
 FUNC_6(&VAR_8->list, &VAR_6->tp_list);

 FUNC_8(&VAR_8->refcount);
 FUNC_14(&VAR_8->timer, VAR_5, 0);

 FUNC_4(VAR_8);

out_unlock:
 FUNC_13(&VAR_6->tp_list_lock);

 return VAR_8;
}

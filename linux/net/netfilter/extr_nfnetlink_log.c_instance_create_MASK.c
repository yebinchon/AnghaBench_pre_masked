
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u32 ;
struct user_namespace {int dummy; } ;
struct nfulnl_instance {int hlist; int copy_range; int copy_mode; int nlbufsiz; int flushtimeout; int qthreshold; int group_num; int peer_portid; struct user_namespace* peer_user_ns; int net; int timer; int use; int lock; } ;
struct nfnl_log_net {int instances_lock; int * instance_table; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfulnl_instance* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct nfnl_log_net*,int ) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (int *,int *) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_7 (int,int ) ;
 struct nfnl_log_net* FUNC_8 (struct net*) ;
 int VAR_10 ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static struct nfulnl_instance *
FUNC_15(struct net *VAR_11, u_int16_t VAR_12,
  u32 VAR_13, struct user_namespace *VAR_14)
{
 struct nfulnl_instance *VAR_15;
 struct nfnl_log_net *VAR_16 = FUNC_8(VAR_11);
 int VAR_17;

 FUNC_10(&VAR_16->instances_lock);
 if (FUNC_2(VAR_16, VAR_12)) {
  VAR_17 = -VAR_1;
  goto out_unlock;
 }

 VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_17 = -VAR_2;
  goto out_unlock;
 }

 if (!FUNC_14(VAR_9)) {
  FUNC_6(VAR_15);
  VAR_17 = -VAR_0;
  goto out_unlock;
 }

 FUNC_1(&VAR_15->hlist);
 FUNC_11(&VAR_15->lock);

 FUNC_9(&VAR_15->use, 2);

 FUNC_13(&VAR_15->timer, VAR_10, 0);

 VAR_15->net = FUNC_3(VAR_11);
 VAR_15->peer_user_ns = VAR_14;
 VAR_15->peer_portid = VAR_13;
 VAR_15->group_num = VAR_12;

 VAR_15->qthreshold = VAR_7;
 VAR_15->flushtimeout = VAR_8;
 VAR_15->nlbufsiz = VAR_6;
 VAR_15->copy_mode = VAR_4;
 VAR_15->copy_range = VAR_5;

 FUNC_4(&VAR_15->hlist,
         &VAR_16->instance_table[FUNC_5(VAR_12)]);


 FUNC_12(&VAR_16->instances_lock);

 return VAR_15;

out_unlock:
 FUNC_12(&VAR_16->instances_lock);
 return FUNC_0(VAR_17);
}

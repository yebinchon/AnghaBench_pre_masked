
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u32 ;
struct nfqnl_instance {int hlist; int queue_list; int lock; int copy_mode; int copy_range; int queue_maxlen; int peer_portid; int queue_num; } ;
struct nfnl_queue_net {int instances_lock; int * instance_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfqnl_instance* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int *) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct nfnl_queue_net*,int ) ;
 int FUNC_5 (struct nfqnl_instance*) ;
 struct nfqnl_instance* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct nfqnl_instance *
FUNC_11(struct nfnl_queue_net *VAR_8, u_int16_t VAR_9, u32 VAR_10)
{
 struct nfqnl_instance *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_7(&VAR_8->instances_lock);
 if (FUNC_4(VAR_8, VAR_9)) {
  VAR_13 = -VAR_1;
  goto out_unlock;
 }

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_13 = -VAR_2;
  goto out_unlock;
 }

 VAR_11->queue_num = VAR_9;
 VAR_11->peer_portid = VAR_10;
 VAR_11->queue_maxlen = VAR_6;
 VAR_11->copy_range = VAR_5;
 VAR_11->copy_mode = VAR_4;
 FUNC_8(&VAR_11->lock);
 FUNC_1(&VAR_11->queue_list);

 if (!FUNC_10(VAR_7)) {
  VAR_13 = -VAR_0;
  goto out_free;
 }

 VAR_12 = FUNC_3(VAR_9);
 FUNC_2(&VAR_11->hlist, &VAR_8->instance_table[VAR_12]);

 FUNC_9(&VAR_8->instances_lock);

 return VAR_11;

out_free:
 FUNC_5(VAR_11);
out_unlock:
 FUNC_9(&VAR_8->instances_lock);
 return FUNC_0(VAR_13);
}

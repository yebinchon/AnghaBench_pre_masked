
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_topsrv {int send_wq; } ;
struct tipc_event {int dummy; } ;
struct tipc_conn {int swork; int outqueue_lock; int outqueue; } ;
struct outqueue_entry {int inactive; int list; int evt; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tipc_conn*) ;
 int FUNC_1 (struct tipc_conn*) ;
 struct outqueue_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct tipc_event*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct tipc_conn* FUNC_8 (struct tipc_topsrv*,int) ;
 struct tipc_topsrv* FUNC_9 (struct net*) ;

void FUNC_10(struct net *VAR_2, int VAR_3,
      u32 VAR_4, struct tipc_event *VAR_5)
{
 struct tipc_topsrv *VAR_6 = FUNC_9(VAR_2);
 struct outqueue_entry *VAR_7;
 struct tipc_conn *VAR_8;

 VAR_8 = FUNC_8(VAR_6, VAR_3);
 if (!VAR_8)
  return;

 if (!FUNC_1(VAR_8))
  goto err;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  goto err;
 VAR_7->inactive = (VAR_4 == VAR_1);
 FUNC_4(&VAR_7->evt, VAR_5, sizeof(*VAR_5));
 FUNC_6(&VAR_8->outqueue_lock);
 FUNC_3(&VAR_7->list, &VAR_8->outqueue);
 FUNC_7(&VAR_8->outqueue_lock);

 if (FUNC_5(VAR_6->send_wq, &VAR_8->swork))
  return;
err:
 FUNC_0(VAR_8);
}

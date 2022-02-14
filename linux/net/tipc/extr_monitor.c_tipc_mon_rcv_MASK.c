
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tipc_peer {int applied; struct tipc_mon_domain* domain; scalar_t__ down_cnt; int is_up; } ;
struct tipc_monitor {int lock; } ;
struct tipc_mon_state {int probing; int synched; int peer_gen; int acked_gen; } ;
struct tipc_mon_domain {int member_cnt; int gen; int ack_gen; int len; int * members; int up_map; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tipc_mon_domain*,int) ;
 struct tipc_peer* FUNC_2 (struct tipc_monitor*,int ) ;
 int FUNC_3 (struct tipc_mon_domain*) ;
 struct tipc_mon_domain* FUNC_4 (int,int ) ;
 int FUNC_5 (struct tipc_mon_domain*,struct tipc_mon_domain*,int) ;
 int FUNC_6 (struct tipc_monitor*,struct tipc_peer*) ;
 int FUNC_7 (struct tipc_monitor*,int ) ;
 int FUNC_8 (struct tipc_peer*,struct tipc_mon_domain*,int) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct tipc_peer*) ;
 struct tipc_monitor* FUNC_13 (struct net*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct net *VAR_1, void *VAR_2, u16 VAR_3, u32 VAR_4,
    struct tipc_mon_state *VAR_5, int VAR_6)
{
 struct tipc_monitor *VAR_7 = FUNC_13(VAR_1, VAR_6);
 struct tipc_mon_domain *VAR_8 = VAR_2;
 struct tipc_mon_domain VAR_9;
 struct tipc_mon_domain *VAR_10;
 struct tipc_peer *VAR_11;
 u16 VAR_12 = FUNC_11(VAR_8->member_cnt);
 int VAR_13 = FUNC_1(VAR_8, VAR_12);
 u16 VAR_14 = FUNC_11(VAR_8->gen);
 u16 VAR_15 = FUNC_11(VAR_8->ack_gen);
 bool VAR_16 = VAR_5->probing;
 int VAR_17, VAR_18;

 VAR_5->probing = 0;


 if (VAR_3 < FUNC_1(VAR_8, 0))
  return;
 if (VAR_3 != FUNC_1(VAR_8, VAR_12))
  return;
 if ((VAR_3 < VAR_13) || FUNC_11(VAR_8->len) != VAR_13)
  return;


 if (!VAR_5->synched) {
  VAR_5->peer_gen = VAR_14 - 1;
  VAR_5->acked_gen = VAR_15;
  VAR_5->synched = 1;
 }

 if (FUNC_9(VAR_15, VAR_5->acked_gen))
  VAR_5->acked_gen = VAR_15;


 if (!FUNC_9(VAR_14, VAR_5->peer_gen) && !VAR_16)
  return;

 FUNC_14(&VAR_7->lock);
 VAR_11 = FUNC_2(VAR_7, VAR_4);
 if (!VAR_11 || !VAR_11->is_up)
  goto exit;


 VAR_11->down_cnt = 0;


 if (!FUNC_9(VAR_14, VAR_5->peer_gen))
  goto exit;

 VAR_5->peer_gen = VAR_14;


 VAR_9.member_cnt = 0;
 VAR_10 = VAR_11->domain;
 if (VAR_10)
  FUNC_5(&VAR_9, VAR_10, VAR_10->len);


 if (!VAR_10 || (VAR_10->len < VAR_13)) {
  FUNC_3(VAR_10);
  VAR_10 = FUNC_4(VAR_13, VAR_0);
  VAR_11->domain = VAR_10;
  if (!VAR_10)
   goto exit;
 }
 VAR_10->len = VAR_13;
 VAR_10->gen = VAR_14;
 VAR_10->member_cnt = VAR_12;
 VAR_10->up_map = FUNC_0(VAR_8->up_map);
 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
  VAR_10->members[VAR_17] = FUNC_10(VAR_8->members[VAR_17]);


 VAR_18 = VAR_11->applied;
 FUNC_6(VAR_7, VAR_11);
 FUNC_8(VAR_11, &VAR_9, VAR_18);
 FUNC_7(VAR_7, FUNC_12(VAR_11));
exit:
 FUNC_15(&VAR_7->lock);
}

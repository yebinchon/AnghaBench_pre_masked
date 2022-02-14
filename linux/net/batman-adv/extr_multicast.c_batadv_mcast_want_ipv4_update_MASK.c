
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hlist_node {int dummy; } ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {int want_lists_lock; int num_want_all_ipv4; struct hlist_head want_all_ipv4_list; } ;
struct batadv_priv {TYPE_1__ mcast; } ;
struct batadv_orig_node {int mcast_flags; int mcast_handler_lock; struct hlist_node mcast_want_all_ipv4_node; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hlist_node*,struct hlist_head*) ;
 int FUNC_4 (struct hlist_node*) ;
 int FUNC_5 (struct hlist_node*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct batadv_priv *VAR_1,
       struct batadv_orig_node *VAR_2,
       u8 VAR_3)
{
 struct hlist_node *VAR_4 = &VAR_2->mcast_want_all_ipv4_node;
 struct hlist_head *VAR_5 = &VAR_1->mcast.want_all_ipv4_list;

 FUNC_6(&VAR_2->mcast_handler_lock);


 if (VAR_3 & VAR_0 &&
     !(VAR_2->mcast_flags & VAR_0)) {
  FUNC_2(&VAR_1->mcast.num_want_all_ipv4);

  FUNC_7(&VAR_1->mcast.want_lists_lock);

  FUNC_0(!FUNC_5(VAR_4));

  FUNC_3(VAR_4, VAR_5);
  FUNC_8(&VAR_1->mcast.want_lists_lock);

 } else if (!(VAR_3 & VAR_0) &&
     VAR_2->mcast_flags & VAR_0) {
  FUNC_1(&VAR_1->mcast.num_want_all_ipv4);

  FUNC_7(&VAR_1->mcast.want_lists_lock);

  FUNC_0(FUNC_5(VAR_4));

  FUNC_4(VAR_4);
  FUNC_8(&VAR_1->mcast.want_lists_lock);
 }
}

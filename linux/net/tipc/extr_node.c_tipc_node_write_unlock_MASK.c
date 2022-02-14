
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct list_head {int dummy; } ;
struct tipc_node {int action_flags; int addr; int link_id; int lock; struct list_head publ_list; struct net* net; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct net*,int,int) ;
 int FUNC_2 (struct net*,int,int) ;
 int FUNC_3 (struct net*,int) ;
 int FUNC_4 (struct net*,int ,int,int,int ,int,int) ;
 int FUNC_5 (struct net*,int ,int,int,int) ;
 int FUNC_6 (struct net*,struct list_head*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct tipc_node *VAR_6)
{
 struct net *VAR_7 = VAR_6->net;
 u32 VAR_8 = 0;
 u32 VAR_9 = VAR_6->action_flags;
 u32 VAR_10 = 0;
 u32 VAR_11;
 struct list_head *VAR_12;

 if (FUNC_0(!VAR_9)) {
  FUNC_7(&VAR_6->lock);
  return;
 }

 VAR_8 = VAR_6->addr;
 VAR_10 = VAR_6->link_id;
 VAR_11 = VAR_10 & 0xffff;
 VAR_12 = &VAR_6->publ_list;

 VAR_6->action_flags &= ~(VAR_4 | VAR_5 |
        VAR_2 | VAR_3);

 FUNC_7(&VAR_6->lock);

 if (VAR_9 & VAR_4)
  FUNC_6(VAR_7, VAR_12, VAR_8);

 if (VAR_9 & VAR_5)
  FUNC_3(VAR_7, VAR_8);

 if (VAR_9 & VAR_3) {
  FUNC_2(VAR_7, VAR_8, VAR_11);
  FUNC_4(VAR_7, VAR_0, VAR_8, VAR_8,
         VAR_1, VAR_10, VAR_10);
 }
 if (VAR_9 & VAR_2) {
  FUNC_1(VAR_7, VAR_8, VAR_11);
  FUNC_5(VAR_7, VAR_0, VAR_8,
          VAR_8, VAR_10);
 }
}

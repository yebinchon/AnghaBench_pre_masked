
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_peer {scalar_t__ addr; } ;
struct tipc_nl_msg {int dummy; } ;
struct tipc_monitor {int lock; struct tipc_peer* self; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tipc_peer*,struct tipc_nl_msg*) ;
 struct tipc_peer* FUNC_1 (struct tipc_peer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tipc_monitor* FUNC_4 (struct net*,scalar_t__) ;

int FUNC_5(struct net *VAR_2, struct tipc_nl_msg *VAR_3,
        u32 VAR_4, u32 *VAR_5)
{
 struct tipc_monitor *VAR_6 = FUNC_4(VAR_2, VAR_4);
 struct tipc_peer *VAR_7;

 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_6->lock);
 VAR_7 = VAR_6->self;
 do {
  if (*VAR_5) {
   if (VAR_7->addr == *VAR_5)
    *VAR_5 = 0;
   else
    continue;
  }
  if (FUNC_0(VAR_7, VAR_3)) {
   *VAR_5 = VAR_7->addr;
   FUNC_3(&VAR_6->lock);
   return -VAR_1;
  }
 } while ((VAR_7 = FUNC_1(VAR_7)) != VAR_6->self);
 FUNC_3(&VAR_6->lock);

 return 0;
}

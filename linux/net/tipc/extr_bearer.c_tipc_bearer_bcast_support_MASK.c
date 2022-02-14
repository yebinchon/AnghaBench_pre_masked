
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ broadcast; } ;
struct tipc_bearer {TYPE_1__ bcast_addr; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tipc_bearer* FUNC_0 (struct net*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

bool FUNC_3(struct net *VAR_1, u32 VAR_2)
{
 bool VAR_3 = 0;
 struct tipc_bearer *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  VAR_3 = (VAR_4->bcast_addr.broadcast == VAR_0);
 FUNC_2();
 return VAR_3;
}

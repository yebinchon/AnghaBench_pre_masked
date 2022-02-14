
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tipc_bearer {int mtu; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int * bearer_list; } ;


 struct tipc_bearer* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (struct net*) ;

int FUNC_4(struct net *VAR_0, u32 VAR_1)
{
 int VAR_2 = 0;
 struct tipc_bearer *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(FUNC_3(VAR_0)->bearer_list[VAR_1]);
 if (VAR_3)
  VAR_2 = VAR_3->mtu;
 FUNC_2();
 return VAR_2;
}

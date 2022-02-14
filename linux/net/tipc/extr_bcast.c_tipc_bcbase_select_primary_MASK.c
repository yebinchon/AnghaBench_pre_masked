
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bc_base {int primary_bearer; int bcast_support; int* dests; int link; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tipc_bc_base* FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct net*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct net*) ;

__attribute__((used)) static void FUNC_7(struct net *VAR_2)
{
 struct tipc_bc_base *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = FUNC_3(VAR_3->link);
 int VAR_5, VAR_6, VAR_7;

 VAR_3->primary_bearer = VAR_0;
 VAR_3->bcast_support = 1;

 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!VAR_3->dests[VAR_5])
   continue;

  VAR_6 = FUNC_2(VAR_2, VAR_5);
  if (VAR_6 < FUNC_4(VAR_3->link))
   FUNC_5(VAR_3->link, VAR_6);
  VAR_3->bcast_support &= FUNC_1(VAR_2, VAR_5);
  if (VAR_3->dests[VAR_5] < VAR_4)
   continue;

  VAR_3->primary_bearer = VAR_5;


  if ((VAR_5 ^ FUNC_6(VAR_2)) & 1)
   break;
 }
 VAR_7 = VAR_3->primary_bearer;
 if (VAR_7 != VAR_0)
  VAR_3->bcast_support = FUNC_1(VAR_2, VAR_7);
}

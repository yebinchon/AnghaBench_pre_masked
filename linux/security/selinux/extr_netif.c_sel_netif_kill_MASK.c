
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sel_netif {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct sel_netif*) ;
 struct sel_netif* FUNC_3 (struct net const*,int) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(const struct net *VAR_1, int VAR_2)
{
 struct sel_netif *VAR_3;

 FUNC_0();
 FUNC_4(&VAR_0);
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_3);
 FUNC_5(&VAR_0);
 FUNC_1();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct tipc_link* FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct tipc_link*) ;

int FUNC_4(struct net *VAR_1)
{
 struct tipc_link *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 FUNC_1(VAR_1);
 FUNC_3(VAR_2);
 FUNC_2(VAR_1);
 return 0;
}

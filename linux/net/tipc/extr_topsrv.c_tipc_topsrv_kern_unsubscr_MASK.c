
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_conn {int flags; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tipc_conn*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tipc_conn*,int *) ;
 struct tipc_conn* FUNC_3 (int ,int) ;
 int FUNC_4 (struct net*) ;

void FUNC_5(struct net *VAR_1, int VAR_2)
{
 struct tipc_conn *VAR_3;

 VAR_3 = FUNC_3(FUNC_4(VAR_1), VAR_2);
 if (!VAR_3)
  return;

 FUNC_1(VAR_0, &VAR_3->flags);
 FUNC_2(VAR_3, ((void*)0));
 FUNC_0(VAR_3);
 FUNC_0(VAR_3);
}

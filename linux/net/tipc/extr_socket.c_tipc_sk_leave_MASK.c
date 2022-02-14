
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {struct tipc_group* group; int sk; } ;
struct tipc_name_seq {int dummy; } ;
struct tipc_group {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int *) ;
 int FUNC_1 (struct net*,struct tipc_group*) ;
 int FUNC_2 (struct tipc_group*,struct tipc_name_seq*,int*) ;
 int FUNC_3 (struct tipc_sock*,int,struct tipc_name_seq*) ;

__attribute__((used)) static int FUNC_4(struct tipc_sock *VAR_1)
{
 struct net *VAR_2 = FUNC_0(&VAR_1->sk);
 struct tipc_group *VAR_3 = VAR_1->group;
 struct tipc_name_seq VAR_4;
 int VAR_5;

 if (!VAR_3)
  return -VAR_0;
 FUNC_2(VAR_3, &VAR_4, &VAR_5);
 FUNC_1(VAR_2, VAR_3);
 VAR_1->group = ((void*)0);
 FUNC_3(VAR_1, VAR_5, &VAR_4);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {struct tipc_link* bcl; int bclock; struct tipc_link* bcbase; } ;
struct tipc_link {int rc_ratio; int rcast_support; struct tipc_link* link; int inputq; } ;
struct tipc_bc_base {int rc_ratio; int rcast_support; struct tipc_bc_base* link; int inputq; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tipc_link*) ;
 struct tipc_link* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net*,int ,int ,int ,int ,int ,int *,int *,int *,struct tipc_link**) ;
 struct tipc_net* FUNC_4 (struct net*) ;

int FUNC_5(struct net *VAR_4)
{
 struct tipc_net *VAR_5 = FUNC_4(VAR_4);
 struct tipc_bc_base *VAR_6 = ((void*)0);
 struct tipc_link *VAR_7 = ((void*)0);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  goto enomem;
 VAR_5->bcbase = VAR_6;
 FUNC_2(&FUNC_4(VAR_4)->bclock);

 if (!FUNC_3(VAR_4, 0, 0,
     VAR_2,
     VAR_0,
     0,
     &VAR_6->inputq,
     ((void*)0),
     ((void*)0),
     &VAR_7))
  goto enomem;
 VAR_6->link = VAR_7;
 VAR_5->bcl = VAR_7;
 VAR_6->rc_ratio = 10;
 VAR_6->rcast_support = 1;
 return 0;
enomem:
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 return -VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_topsrv {scalar_t__ idr_in_use; int conn_idr; int idr_lock; int name; int awork; struct net* net; } ;
struct tipc_net {int subscription_count; struct tipc_topsrv* topsrv; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct tipc_topsrv* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int) ;
 struct tipc_net* FUNC_6 (struct net*) ;
 int VAR_2 ;
 int FUNC_7 (struct tipc_topsrv*) ;
 int FUNC_8 (struct tipc_topsrv*) ;
 int FUNC_9 (struct tipc_topsrv*) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_6(VAR_3);
 const char VAR_5[] = "topology_server";
 struct tipc_topsrv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->net = VAR_3;
 FUNC_0(&VAR_6->awork, VAR_2);

 FUNC_5(VAR_6->name, VAR_5, sizeof(VAR_6->name));
 VAR_4->topsrv = VAR_6;
 FUNC_1(&VAR_4->subscription_count, 0);

 FUNC_4(&VAR_6->idr_lock);
 FUNC_2(&VAR_6->conn_idr);
 VAR_6->idr_in_use = 0;

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 < 0)
  FUNC_9(VAR_6);

 return VAR_7;
}

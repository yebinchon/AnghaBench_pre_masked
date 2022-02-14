
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_topsrv {int idr_lock; int conn_idr; } ;
struct tipc_conn {int kref; } ;


 int FUNC_0 (struct tipc_conn*) ;
 struct tipc_conn* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct tipc_conn *FUNC_5(struct tipc_topsrv *VAR_0, int VAR_1)
{
 struct tipc_conn *VAR_2;

 FUNC_3(&VAR_0->idr_lock);
 VAR_2 = FUNC_1(&VAR_0->conn_idr, VAR_1);
 if (!FUNC_0(VAR_2) || !FUNC_2(&VAR_2->kref))
  VAR_2 = ((void*)0);
 FUNC_4(&VAR_0->idr_lock);
 return VAR_2;
}

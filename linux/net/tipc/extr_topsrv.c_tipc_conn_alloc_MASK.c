
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_topsrv {int idr_lock; int idr_in_use; int conn_idr; } ;
struct tipc_conn {int conid; struct tipc_topsrv* server; int flags; int rwork; int swork; int sub_lock; int outqueue_lock; int sub_list; int outqueue; int kref; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tipc_conn* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct tipc_conn*,int ,int ,int ) ;
 int FUNC_4 (struct tipc_conn*) ;
 int FUNC_5 (int *) ;
 struct tipc_conn* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct tipc_conn *FUNC_11(struct tipc_topsrv *VAR_5)
{
 struct tipc_conn *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 FUNC_5(&VAR_6->kref);
 FUNC_1(&VAR_6->outqueue);
 FUNC_1(&VAR_6->sub_list);
 FUNC_9(&VAR_6->outqueue_lock);
 FUNC_9(&VAR_6->sub_lock);
 FUNC_2(&VAR_6->swork, VAR_4);
 FUNC_2(&VAR_6->rwork, VAR_3);

 FUNC_8(&VAR_5->idr_lock);
 VAR_7 = FUNC_3(&VAR_5->conn_idr, VAR_6, 0, 0, VAR_2);
 if (VAR_7 < 0) {
  FUNC_4(VAR_6);
  FUNC_10(&VAR_5->idr_lock);
  return FUNC_0(-VAR_1);
 }
 VAR_6->conid = VAR_7;
 VAR_5->idr_in_use++;
 FUNC_10(&VAR_5->idr_lock);

 FUNC_7(VAR_0, &VAR_6->flags);
 VAR_6->server = VAR_5;

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_conn {int wsched; int pt; int poll_pending_link; int wq; int rq; int unsent_req_list; int req_list; struct p9_client* client; int mux_list; } ;
struct p9_trans_fd {struct p9_conn conn; } ;
struct p9_client {int msize; struct p9_trans_fd* trans; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct p9_client*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct p9_client *VAR_8)
{
 __poll_t VAR_9;
 struct p9_trans_fd *VAR_10 = VAR_8->trans;
 struct p9_conn *VAR_11 = &VAR_10->conn;

 FUNC_3(VAR_2, "client %p msize %d\n", VAR_8, VAR_8->msize);

 FUNC_0(&VAR_11->mux_list);
 VAR_11->client = VAR_8;

 FUNC_0(&VAR_11->req_list);
 FUNC_0(&VAR_11->unsent_req_list);
 FUNC_1(&VAR_11->rq, VAR_6);
 FUNC_1(&VAR_11->wq, VAR_7);
 FUNC_0(&VAR_11->poll_pending_link);
 FUNC_2(&VAR_11->pt, VAR_5);

 VAR_9 = FUNC_4(VAR_8, &VAR_11->pt, ((void*)0));
 if (VAR_9 & VAR_0) {
  FUNC_3(VAR_2, "mux %p can read\n", VAR_11);
  FUNC_5(VAR_3, &VAR_11->wsched);
 }

 if (VAR_9 & VAR_1) {
  FUNC_3(VAR_2, "mux %p can write\n", VAR_11);
  FUNC_5(VAR_4, &VAR_11->wsched);
 }
}

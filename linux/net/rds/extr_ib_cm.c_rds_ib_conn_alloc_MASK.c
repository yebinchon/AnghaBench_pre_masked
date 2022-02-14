
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int ib_node; struct rds_connection* conn; int i_recv_ring; int i_send_ring; int i_fastreg_wrs; int i_signaled_sends; int i_ack_lock; int i_recv_mutex; int i_recv_tasklet; int i_send_tasklet; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rds_ib_connection*) ;
 struct rds_ib_connection* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rds_ib_connection*,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,struct rds_connection*,struct rds_ib_connection*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,int ,unsigned long) ;

int FUNC_13(struct rds_connection *VAR_8, gfp_t VAR_9)
{
 struct rds_ib_connection *VAR_10;
 unsigned long VAR_11;
 int VAR_12;


 VAR_10 = FUNC_3(sizeof(struct rds_ib_connection), VAR_9);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_10, VAR_9);
 if (VAR_12) {
  FUNC_2(VAR_10);
  return VAR_12;
 }

 FUNC_0(&VAR_10->ib_node);
 FUNC_12(&VAR_10->i_send_tasklet, VAR_7,
       (unsigned long)VAR_10);
 FUNC_12(&VAR_10->i_recv_tasklet, VAR_6,
       (unsigned long)VAR_10);
 FUNC_5(&VAR_10->i_recv_mutex);

 FUNC_9(&VAR_10->i_ack_lock);

 FUNC_1(&VAR_10->i_signaled_sends, 0);
 FUNC_1(&VAR_10->i_fastreg_wrs, VAR_1);





 FUNC_7(&VAR_10->i_send_ring, VAR_5);
 FUNC_7(&VAR_10->i_recv_ring, VAR_4);

 VAR_10->conn = VAR_8;
 VAR_8->c_transport_data = VAR_10;

 FUNC_10(&VAR_3, VAR_11);
 FUNC_4(&VAR_10->ib_node, &VAR_2);
 FUNC_11(&VAR_3, VAR_11);


 FUNC_8("conn %p conn ic %p\n", VAR_8, VAR_8->c_transport_data);
 return 0;
}

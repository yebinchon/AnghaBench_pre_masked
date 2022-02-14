
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_tcp_connection {int t_tinc_hdr_rem; int t_tcp_node_detached; int t_tcp_node; TYPE_1__* t_cpath; scalar_t__ t_tinc_data_rem; int * t_tinc; int * t_sock; int t_conn_path_lock; } ;
struct rds_header {int dummy; } ;
struct rds_connection {TYPE_1__* c_path; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct rds_tcp_connection* cp_transport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rds_tcp_connection* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rds_tcp_connection*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,int,struct rds_tcp_connection*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct rds_connection *VAR_5, gfp_t VAR_6)
{
 struct rds_tcp_connection *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = FUNC_0(VAR_4, VAR_6);
  if (!VAR_7) {
   VAR_10 = -VAR_0;
   goto fail;
  }
  FUNC_2(&VAR_7->t_conn_path_lock);
  VAR_7->t_sock = ((void*)0);
  VAR_7->t_tinc = ((void*)0);
  VAR_7->t_tinc_hdr_rem = sizeof(struct rds_header);
  VAR_7->t_tinc_data_rem = 0;

  VAR_5->c_path[VAR_8].cp_transport_data = VAR_7;
  VAR_7->t_cpath = &VAR_5->c_path[VAR_8];
  VAR_7->t_tcp_node_detached = 1;

  FUNC_4("rds_conn_path [%d] tc %p\n", VAR_8,
    VAR_5->c_path[VAR_8].cp_transport_data);
 }
 FUNC_5(&VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = VAR_5->c_path[VAR_8].cp_transport_data;
  VAR_7->t_tcp_node_detached = 0;
  FUNC_1(&VAR_7->t_tcp_node, &VAR_2);
 }
 FUNC_6(&VAR_3);
fail:
 if (VAR_10) {
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   FUNC_3(VAR_5->c_path[VAR_9].cp_transport_data);
 }
 return VAR_10;
}

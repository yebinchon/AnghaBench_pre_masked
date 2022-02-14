
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int sk; } ;
struct rds_tcp_desc_arg {int gfp; struct rds_conn_path* conn_path; } ;
struct rds_tcp_connection {struct socket* t_sock; } ;
struct rds_conn_path {struct rds_tcp_connection* cp_transport_data; } ;
struct TYPE_4__ {struct rds_tcp_desc_arg* data; } ;
struct TYPE_5__ {int error; int count; TYPE_1__ arg; } ;
typedef TYPE_2__ read_descriptor_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rds_tcp_connection*,int ,int) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct rds_conn_path *VAR_1, gfp_t VAR_2)
{
 struct rds_tcp_connection *VAR_3 = VAR_1->cp_transport_data;
 struct socket *VAR_4 = VAR_3->t_sock;
 read_descriptor_t VAR_5;
 struct rds_tcp_desc_arg VAR_6;


 VAR_6.conn_path = VAR_1;
 VAR_6.gfp = VAR_2;
 VAR_5.arg.data = &VAR_6;
 VAR_5.error = 0;
 VAR_5.count = 1;

 FUNC_1(VAR_4->sk, &VAR_5, VAR_0);
 FUNC_0("tcp_read_sock for tc %p gfp 0x%x returned %d\n", VAR_3, VAR_2,
   VAR_5.error);

 return VAR_5.error;
}

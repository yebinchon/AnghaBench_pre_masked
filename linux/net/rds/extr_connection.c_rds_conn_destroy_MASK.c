
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_connection {struct rds_conn_path* c_path; int c_hash_node; int c_faddr; int c_laddr; TYPE_1__* c_trans; } ;
struct rds_conn_path {int cp_retrans; } ;
struct TYPE_2__ {scalar_t__ t_mp_capable; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rds_conn_path*) ;
 int FUNC_3 (int ,struct rds_connection*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rds_connection*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct rds_conn_path*) ;
 int VAR_3 ;
 int FUNC_7 (char*,struct rds_connection*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 () ;

void FUNC_13(struct rds_connection *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 struct rds_conn_path *VAR_7;
 int VAR_8 = (VAR_4->c_trans->t_mp_capable ? VAR_0 : 1);

 FUNC_7("freeing conn %p for %pI4 -> "
   "%pI4\n", VAR_4, &VAR_4->c_laddr,
   &VAR_4->c_faddr);


 FUNC_8(&VAR_2);
 FUNC_1(&VAR_4->c_hash_node);
 FUNC_10(&VAR_2);
 FUNC_12();


 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = &VAR_4->c_path[VAR_6];
  FUNC_6(VAR_7);
  FUNC_0(!FUNC_4(&VAR_7->cp_retrans));
 }






 FUNC_5(VAR_4);

 FUNC_2(VAR_4->c_path);
 FUNC_3(VAR_3, VAR_4);

 FUNC_9(&VAR_2, VAR_5);
 VAR_1--;
 FUNC_11(&VAR_2, VAR_5);
}

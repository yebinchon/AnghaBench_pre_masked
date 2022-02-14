
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {int rs_bound_addr; int rs_bound_node; int rs_bound_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rds_sock*) ;
 int FUNC_3 (char*,struct rds_sock*,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;

void FUNC_5(struct rds_sock *VAR_3)
{

 if (FUNC_0(&VAR_3->rs_bound_addr))
  return;

 FUNC_3("rs %p unbinding from %pI6c:%d\n",
   VAR_3, &VAR_3->rs_bound_addr,
   FUNC_1(VAR_3->rs_bound_port));

 FUNC_4(&VAR_0, &VAR_3->rs_bound_node, VAR_1);
 FUNC_2(VAR_3);
 VAR_3->rs_bound_addr = VAR_2;
}

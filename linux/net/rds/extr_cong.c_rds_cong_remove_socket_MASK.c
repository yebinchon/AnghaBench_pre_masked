
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {int rs_bound_port; int rs_bound_addr; int rs_cong_list; } ;
struct rds_cong_map {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rds_cong_map*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rds_cong_map*) ;
 scalar_t__ FUNC_3 (struct rds_cong_map*,int ) ;
 struct rds_cong_map* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct rds_sock *VAR_2)
{
 unsigned long VAR_3;
 struct rds_cong_map *VAR_4;

 FUNC_7(&VAR_1, VAR_3);
 FUNC_0(&VAR_2->rs_cong_list);
 FUNC_8(&VAR_1, VAR_3);


 FUNC_5(&VAR_0, VAR_3);
 VAR_4 = FUNC_4(&VAR_2->rs_bound_addr, ((void*)0));
 FUNC_6(&VAR_0, VAR_3);

 if (VAR_4 && FUNC_3(VAR_4, VAR_2->rs_bound_port)) {
  FUNC_1(VAR_4, VAR_2->rs_bound_port);
  FUNC_2(VAR_4);
 }
}

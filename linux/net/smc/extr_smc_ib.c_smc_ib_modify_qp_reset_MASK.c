
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int roce_qp; } ;
struct ib_qp_attr {int qp_state; } ;
typedef int qp_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int ) ;
 int FUNC_1 (struct ib_qp_attr*,int ,int) ;

int FUNC_2(struct smc_link *VAR_2)
{
 struct ib_qp_attr VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.qp_state = VAR_0;
 return FUNC_0(VAR_2->roce_qp, &VAR_3, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int roce_qp; int psn_initial; } ;
struct ib_qp_attr {int max_rd_atomic; int sq_psn; int rnr_retry; int retry_cnt; int timeout; int qp_state; } ;
typedef int qp_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int) ;
 int FUNC_1 (struct ib_qp_attr*,int ,int) ;

int FUNC_2(struct smc_link *VAR_10)
{
 struct ib_qp_attr VAR_11;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.qp_state = VAR_0;
 VAR_11.timeout = VAR_9;
 VAR_11.retry_cnt = VAR_7;
 VAR_11.rnr_retry = VAR_8;
 VAR_11.sq_psn = VAR_10->psn_initial;
 VAR_11.max_rd_atomic = 1;


 return FUNC_0(VAR_10->roce_qp, &VAR_11,
       VAR_5 | VAR_6 | VAR_2 |
       VAR_4 | VAR_3 |
       VAR_1);
}

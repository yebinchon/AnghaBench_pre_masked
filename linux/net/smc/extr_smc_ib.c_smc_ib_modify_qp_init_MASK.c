
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int roce_qp; int ibport; } ;
struct ib_qp_attr {int qp_access_flags; int port_num; scalar_t__ pkey_index; int qp_state; } ;
typedef int qp_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int) ;
 int FUNC_1 (struct ib_qp_attr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smc_link *VAR_7)
{
 struct ib_qp_attr VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.qp_state = VAR_2;
 VAR_8.pkey_index = 0;
 VAR_8.port_num = VAR_7->ibport;
 VAR_8.qp_access_flags = VAR_0
    | VAR_1;
 return FUNC_0(VAR_7->roce_qp, &VAR_8,
       VAR_6 | VAR_4 |
       VAR_3 | VAR_5);
}

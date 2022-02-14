
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_3(void)
{
 FUNC_0("SVCRDMA Module Init, register RPC RDMA transport\n");
 FUNC_0("\tsvcrdma_ord      : %d\n", VAR_4);
 FUNC_0("\tmax_requests     : %u\n", VAR_3);
 FUNC_0("\tmax_bc_requests  : %u\n", VAR_1);
 FUNC_0("\tmax_inline       : %d\n", VAR_2);

 if (!VAR_6)
  VAR_6 =
   FUNC_1(VAR_5);


 FUNC_2(&VAR_0);
 return 0;
}

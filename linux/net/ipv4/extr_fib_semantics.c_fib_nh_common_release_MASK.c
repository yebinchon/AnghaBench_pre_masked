
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_nh_common {int nhc_rth_input; int nhc_pcpu_rth_output; int nhc_lwtstate; scalar_t__ nhc_dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fib_nh_common*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct fib_nh_common *VAR_0)
{
 if (VAR_0->nhc_dev)
  FUNC_0(VAR_0->nhc_dev);

 FUNC_2(VAR_0->nhc_lwtstate);
 FUNC_4(VAR_0->nhc_pcpu_rth_output);
 FUNC_3(&VAR_0->nhc_rth_input);
 FUNC_1(VAR_0);
}

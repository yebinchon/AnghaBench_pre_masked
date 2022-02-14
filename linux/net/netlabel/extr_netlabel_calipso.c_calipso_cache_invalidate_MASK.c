
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_calipso_ops {int (* cache_invalidate ) () ;} ;


 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 const struct netlbl_calipso_ops *VAR_0 = FUNC_0();

 if (VAR_0)
  VAR_0->cache_invalidate();
}

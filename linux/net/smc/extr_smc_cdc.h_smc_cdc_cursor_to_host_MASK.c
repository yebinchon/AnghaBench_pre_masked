
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union smc_host_cursor {scalar_t__ count; scalar_t__ wrap; } ;
union smc_cdc_cursor {int wrap; int count; } ;
struct smc_connection {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (union smc_host_cursor*,union smc_host_cursor*,struct smc_connection*) ;
 int FUNC_3 (union smc_cdc_cursor*,union smc_cdc_cursor*,struct smc_connection*) ;

__attribute__((used)) static inline void FUNC_4(union smc_host_cursor *VAR_0,
       union smc_cdc_cursor *VAR_1,
       struct smc_connection *VAR_2)
{
 union smc_host_cursor VAR_3, VAR_4;
 union smc_cdc_cursor VAR_5;

 FUNC_2(&VAR_4, VAR_0, VAR_2);
 FUNC_3(&VAR_5, VAR_1, VAR_2);
 VAR_3.count = FUNC_0(VAR_5.count);
 VAR_3.wrap = FUNC_1(VAR_5.wrap);
 if ((VAR_4.wrap > VAR_3.wrap) && VAR_3.wrap)
  return;
 if ((VAR_4.wrap == VAR_3.wrap) &&
     (VAR_4.count > VAR_3.count))
  return;
 FUNC_2(VAR_0, &VAR_3, VAR_2);
}

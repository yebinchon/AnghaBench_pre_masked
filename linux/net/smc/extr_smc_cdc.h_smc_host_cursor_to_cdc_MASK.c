
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union smc_host_cursor {int wrap; int count; } ;
union smc_cdc_cursor {int wrap; int count; } ;
struct smc_connection {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union smc_host_cursor*,union smc_host_cursor*,struct smc_connection*) ;

__attribute__((used)) static inline void FUNC_3(union smc_cdc_cursor *VAR_0,
       union smc_host_cursor *VAR_1,
       union smc_host_cursor *VAR_2,
       struct smc_connection *VAR_3)
{
 FUNC_2(VAR_2, VAR_1, VAR_3);
 VAR_0->count = FUNC_0(VAR_2->count);
 VAR_0->wrap = FUNC_1(VAR_2->wrap);

}

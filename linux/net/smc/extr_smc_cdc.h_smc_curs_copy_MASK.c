
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union smc_host_cursor {int acurs; } ;
struct smc_connection {int acurs_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(union smc_host_cursor *VAR_0,
     union smc_host_cursor *VAR_1,
     struct smc_connection *VAR_2)
{

 unsigned long VAR_3;

 FUNC_2(&VAR_2->acurs_lock, VAR_3);
 VAR_0->acurs = VAR_1->acurs;
 FUNC_3(&VAR_2->acurs_lock, VAR_3);



}

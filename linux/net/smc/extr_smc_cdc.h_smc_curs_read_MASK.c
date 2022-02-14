
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union smc_host_cursor {int acurs; } ;
typedef int u64 ;
struct smc_connection {int acurs_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline u64 FUNC_3(union smc_host_cursor *VAR_0,
    struct smc_connection *VAR_1)
{

 unsigned long VAR_2;
 u64 VAR_3;

 FUNC_1(&VAR_1->acurs_lock, VAR_2);
 VAR_3 = VAR_0->acurs;
 FUNC_2(&VAR_1->acurs_lock, VAR_2);
 return VAR_3;



}

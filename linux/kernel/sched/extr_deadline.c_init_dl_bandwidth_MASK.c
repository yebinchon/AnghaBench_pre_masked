
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct dl_bandwidth {void* dl_runtime; void* dl_period; int dl_runtime_lock; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dl_bandwidth *VAR_0, u64 VAR_1, u64 VAR_2)
{
 FUNC_0(&VAR_0->dl_runtime_lock);
 VAR_0->dl_period = VAR_1;
 VAR_0->dl_runtime = VAR_2;
}

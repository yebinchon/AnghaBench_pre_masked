
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct func_hook {scalar_t__ type; int hooked; scalar_t__ func_addr; scalar_t__ hook_addr; void* call_addr; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct func_hook *VAR_2, uint8_t *VAR_3)
{
 if (VAR_2->type != VAR_0)
  return;

 VAR_2->call_addr = (void *)(VAR_2->func_addr + *((int32_t *)&VAR_3[1]));
 VAR_2->type = VAR_1;
 VAR_2->hooked = 1;

 *((uint32_t *)&VAR_3[1]) = (uint32_t)(VAR_2->hook_addr - VAR_2->func_addr);
}

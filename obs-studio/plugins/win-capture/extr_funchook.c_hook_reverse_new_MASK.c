
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct func_hook {int hooked; scalar_t__ func_addr; scalar_t__ hook_addr; int type; void* call_addr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct func_hook *VAR_2, uint8_t *VAR_3)
{
 VAR_2->call_addr = (void *)(VAR_2->func_addr + 2);
 VAR_2->type = VAR_0;
 VAR_2->hooked = 1;

 VAR_3[0] = 0xE9;
 *((uint32_t *)&VAR_3[1]) = (uint32_t)(VAR_2->hook_addr - VAR_2->func_addr);
 *((uint16_t *)&VAR_3[5]) = VAR_1;
}

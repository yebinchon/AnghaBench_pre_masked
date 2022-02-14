
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct func_hook {int hooked; int type; scalar_t__ func_addr; void* call_addr; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct func_hook *VAR_1,
       intptr_t VAR_2)
{
 uint8_t *VAR_3 = (uint8_t *)VAR_1->func_addr;

 VAR_1->call_addr = (void *)VAR_1->func_addr;
 VAR_1->type = VAR_0;
 VAR_1->hooked = 1;

 *(VAR_3++) = 0xE9;
 *((int32_t *)VAR_3) = (int32_t)VAR_2;
}

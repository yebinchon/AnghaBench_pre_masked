
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct func_hook {scalar_t__ type; int hooked; scalar_t__ func_addr; void* call_addr; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct func_hook *VAR_3, uint8_t *VAR_4,
          intptr_t VAR_5)
{
 int32_t VAR_6 = *(int32_t *)&VAR_4[6];

 if (VAR_3->type != VAR_1)
  return;

 VAR_3->call_addr = (void *)(VAR_3->func_addr + VAR_2 + VAR_6);
 VAR_3->type = VAR_0;
 VAR_3->hooked = 1;

 *((int32_t *)&VAR_4[6]) = (int32_t)VAR_5;
}

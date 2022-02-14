
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_hook {int hooked; scalar_t__ type; uintptr_t func_addr; void* rehook_data; void* unhook_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;
 size_t FUNC_2 (struct func_hook*) ;

void FUNC_3(struct func_hook *VAR_3)
{
 uintptr_t VAR_4;
 size_t VAR_5;

 if (!VAR_3->hooked)
  return;

 if (VAR_3->type == VAR_1) {
  VAR_5 = VAR_2;
  VAR_4 = (VAR_3->func_addr - VAR_2);
 } else {
  VAR_5 = FUNC_2(VAR_3);
  VAR_4 = VAR_3->func_addr;
 }

 FUNC_0((void *)VAR_4, VAR_5);
 FUNC_1(VAR_3->rehook_data, (void *)VAR_4, VAR_5);

 if (VAR_3->type == VAR_0)
  FUNC_1((void *)VAR_3->func_addr, VAR_3->unhook_data, VAR_5);

 VAR_3->hooked = 0;
}

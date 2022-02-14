
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_hook {uintptr_t func_addr; uintptr_t hook_addr; char const* name; int unhook_data; } ;


 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (int ,void*,scalar_t__) ;
 int FUNC_2 (struct func_hook*,int ,int) ;

void FUNC_3(struct func_hook *VAR_2, void *VAR_3, void *VAR_4,
        const char *VAR_5)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->func_addr = (uintptr_t)VAR_3;
 VAR_2->hook_addr = (uintptr_t)VAR_4;
 VAR_2->name = VAR_5;

 FUNC_0((void *)(VAR_2->func_addr - VAR_0),
   VAR_1 + VAR_0);

 FUNC_1(VAR_2->unhook_data, VAR_3, VAR_1);
}

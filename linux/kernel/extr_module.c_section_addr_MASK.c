
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct load_info {TYPE_1__* sechdrs; } ;
struct TYPE_2__ {scalar_t__ sh_addr; } ;


 size_t FUNC_0 (struct load_info const*,char const*) ;

__attribute__((used)) static void *FUNC_1(const struct load_info *VAR_0, const char *VAR_1)
{

 return (void *)VAR_0->sechdrs[FUNC_0(VAR_0, VAR_1)].sh_addr;
}

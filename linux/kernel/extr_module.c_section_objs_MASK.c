
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct load_info {TYPE_1__* sechdrs; } ;
struct TYPE_2__ {size_t sh_size; scalar_t__ sh_addr; } ;


 unsigned int FUNC_0 (struct load_info const*,char const*) ;

__attribute__((used)) static void *FUNC_1(const struct load_info *VAR_0,
     const char *VAR_1,
     size_t VAR_2,
     unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0, VAR_1);


 *VAR_3 = VAR_0->sechdrs[VAR_4].sh_size / VAR_2;
 return (void *)VAR_0->sechdrs[VAR_4].sh_addr;
}

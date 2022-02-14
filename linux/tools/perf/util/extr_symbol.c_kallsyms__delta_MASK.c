
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kmap {TYPE_1__* ref_reloc_sym; } ;
struct TYPE_2__ {scalar_t__ addr; int name; } ;


 scalar_t__ FUNC_0 (char const*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct kmap *VAR_0, const char *VAR_1, u64 *VAR_2)
{
 u64 VAR_3;

 if (!VAR_0->ref_reloc_sym || !VAR_0->ref_reloc_sym->name)
  return 0;

 if (FUNC_0(VAR_1, VAR_0->ref_reloc_sym->name, &VAR_3))
  return -1;

 *VAR_2 = VAR_3 - VAR_0->ref_reloc_sym->addr;
 return 0;
}

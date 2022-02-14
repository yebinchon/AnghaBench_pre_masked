
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct map {int dummy; } ;
struct kmap {TYPE_1__* ref_reloc_sym; } ;
struct TYPE_2__ {scalar_t__ addr; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__,scalar_t__*) ;
 struct kmap* FUNC_1 (struct map*) ;
 int FUNC_2 (char const*,struct map*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2,
        struct map *VAR_3)
{
 struct kmap *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_4)
  return -VAR_0;

 if (VAR_4->ref_reloc_sym && VAR_4->ref_reloc_sym->name) {
  u64 VAR_5;

  if (FUNC_0(VAR_2,
       VAR_4->ref_reloc_sym->name, &VAR_5))
   return -VAR_1;
  if (VAR_5 != VAR_4->ref_reloc_sym->addr)
   return -VAR_0;
 }

 return FUNC_2(VAR_2, VAR_3);
}

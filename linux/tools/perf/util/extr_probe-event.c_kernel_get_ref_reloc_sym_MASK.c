
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_reloc_sym {int dummy; } ;
struct map {int dummy; } ;
struct kmap {struct ref_reloc_sym* ref_reloc_sym; } ;


 int VAR_0 ;
 struct map* FUNC_0 (int ) ;
 struct kmap* FUNC_1 (struct map*) ;
 scalar_t__ FUNC_2 (struct map*) ;

__attribute__((used)) static struct ref_reloc_sym *FUNC_3(void)
{

 struct kmap *VAR_1;
 struct map *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_2) < 0)
  return ((void*)0);

 VAR_1 = FUNC_1(VAR_2);
 if (!VAR_1)
  return ((void*)0);
 return VAR_1->ref_reloc_sym;
}

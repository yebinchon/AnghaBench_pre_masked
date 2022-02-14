
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {scalar_t__ name_off; int info; scalar_t__ size; } ;


 int FUNC_0 (struct btf_type*,struct btf_type*) ;
 int FUNC_1 (struct btf_type*) ;

__attribute__((used)) static bool FUNC_2(struct btf_type *VAR_0, struct btf_type *VAR_1)
{
 if (!FUNC_1(VAR_0) && !FUNC_1(VAR_1))
  return FUNC_0(VAR_0, VAR_1);

 return VAR_0->name_off == VAR_1->name_off &&
        (VAR_0->info & ~0xffff) == (VAR_1->info & ~0xffff) &&
        VAR_0->size == VAR_1->size;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {scalar_t__ name_off; scalar_t__ info; scalar_t__ size; } ;



__attribute__((used)) static bool FUNC_0(struct btf_type *VAR_0, struct btf_type *VAR_1)
{
 return VAR_0->name_off == VAR_1->name_off &&
        VAR_0->info == VAR_1->info &&
        VAR_0->size == VAR_1->size;
}

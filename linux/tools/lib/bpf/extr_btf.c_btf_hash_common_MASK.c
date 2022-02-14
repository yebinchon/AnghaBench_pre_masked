
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int size; int info; int name_off; } ;


 long FUNC_0 (long,int ) ;

__attribute__((used)) static long FUNC_1(struct btf_type *VAR_0)
{
 long VAR_1;

 VAR_1 = FUNC_0(0, VAR_0->name_off);
 VAR_1 = FUNC_0(VAR_1, VAR_0->info);
 VAR_1 = FUNC_0(VAR_1, VAR_0->size);
 return VAR_1;
}

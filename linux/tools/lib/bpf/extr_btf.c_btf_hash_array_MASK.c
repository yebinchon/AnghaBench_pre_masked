
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_array {int nelems; int index_type; int type; } ;


 struct btf_array* FUNC_0 (struct btf_type*) ;
 long FUNC_1 (struct btf_type*) ;
 long FUNC_2 (long,int ) ;

__attribute__((used)) static long FUNC_3(struct btf_type *VAR_0)
{
 const struct btf_array *VAR_1 = FUNC_0(VAR_0);
 long VAR_2 = FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_2, VAR_1->type);
 VAR_2 = FUNC_2(VAR_2, VAR_1->index_type);
 VAR_2 = FUNC_2(VAR_2, VAR_1->nelems);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_array {scalar_t__ type; scalar_t__ index_type; scalar_t__ nelems; } ;


 struct btf_array* FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_type*,struct btf_type*) ;

__attribute__((used)) static bool FUNC_2(struct btf_type *VAR_0, struct btf_type *VAR_1)
{
 const struct btf_array *VAR_2, *VAR_3;

 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 return VAR_2->type == VAR_3->type &&
        VAR_2->index_type == VAR_3->index_type &&
        VAR_2->nelems == VAR_3->nelems;
}

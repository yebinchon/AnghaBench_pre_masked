
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf {size_t nr_types; struct btf_type** types; } ;
struct bpf_object {int dummy; } ;
typedef size_t __u32 ;


 int FUNC_0 (struct bpf_object*,struct btf*,struct btf_type*) ;
 scalar_t__ FUNC_1 (struct btf_type*) ;

int FUNC_2(struct bpf_object *VAR_0, struct btf *VAR_1)
{
 int VAR_2 = 0;
 __u32 VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_1->nr_types; VAR_3++) {
  struct btf_type *VAR_4 = VAR_1->types[VAR_3];






  if (FUNC_1(VAR_4)) {
   VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_4);
   if (VAR_2)
    break;
  }
 }

 return VAR_2;
}

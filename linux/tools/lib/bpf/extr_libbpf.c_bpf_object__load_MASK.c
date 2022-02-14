
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object_load_attr {struct bpf_object* obj; } ;
struct bpf_object {int dummy; } ;


 int FUNC_0 (struct bpf_object_load_attr*) ;

int FUNC_1(struct bpf_object *VAR_0)
{
 struct bpf_object_load_attr VAR_1 = {
  .obj = VAR_0,
 };

 return FUNC_0(&VAR_1);
}

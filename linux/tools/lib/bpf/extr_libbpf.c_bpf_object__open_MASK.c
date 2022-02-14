
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object_open_attr {char const* file; int prog_type; } ;
struct bpf_object {int dummy; } ;


 int VAR_0 ;
 struct bpf_object* FUNC_0 (struct bpf_object_open_attr*) ;

struct bpf_object *FUNC_1(const char *VAR_1)
{
 struct bpf_object_open_attr VAR_2 = {
  .file = VAR_1,
  .prog_type = VAR_0,
 };

 return FUNC_0(&VAR_2);
}

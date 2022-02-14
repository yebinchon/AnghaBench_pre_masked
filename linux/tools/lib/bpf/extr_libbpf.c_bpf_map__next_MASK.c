
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {struct bpf_map* maps; } ;
struct bpf_map {int dummy; } ;


 struct bpf_map* FUNC_0 (struct bpf_map const*,struct bpf_object const*,int) ;

struct bpf_map *
FUNC_1(const struct bpf_map *VAR_0, const struct bpf_object *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return VAR_1->maps;

 return FUNC_0(VAR_0, VAR_1, 1);
}

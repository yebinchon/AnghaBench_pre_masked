
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int * bpf_obj; } ;
struct bpf_map {int dummy; } ;


 struct bpf_map* FUNC_0 (int *,char const*) ;

__attribute__((used)) static struct bpf_map *FUNC_1(struct trace *VAR_0, const char *VAR_1)
{
 if (VAR_0->bpf_obj == ((void*)0))
  return ((void*)0);

 return FUNC_0(VAR_0->bpf_obj, VAR_1);
}

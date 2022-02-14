
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int dummy; } ;
struct bpf_object {struct btf* btf; } ;



struct btf *FUNC_0(const struct bpf_object *VAR_0)
{
 return VAR_0 ? VAR_0->btf : ((void*)0);
}

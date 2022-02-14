
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {scalar_t__ btf; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(const struct bpf_object *VAR_0)
{
 return VAR_0->btf ? FUNC_0(VAR_0->btf) : -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int btf_value_type_id; } ;
typedef int __u32 ;



__u32 FUNC_0(const struct bpf_map *VAR_0)
{
 return VAR_0 ? VAR_0->btf_value_type_id : 0;
}

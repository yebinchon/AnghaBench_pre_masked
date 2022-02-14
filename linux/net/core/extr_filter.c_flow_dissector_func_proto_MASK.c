
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;
struct bpf_func_proto {int dummy; } ;
typedef enum bpf_func_id { ____Placeholder_bpf_func_id } bpf_func_id ;



 struct bpf_func_proto const* FUNC_0 (int) ;
 struct bpf_func_proto const VAR_0 ;

__attribute__((used)) static const struct bpf_func_proto *
FUNC_1(enum bpf_func_id VAR_1, const struct bpf_prog *VAR_2)
{
 switch (VAR_1) {
 case 128:
  return &VAR_0;
 default:
  return FUNC_0(VAR_1);
 }
}

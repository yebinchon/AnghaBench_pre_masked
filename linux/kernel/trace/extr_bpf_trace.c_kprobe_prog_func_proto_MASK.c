
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;
struct bpf_func_proto {int dummy; } ;
typedef enum bpf_func_id { ____Placeholder_bpf_func_id } bpf_func_id ;







 struct bpf_func_proto const VAR_0 ;
 struct bpf_func_proto const VAR_1 ;
 struct bpf_func_proto const VAR_2 ;
 struct bpf_func_proto const VAR_3 ;
 struct bpf_func_proto const VAR_4 ;
 struct bpf_func_proto const* FUNC_0 (int,struct bpf_prog const*) ;

__attribute__((used)) static const struct bpf_func_proto *
FUNC_1(enum bpf_func_id VAR_5, const struct bpf_prog *VAR_6)
{
 switch (VAR_5) {
 case 129:
  return &VAR_3;
 case 131:
  return &VAR_1;
 case 132:
  return &VAR_0;
 case 128:
  return &VAR_4;




 default:
  return FUNC_0(VAR_5, VAR_6);
 }
}

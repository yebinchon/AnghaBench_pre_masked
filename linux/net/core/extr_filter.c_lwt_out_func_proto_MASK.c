
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;
struct bpf_func_proto {int dummy; } ;
typedef enum bpf_func_id { ____Placeholder_bpf_func_id } bpf_func_id ;
 struct bpf_func_proto const* FUNC_0 (int) ;
 struct bpf_func_proto const VAR_0 ;
 struct bpf_func_proto const VAR_1 ;
 struct bpf_func_proto const VAR_2 ;
 struct bpf_func_proto const VAR_3 ;
 struct bpf_func_proto const VAR_4 ;
 struct bpf_func_proto const VAR_5 ;
 struct bpf_func_proto const VAR_6 ;
 struct bpf_func_proto const VAR_7 ;
 struct bpf_func_proto const VAR_8 ;

__attribute__((used)) static const struct bpf_func_proto *
FUNC_1(enum bpf_func_id VAR_9, const struct bpf_prog *VAR_10)
{
 switch (VAR_9) {
 case 130:
  return &VAR_6;
 case 129:
  return &VAR_7;
 case 136:
  return &VAR_0;
 case 135:
  return &VAR_1;
 case 133:
  return &VAR_3;
 case 134:
  return &VAR_2;
 case 131:
  return &VAR_5;
 case 132:
  return &VAR_4;
 case 128:
  return &VAR_8;
 default:
  return FUNC_0(VAR_9);
 }
}

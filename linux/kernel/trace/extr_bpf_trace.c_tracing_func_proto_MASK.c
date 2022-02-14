
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
 struct bpf_func_proto const VAR_5 ;
 struct bpf_func_proto const VAR_6 ;
 struct bpf_func_proto const VAR_7 ;
 struct bpf_func_proto const* FUNC_0 () ;
 struct bpf_func_proto const VAR_8 ;
 struct bpf_func_proto const* FUNC_1 () ;
 struct bpf_func_proto const VAR_9 ;
 struct bpf_func_proto const VAR_10 ;
 struct bpf_func_proto const VAR_11 ;
 struct bpf_func_proto const VAR_12 ;
 struct bpf_func_proto const VAR_13 ;
 struct bpf_func_proto const VAR_14 ;
 struct bpf_func_proto const VAR_15 ;
 struct bpf_func_proto const VAR_16 ;
 struct bpf_func_proto const VAR_17 ;
 struct bpf_func_proto const VAR_18 ;
 struct bpf_func_proto const VAR_19 ;
 struct bpf_func_proto const VAR_20 ;

__attribute__((used)) static const struct bpf_func_proto *
FUNC_2(enum bpf_func_id VAR_21, const struct bpf_prog *VAR_22)
{
 switch (VAR_21) {
 case 139:
  return &VAR_11;
 case 135:
  return &VAR_15;
 case 140:
  return &VAR_10;
 case 136:
  return &VAR_14;
 case 137:
  return &VAR_13;
 case 138:
  return &VAR_12;
 case 133:
  return &VAR_17;
 case 141:
  return &VAR_9;
 case 129:
  return &VAR_20;
 case 147:
  return &VAR_3;
 case 146:
  return &VAR_4;
 case 145:
  return &VAR_5;
 case 148:
  return &VAR_2;
 case 128:
  return FUNC_1();
 case 142:
  return &VAR_8;
 case 144:
  return &VAR_6;
 case 134:
  return &VAR_16;
 case 131:
  return FUNC_0();
 case 150:
  return &VAR_0;
 case 143:
  return &VAR_7;
 case 132:
  return &VAR_18;




 case 130:
  return &VAR_19;
 default:
  return ((void*)0);
 }
}

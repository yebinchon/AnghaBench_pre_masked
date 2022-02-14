
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_func_proto {int dummy; } ;
typedef enum bpf_func_id { ____Placeholder_bpf_func_id } bpf_func_id ;
 int VAR_0 ;
 struct bpf_func_proto const VAR_1 ;
 struct bpf_func_proto const VAR_2 ;
 struct bpf_func_proto const VAR_3 ;
 struct bpf_func_proto const* FUNC_0 () ;
 struct bpf_func_proto const VAR_4 ;
 struct bpf_func_proto const VAR_5 ;
 struct bpf_func_proto const VAR_6 ;
 struct bpf_func_proto const VAR_7 ;
 struct bpf_func_proto const VAR_8 ;
 struct bpf_func_proto const VAR_9 ;
 struct bpf_func_proto const VAR_10 ;
 struct bpf_func_proto const VAR_11 ;
 struct bpf_func_proto const VAR_12 ;
 struct bpf_func_proto const VAR_13 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const struct bpf_func_proto *
FUNC_2(enum bpf_func_id VAR_14)
{
 switch (VAR_14) {
 case 136:
  return &VAR_6;
 case 132:
  return &VAR_10;
 case 137:
  return &VAR_5;
 case 133:
  return &VAR_9;
 case 134:
  return &VAR_8;
 case 135:
  return &VAR_7;
 case 140:
  return &VAR_2;
 case 139:
  return &VAR_3;
 case 141:
  return &VAR_1;
 case 129:
  return &VAR_13;
 case 138:
  return &VAR_4;
 default:
  break;
 }

 if (!FUNC_1(VAR_0))
  return ((void*)0);

 switch (VAR_14) {
 case 131:
  return &VAR_11;
 case 130:
  return &VAR_12;
 case 128:
  return FUNC_0();
 default:
  return ((void*)0);
 }
}

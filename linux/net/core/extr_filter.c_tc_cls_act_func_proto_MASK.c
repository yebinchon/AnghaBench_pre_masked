
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
 struct bpf_func_proto const* FUNC_1 (int) ;
 struct bpf_func_proto const VAR_7 ;
 struct bpf_func_proto const VAR_8 ;
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
 struct bpf_func_proto const VAR_21 ;
 struct bpf_func_proto const VAR_22 ;
 struct bpf_func_proto const VAR_23 ;
 struct bpf_func_proto const VAR_24 ;
 struct bpf_func_proto const VAR_25 ;
 struct bpf_func_proto const VAR_26 ;
 struct bpf_func_proto const VAR_27 ;
 struct bpf_func_proto const VAR_28 ;
 struct bpf_func_proto const VAR_29 ;
 struct bpf_func_proto const VAR_30 ;
 struct bpf_func_proto const VAR_31 ;
 struct bpf_func_proto const VAR_32 ;
 struct bpf_func_proto const VAR_33 ;
 struct bpf_func_proto const VAR_34 ;
 struct bpf_func_proto const VAR_35 ;
 struct bpf_func_proto const VAR_36 ;
 struct bpf_func_proto const VAR_37 ;
 struct bpf_func_proto const VAR_38 ;
 struct bpf_func_proto const VAR_39 ;
 struct bpf_func_proto const VAR_40 ;
 struct bpf_func_proto const VAR_41 ;
 struct bpf_func_proto const VAR_42 ;
 struct bpf_func_proto const VAR_43 ;

__attribute__((used)) static const struct bpf_func_proto *
FUNC_2(enum bpf_func_id VAR_44, const struct bpf_prog *VAR_45)
{
 switch (VAR_44) {
 case 135:
  return &VAR_36;
 case 140:
  return &VAR_33;
 case 139:
  return &VAR_34;
 case 138:
  return &VAR_35;
 case 172:
  return &VAR_1;
 case 171:
  return &VAR_2;
 case 162:
  return &VAR_10;
 case 161:
  return &VAR_11;
 case 173:
  return &VAR_0;
 case 169:
  return &VAR_3;
 case 132:
  return &VAR_39;
 case 133:
  return &VAR_38;
 case 147:
  return &VAR_24;
 case 145:
  return &VAR_26;
 case 150:
  return &VAR_21;
 case 146:
  return &VAR_25;
 case 143:
  return &VAR_30;
 case 137:
  return FUNC_1(VAR_44);
 case 142:
  return &VAR_31;
 case 136:
  return FUNC_1(VAR_44);
 case 159:
  return &VAR_12;
 case 166:
  return &VAR_6;
 case 168:
  return &VAR_4;
 case 157:
  return &VAR_13;
 case 158:
  return &VAR_14;
 case 160:
  return &VAR_28;
 case 165:
  return &VAR_7;
 case 134:
  return &VAR_37;
 case 164:
  return &VAR_8;
 case 163:
  return &VAR_9;
 case 170:
  return &VAR_29;
 case 156:
  return &VAR_15;
 case 151:
  return &VAR_20;
 case 152:
  return &VAR_19;
 default:
  return FUNC_0(VAR_44);
 }
}

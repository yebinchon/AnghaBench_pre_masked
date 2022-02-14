
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_var_secinfo {int dummy; } ;
struct btf_var {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf_param {int dummy; } ;
struct btf_member {int dummy; } ;
struct btf_enum {int dummy; } ;
struct btf_array {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;
 int VAR_0 ;
 int FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_type*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct btf_type *VAR_1)
{
 int VAR_2 = sizeof(struct btf_type);
 __u16 VAR_3 = FUNC_1(VAR_1);

 switch (FUNC_0(VAR_1)) {
 case 136:
 case 141:
 case 128:
 case 133:
 case 134:
 case 131:
 case 138:
  return VAR_2;
 case 135:
  return VAR_2 + sizeof(__u32);
 case 139:
  return VAR_2 + VAR_3 * sizeof(struct btf_enum);
 case 142:
  return VAR_2 + sizeof(struct btf_array);
 case 132:
 case 130:
  return VAR_2 + VAR_3 * sizeof(struct btf_member);
 case 137:
  return VAR_2 + VAR_3 * sizeof(struct btf_param);
 case 129:
  return VAR_2 + sizeof(struct btf_var);
 case 140:
  return VAR_2 + VAR_3 * sizeof(struct btf_var_secinfo);
 default:
  FUNC_2("Unsupported BTF_KIND:%u\n", FUNC_0(VAR_1));
  return -VAR_0;
 }
}

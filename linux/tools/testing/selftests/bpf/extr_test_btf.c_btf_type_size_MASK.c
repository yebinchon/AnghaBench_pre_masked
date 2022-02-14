
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_var_secinfo {int dummy; } ;
struct btf_var {int dummy; } ;
struct btf_type {int info; } ;
struct btf_param {int dummy; } ;
struct btf_member {int dummy; } ;
struct btf_enum {int dummy; } ;
struct btf_array {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const struct btf_type *VAR_2)
{
 int VAR_3 = sizeof(struct btf_type);
 __u16 VAR_4 = FUNC_1(VAR_2->info);
 __u16 VAR_5 = FUNC_0(VAR_2->info);

 switch (VAR_5) {
 case 136:
 case 141:
 case 128:
 case 133:
 case 134:
 case 131:
 case 138:
  return VAR_3;
 case 135:
  return VAR_3 + sizeof(__u32);
 case 139:
  return VAR_3 + VAR_4 * sizeof(struct btf_enum);
 case 142:
  return VAR_3 + sizeof(struct btf_array);
 case 132:
 case 130:
  return VAR_3 + VAR_4 * sizeof(struct btf_member);
 case 137:
  return VAR_3 + VAR_4 * sizeof(struct btf_param);
 case 129:
  return VAR_3 + sizeof(struct btf_var);
 case 140:
  return VAR_3 + VAR_4 * sizeof(struct btf_var_secinfo);
 default:
  FUNC_2(VAR_1, "Unsupported BTF_KIND:%u\n", VAR_5);
  return -VAR_0;
 }
}

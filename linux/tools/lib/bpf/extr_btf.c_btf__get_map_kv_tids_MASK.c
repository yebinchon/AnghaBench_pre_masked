
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_member {scalar_t__ type; } ;
struct btf {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __s64 ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (struct btf const*,char*) ;
 scalar_t__ FUNC_1 (struct btf const*,scalar_t__) ;
 struct btf_type* FUNC_2 (struct btf const*,int) ;
 int FUNC_3 (struct btf_type const*) ;
 struct btf_member* FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (char*,char const*,char*) ;
 int FUNC_7 (char*,char const*,...) ;
 size_t const FUNC_8 (char*,size_t const,char*,char const*) ;

int FUNC_9(const struct btf *VAR_1, const char *VAR_2,
    __u32 VAR_3, __u32 VAR_4,
    __u32 *VAR_5, __u32 *VAR_6)
{
 const struct btf_type *VAR_7;
 const struct btf_member *VAR_8, *VAR_9;
 const size_t VAR_10 = 256;
 char VAR_11[VAR_10];
 __s64 VAR_12, VAR_13;
 __s32 VAR_14;

 if (FUNC_8(VAR_11, VAR_10, "____btf_map_%s", VAR_2) ==
     VAR_10) {
  FUNC_7("map:%s length of '____btf_map_%s' is too long\n",
      VAR_2, VAR_2);
  return -VAR_0;
 }

 VAR_14 = FUNC_0(VAR_1, VAR_11);
 if (VAR_14 < 0) {
  FUNC_6("map:%s container_name:%s cannot be found in BTF. Missing BPF_ANNOTATE_KV_PAIR?\n",
    VAR_2, VAR_11);
  return VAR_14;
 }

 VAR_7 = FUNC_2(VAR_1, VAR_14);
 if (!VAR_7) {
  FUNC_7("map:%s cannot find BTF type for container_id:%u\n",
      VAR_2, VAR_14);
  return -VAR_0;
 }

 if (!FUNC_3(VAR_7) || FUNC_5(VAR_7) < 2) {
  FUNC_7("map:%s container_name:%s is an invalid container struct\n",
      VAR_2, VAR_11);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_7);
 VAR_9 = VAR_8 + 1;

 VAR_12 = FUNC_1(VAR_1, VAR_8->type);
 if (VAR_12 < 0) {
  FUNC_7("map:%s invalid BTF key_type_size\n", VAR_2);
  return VAR_12;
 }

 if (VAR_3 != VAR_12) {
  FUNC_7("map:%s btf_key_type_size:%u != map_def_key_size:%u\n",
      VAR_2, (__u32)VAR_12, VAR_3);
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_1, VAR_9->type);
 if (VAR_13 < 0) {
  FUNC_7("map:%s invalid BTF value_type_size\n", VAR_2);
  return VAR_13;
 }

 if (VAR_4 != VAR_13) {
  FUNC_7("map:%s btf_value_type_size:%u != map_def_value_size:%u\n",
      VAR_2, (__u32)VAR_13, VAR_4);
  return -VAR_0;
 }

 *VAR_5 = VAR_8->type;
 *VAR_6 = VAR_9->type;

 return 0;
}

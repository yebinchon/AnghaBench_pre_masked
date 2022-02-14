
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_var_secinfo {scalar_t__ offset; int type; } ;
struct btf_var {scalar_t__ linkage; } ;
struct btf_type {scalar_t__ size; int name_off; } ;
struct btf {int dummy; } ;
struct bpf_object {int dummy; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_object*,char const*,scalar_t__*) ;
 int FUNC_1 (struct bpf_object*,char const*,scalar_t__*) ;
 char* FUNC_2 (struct btf*,int ) ;
 struct btf_type* FUNC_3 (struct btf*,int ) ;
 int FUNC_4 (struct btf_type const*) ;
 struct btf_var* FUNC_5 (struct btf_type const*) ;
 struct btf_var_secinfo* FUNC_6 (struct btf_type*) ;
 scalar_t__ FUNC_7 (struct btf_type*) ;
 int VAR_3 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct btf_type*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_10(struct bpf_object *VAR_4, struct btf *VAR_5,
        struct btf_type *VAR_6)
{
 __u32 VAR_7 = 0, VAR_8 = 0, VAR_9, VAR_10 = FUNC_7(VAR_6);
 const char *VAR_11 = FUNC_2(VAR_5, VAR_6->name_off);
 const struct btf_type *VAR_12;
 struct btf_var_secinfo *VAR_13;
 const struct btf_var *VAR_14;
 int VAR_15;

 if (!VAR_11) {
  FUNC_8("No name found in string section for DATASEC kind.\n");
  return -VAR_2;
 }

 VAR_15 = FUNC_0(VAR_4, VAR_11, &VAR_7);
 if (VAR_15 || !VAR_7 || (VAR_6->size && VAR_6->size != VAR_7)) {
  FUNC_8("Invalid size for section %s: %u bytes\n", VAR_11, VAR_7);
  return -VAR_2;
 }

 VAR_6->size = VAR_7;

 for (VAR_9 = 0, VAR_13 = FUNC_6(VAR_6); VAR_9 < VAR_10; VAR_9++, VAR_13++) {
  VAR_12 = FUNC_3(VAR_5, VAR_13->type);
  VAR_14 = FUNC_5(VAR_12);

  if (!FUNC_4(VAR_12)) {
   FUNC_8("Non-VAR type seen in section %s\n", VAR_11);
   return -VAR_1;
  }

  if (VAR_14->linkage == VAR_0)
   continue;

  VAR_11 = FUNC_2(VAR_5, VAR_12->name_off);
  if (!VAR_11) {
   FUNC_8("No name found in string section for VAR kind\n");
   return -VAR_2;
  }

  VAR_15 = FUNC_1(VAR_4, VAR_11, &VAR_8);
  if (VAR_15) {
   FUNC_8("No offset found in symbol table for VAR %s\n",
     VAR_11);
   return -VAR_2;
  }

  VAR_13->offset = VAR_8;
 }

 FUNC_9(VAR_6 + 1, VAR_10, sizeof(*VAR_13), VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int type; } ;
struct btf_member {int name_off; int type; } ;
struct btf_array {int nelems; } ;
struct btf {int dummy; } ;
typedef int __u32 ;


 char* FUNC_0 (struct btf const*,int ) ;
 struct btf_type* FUNC_1 (struct btf const*,int ) ;
 struct btf_array* FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (char*,char const*,char const*,int ) ;
 struct btf_type* FUNC_7 (struct btf const*,int ,int *) ;

__attribute__((used)) static bool FUNC_8(const char *VAR_0, const struct btf *VAR_1,
         const struct btf_type *VAR_2,
         const struct btf_member *VAR_3, __u32 *VAR_4) {
 const struct btf_type *VAR_5 = FUNC_7(VAR_1, VAR_3->type, ((void*)0));
 const char *VAR_6 = FUNC_0(VAR_1, VAR_3->name_off);
 const struct btf_array *VAR_7;
 const struct btf_type *VAR_8;

 if (!FUNC_4(VAR_5)) {
  FUNC_6("map '%s': attr '%s': expected PTR, got %u.\n",
      VAR_0, VAR_6, FUNC_5(VAR_5));
  return 0;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_5->type);
 if (!VAR_8) {
  FUNC_6("map '%s': attr '%s': type [%u] not found.\n",
      VAR_0, VAR_6, VAR_5->type);
  return 0;
 }
 if (!FUNC_3(VAR_8)) {
  FUNC_6("map '%s': attr '%s': expected ARRAY, got %u.\n",
      VAR_0, VAR_6, FUNC_5(VAR_8));
  return 0;
 }
 VAR_7 = FUNC_2(VAR_8);
 *VAR_4 = VAR_7->nelems;
 return 1;
}

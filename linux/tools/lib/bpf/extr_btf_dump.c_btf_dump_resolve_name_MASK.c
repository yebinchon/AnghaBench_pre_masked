
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int dummy; } ;
struct btf_type {scalar_t__ name_off; } ;
struct btf_dump_type_aux_state {int name_resolved; } ;
struct btf_dump {char** cached_names; int btf; struct btf_dump_type_aux_state* type_states; } ;
typedef size_t __u32 ;


 struct btf_type* FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (struct btf_dump*,struct hashmap*,char const*) ;
 char* FUNC_2 (struct btf_dump*,scalar_t__) ;
 int FUNC_3 (char*,size_t const,char*,char const*,size_t) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(struct btf_dump *VAR_0, __u32 VAR_1,
      struct hashmap *VAR_2)
{
 struct btf_dump_type_aux_state *VAR_3 = &VAR_0->type_states[VAR_1];
 const struct btf_type *VAR_4 = FUNC_0(VAR_0->btf, VAR_1);
 const char *VAR_5 = FUNC_2(VAR_0, VAR_4->name_off);
 const char **VAR_6 = &VAR_0->cached_names[VAR_1];
 size_t VAR_7;

 if (VAR_4->name_off == 0)
  return "";

 if (VAR_3->name_resolved)
  return *VAR_6 ? *VAR_6 : VAR_5;

 VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_5);
 if (VAR_7 > 1) {
  const size_t VAR_8 = 256;
  char VAR_9[VAR_8];

  FUNC_3(VAR_9, VAR_8, "%s___%zu", VAR_5, VAR_7);
  *VAR_6 = FUNC_4(VAR_9);
 }

 VAR_3->name_resolved = 1;
 return *VAR_6 ? *VAR_6 : VAR_5;
}

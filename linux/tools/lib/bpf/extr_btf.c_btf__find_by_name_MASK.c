
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int name_off; } ;
struct btf {size_t nr_types; struct btf_type** types; } ;
typedef size_t __u32 ;
typedef size_t __s32 ;


 size_t VAR_0 ;
 char* FUNC_0 (struct btf const*,int ) ;
 int FUNC_1 (char const*,char const*) ;

__s32 FUNC_2(const struct btf *VAR_1, const char *VAR_2)
{
 __u32 VAR_3;

 if (!FUNC_1(VAR_2, "void"))
  return 0;

 for (VAR_3 = 1; VAR_3 <= VAR_1->nr_types; VAR_3++) {
  const struct btf_type *VAR_4 = VAR_1->types[VAR_3];
  const char *VAR_5 = FUNC_0(VAR_1, VAR_4->name_off);

  if (VAR_5 && !FUNC_1(VAR_2, VAR_5))
   return VAR_3;
 }

 return -VAR_0;
}

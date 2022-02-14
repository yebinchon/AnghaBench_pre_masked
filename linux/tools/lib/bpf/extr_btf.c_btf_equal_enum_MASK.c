
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_enum {scalar_t__ name_off; scalar_t__ val; } ;
typedef int __u16 ;


 struct btf_enum* FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_type*,struct btf_type*) ;
 int FUNC_2 (struct btf_type*) ;

__attribute__((used)) static bool FUNC_3(struct btf_type *VAR_0, struct btf_type *VAR_1)
{
 const struct btf_enum *VAR_2, *VAR_3;
 __u16 VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

 VAR_4 = FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2->name_off != VAR_3->name_off || VAR_2->val != VAR_3->val)
   return 0;
  VAR_2++;
  VAR_3++;
 }
 return 1;
}

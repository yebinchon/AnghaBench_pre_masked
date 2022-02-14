
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {scalar_t__ name_off; scalar_t__ info; } ;
struct btf_param {scalar_t__ name_off; } ;
typedef int __u16 ;


 struct btf_param* FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_type*) ;

__attribute__((used)) static bool FUNC_2(struct btf_type *VAR_0, struct btf_type *VAR_1)
{
 const struct btf_param *VAR_2, *VAR_3;
 __u16 VAR_4;
 int VAR_5;


 if (VAR_0->name_off != VAR_1->name_off || VAR_0->info != VAR_1->info)
  return 0;

 VAR_4 = FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2->name_off != VAR_3->name_off)
   return 0;
  VAR_2++;
  VAR_3++;
 }
 return 1;
}

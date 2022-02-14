
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_var_secinfo {int offset; int type; } ;
struct btf_type {int name_off; int info; } ;
struct btf_dumper {int jw; int btf; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 struct btf_type* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct btf_dumper const*,int ,int ,void const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(const struct btf_dumper *VAR_1, __u32 VAR_2,
         const void *VAR_3)
{
 struct btf_var_secinfo *VAR_4;
 const struct btf_type *VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8;

 VAR_5 = FUNC_2(VAR_1->btf, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5->info);
 VAR_4 = (struct btf_var_secinfo *)(VAR_5 + 1);

 FUNC_8(VAR_1->jw);
 FUNC_6(VAR_1->jw, FUNC_1(VAR_1->btf, VAR_5->name_off));
 FUNC_7(VAR_1->jw);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_3(VAR_1, VAR_4[VAR_7].type, 0, VAR_3 + VAR_4[VAR_7].offset);
  if (VAR_6)
   break;
 }
 FUNC_4(VAR_1->jw);
 FUNC_5(VAR_1->jw);

 return VAR_6;
}

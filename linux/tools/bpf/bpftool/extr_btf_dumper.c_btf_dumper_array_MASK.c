
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_dumper {int jw; int btf; } ;
struct btf_array {long long nelems; int type; } ;
typedef long long __u32 ;


 long long FUNC_0 (int ,int ) ;
 struct btf_type* FUNC_1 (int ,long long) ;
 int FUNC_2 (struct btf_dumper const*,int ,int ,void const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct btf_dumper *VAR_0, __u32 VAR_1,
       const void *VAR_2)
{
 const struct btf_type *VAR_3 = FUNC_1(VAR_0->btf, VAR_1);
 struct btf_array *VAR_4 = (struct btf_array *)(VAR_3 + 1);
 long long VAR_5;
 int VAR_6 = 0;
 __u32 VAR_7;

 VAR_5 = FUNC_0(VAR_0->btf, VAR_4->type);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(VAR_0->jw);
 for (VAR_7 = 0; VAR_7 < VAR_4->nelems; VAR_7++) {
  VAR_6 = FUNC_2(VAR_0, VAR_4->type, 0,
      VAR_2 + VAR_7 * VAR_5);
  if (VAR_6)
   break;
 }

 FUNC_3(VAR_0->jw);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int type; int name_off; } ;
struct btf_dumper {int jw; int btf; } ;
typedef int __u8 ;
typedef int __u32 ;


 int FUNC_0 (int ,int ) ;
 struct btf_type* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct btf_dumper const*,int ,int ,void const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct btf_dumper *VAR_0, __u32 VAR_1,
     __u8 VAR_2, const void *VAR_3)
{
 const struct btf_type *VAR_4 = FUNC_1(VAR_0->btf, VAR_1);
 int VAR_5;

 FUNC_5(VAR_0->jw);
 FUNC_4(VAR_0->jw, FUNC_0(VAR_0->btf, VAR_4->name_off));
 VAR_5 = FUNC_2(VAR_0, VAR_4->type, VAR_2, VAR_3);
 FUNC_3(VAR_0->jw);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int info; } ;
struct btf_dumper {int jw; int is_plain_text; int btf; } ;
typedef int __u8 ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct btf_type* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct btf_dumper const*,int ,void const*) ;
 int FUNC_3 (struct btf_dumper const*,int ,void const*) ;
 int FUNC_4 (void const*,int ) ;
 int FUNC_5 (struct btf_type const*,int ,void const*,int ,int ) ;
 int FUNC_6 (struct btf_dumper const*,int ,int ,void const*) ;
 int FUNC_7 (void const*,int ,int ) ;
 int FUNC_8 (struct btf_dumper const*,int ,void const*) ;
 int FUNC_9 (struct btf_dumper const*,int ,int ,void const*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(const struct btf_dumper *VAR_1, __u32 VAR_2,
         __u8 VAR_3, const void *VAR_4)
{
 const struct btf_type *VAR_5 = FUNC_1(VAR_1->btf, VAR_2);

 switch (FUNC_0(VAR_5->info)) {
 case 136:
  return FUNC_5(VAR_5, VAR_3, VAR_4, VAR_1->jw,
         VAR_1->is_plain_text);
 case 133:
 case 131:
  return FUNC_8(VAR_1, VAR_2, VAR_4);
 case 141:
  return FUNC_2(VAR_1, VAR_2, VAR_4);
 case 138:
  FUNC_4(VAR_4, VAR_1->jw);
  return 0;
 case 135:
  FUNC_7(VAR_4, VAR_1->jw, VAR_1->is_plain_text);
  return 0;
 case 130:
  FUNC_10(VAR_1->jw, "(unknown)");
  return 0;
 case 137:

  FUNC_10(VAR_1->jw, "(fwd-kind-invalid)");
  return -VAR_0;
 case 132:
 case 128:
 case 140:
 case 134:
  return FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
 case 129:
  return FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4);
 case 139:
  return FUNC_3(VAR_1, VAR_2, VAR_4);
 default:
  FUNC_10(VAR_1->jw, "(unsupported-kind");
  return -VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int info; } ;
struct btf_member {int type; int name_off; scalar_t__ offset; } ;
struct btf_dumper {int jw; int is_plain_text; int btf; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ) ;
 struct btf_type* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,void const*,int ,int ) ;
 int FUNC_9 (struct btf_dumper const*,int ,int ,void const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(const struct btf_dumper *VAR_1, __u32 VAR_2,
        const void *VAR_3)
{
 const struct btf_type *VAR_4;
 struct btf_member *VAR_5;
 const void *VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_4 = FUNC_7(VAR_1->btf, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4->info);
 VAR_10 = FUNC_3(VAR_4->info);
 FUNC_12(VAR_1->jw);
 VAR_5 = (struct btf_member *)(VAR_4 + 1);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  __u32 VAR_11 = VAR_5[VAR_9].offset;
  __u32 VAR_12 = 0;

  if (VAR_7) {
   VAR_12 = FUNC_4(VAR_11);
   VAR_11 = FUNC_5(VAR_11);
  }

  FUNC_11(VAR_1->jw, FUNC_6(VAR_1->btf, VAR_5[VAR_9].name_off));
  VAR_6 = VAR_3 + FUNC_1(VAR_11);
  if (VAR_12) {
   FUNC_8(VAR_12,
         FUNC_0(VAR_11),
         VAR_6, VAR_1->jw, VAR_1->is_plain_text);
  } else {
   VAR_8 = FUNC_9(VAR_1, VAR_5[VAR_9].type,
       FUNC_0(VAR_11),
       VAR_6);
   if (VAR_8)
    break;
  }
 }

 FUNC_10(VAR_1->jw);

 return VAR_8;
}

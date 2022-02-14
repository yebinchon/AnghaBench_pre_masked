
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {scalar_t__ name_off; } ;
struct btf_member {int type; int name_off; } ;
struct btf_dump {int btf; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct btf_dump*,int,int,int,int,int) ;
 int FUNC_3 (struct btf_dump*,int ,char const*,int) ;
 int FUNC_4 (struct btf_dump*,char*,...) ;
 int FUNC_5 (struct btf_dump*,int ) ;
 int FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (int ,int ,struct btf_type const*) ;
 int FUNC_8 (struct btf_type const*,int) ;
 int FUNC_9 (struct btf_type const*,int) ;
 struct btf_member* FUNC_10 (struct btf_type const*) ;
 char* FUNC_11 (struct btf_dump*,int ) ;
 int FUNC_12 (struct btf_type const*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct btf_dump *VAR_0,
         __u32 VAR_1,
         const struct btf_type *VAR_2,
         int VAR_3)
{
 const struct btf_member *VAR_4 = FUNC_10(VAR_2);
 bool VAR_5 = FUNC_6(VAR_2);
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 __u16 VAR_10 = FUNC_12(VAR_2);

 VAR_8 = VAR_5 ? FUNC_7(VAR_0->btf, VAR_1, VAR_2) : 0;
 VAR_6 = VAR_8 ? 1 : FUNC_1(VAR_0->btf, VAR_1);

 FUNC_4(VAR_0, "%s%s%s {",
   VAR_5 ? "struct" : "union",
   VAR_2->name_off ? " " : "",
   FUNC_5(VAR_0, VAR_1));

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++, VAR_4++) {
  const char *VAR_11;
  int VAR_12, VAR_13;

  VAR_11 = FUNC_11(VAR_0, VAR_4->name_off);
  VAR_13 = FUNC_9(VAR_2, VAR_7);
  VAR_12 = FUNC_8(VAR_2, VAR_7);
  VAR_6 = VAR_8 ? 1 : FUNC_1(VAR_0->btf, VAR_4->type);

  FUNC_2(VAR_0, VAR_9, VAR_12, VAR_13, VAR_6, VAR_3 + 1);
  FUNC_4(VAR_0, "\n%s", FUNC_14(VAR_3 + 1));
  FUNC_3(VAR_0, VAR_4->type, VAR_11, VAR_3 + 1);

  if (VAR_13) {
   FUNC_4(VAR_0, ": %d", VAR_13);
   VAR_9 = VAR_12 + VAR_13;
  } else {
   VAR_13 = FUNC_13(0, FUNC_0(VAR_0->btf, VAR_4->type));
   VAR_9 = VAR_12 + VAR_13 * 8;
  }
  FUNC_4(VAR_0, ";");
 }

 if (VAR_10)
  FUNC_4(VAR_0, "\n");
 FUNC_4(VAR_0, "%s}", FUNC_14(VAR_3));
 if (VAR_8)
  FUNC_4(VAR_0, " __attribute__((packed))");
}

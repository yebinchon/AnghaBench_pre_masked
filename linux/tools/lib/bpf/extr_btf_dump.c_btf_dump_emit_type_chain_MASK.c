
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_stack {int cnt; scalar_t__* ids; } ;
struct btf_type {int name_off; } ;
struct btf_param {int type; int name_off; } ;
struct btf_dump {int btf; } ;
struct btf_array {int nelems; } ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;
 struct btf_type* FUNC_0 (int ,scalar_t__) ;
 struct btf_array* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_dump*,scalar_t__,struct btf_type const*,int) ;
 int FUNC_3 (struct btf_dump*,scalar_t__,struct btf_type const*) ;
 int FUNC_4 (struct btf_dump*,scalar_t__,struct btf_type const*) ;
 int FUNC_5 (struct btf_dump*,struct id_stack*) ;
 int FUNC_6 (struct btf_dump*,char const*,int) ;
 int FUNC_7 (struct btf_dump*,scalar_t__,struct btf_type const*,int) ;
 int FUNC_8 (struct btf_dump*,scalar_t__,struct btf_type const*) ;
 int FUNC_9 (struct btf_dump*,int ,char const*,int) ;
 int FUNC_10 (struct btf_dump*,scalar_t__) ;
 int FUNC_11 (struct btf_dump*,char*,...) ;
 int FUNC_12 (struct btf_type const*) ;
 int FUNC_13 (struct btf_type const*) ;
 int FUNC_14 (struct btf_type const*) ;
 char* FUNC_15 (struct btf_dump*,int ) ;
 struct btf_param* FUNC_16 (struct btf_type const*) ;
 int FUNC_17 (struct btf_type const*) ;
 int FUNC_18 (char*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct btf_dump *VAR_0,
         struct id_stack *VAR_1,
         const char *VAR_2, int VAR_3)
{
 bool VAR_4 = 1;
 const struct btf_type *VAR_5;
 const char *VAR_6;
 __u16 VAR_7;
 __u32 VAR_8;

 while (VAR_1->cnt) {
  VAR_8 = VAR_1->ids[--VAR_1->cnt];
  if (VAR_8 == 0) {

   FUNC_5(VAR_0, VAR_1);
   FUNC_11(VAR_0, "void");
   VAR_4 = 0;
   continue;
  }

  VAR_5 = FUNC_0(VAR_0->btf, VAR_8);
  VAR_7 = FUNC_14(VAR_5);

  switch (VAR_7) {
  case 134:
   FUNC_5(VAR_0, VAR_1);
   VAR_6 = FUNC_15(VAR_0, VAR_5->name_off);
   FUNC_11(VAR_0, "%s", VAR_6);
   break;
  case 131:
  case 129:
   FUNC_5(VAR_0, VAR_1);

   if (VAR_5->name_off == 0)
    FUNC_7(VAR_0, VAR_8, VAR_5, VAR_3);
   else
    FUNC_8(VAR_0, VAR_8, VAR_5);
   break;
  case 137:
   FUNC_5(VAR_0, VAR_1);

   if (VAR_5->name_off == 0)
    FUNC_2(VAR_0, VAR_8, VAR_5, VAR_3);
   else
    FUNC_3(VAR_0, VAR_8, VAR_5);
   break;
  case 135:
   FUNC_5(VAR_0, VAR_1);
   FUNC_4(VAR_0, VAR_8, VAR_5);
   break;
  case 130:
   FUNC_5(VAR_0, VAR_1);
   FUNC_11(VAR_0, "%s", FUNC_10(VAR_0, VAR_8));
   break;
  case 133:
   FUNC_11(VAR_0, "%s", VAR_4 ? "*" : " *");
   break;
  case 128:
   FUNC_11(VAR_0, " volatile");
   break;
  case 138:
   FUNC_11(VAR_0, " const");
   break;
  case 132:
   FUNC_11(VAR_0, " restrict");
   break;
  case 139: {
   const struct btf_array *VAR_9 = FUNC_1(VAR_5);
   const struct btf_type *VAR_10;
   __u32 VAR_11;
   bool VAR_12;
   while (VAR_1->cnt) {
    VAR_11 = VAR_1->ids[VAR_1->cnt - 1];
    VAR_10 = FUNC_0(VAR_0->btf, VAR_11);
    if (FUNC_13(VAR_10))
     VAR_1->cnt--;
    else
     break;
   }

   if (VAR_1->cnt == 0) {
    FUNC_6(VAR_0, VAR_2, VAR_4);
    FUNC_11(VAR_0, "[%u]", VAR_9->nelems);
    return;
   }

   VAR_11 = VAR_1->ids[VAR_1->cnt - 1];
   VAR_10 = FUNC_0(VAR_0->btf, VAR_11);
   VAR_12 = FUNC_12(VAR_10);

   if (VAR_2[0] && !VAR_4)
    FUNC_11(VAR_0, " ");

   if (!VAR_12)
    FUNC_11(VAR_0, "(");
   FUNC_19(VAR_0, VAR_1, VAR_2, VAR_3);
   if (!VAR_12)
    FUNC_11(VAR_0, ")");
   FUNC_11(VAR_0, "[%u]", VAR_9->nelems);
   return;
  }
  case 136: {
   const struct btf_param *VAR_13 = FUNC_16(VAR_5);
   __u16 VAR_14 = FUNC_17(VAR_5);
   int VAR_15;

   FUNC_5(VAR_0, VAR_1);
   if (VAR_1->cnt) {
    FUNC_11(VAR_0, " (");
    FUNC_19(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_11(VAR_0, ")");
   } else {
    FUNC_6(VAR_0, VAR_2, VAR_4);
   }
   FUNC_11(VAR_0, "(");






   if (VAR_14 == 1 && VAR_13->type == 0) {
    FUNC_11(VAR_0, ")");
    return;
   }

   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++, VAR_13++) {
    if (VAR_15 > 0)
     FUNC_11(VAR_0, ", ");


    if (VAR_15 == VAR_14 - 1 && VAR_13->type == 0) {
     FUNC_11(VAR_0, "...");
     break;
    }

    VAR_6 = FUNC_15(VAR_0, VAR_13->name_off);
    FUNC_9(VAR_0, VAR_13->type, VAR_6, VAR_3);
   }

   FUNC_11(VAR_0, ")");
   return;
  }
  default:
   FUNC_18("unexpected type in decl chain, kind:%u, id:[%u]\n",
       VAR_7, VAR_8);
   return;
  }

  VAR_4 = VAR_7 == 133;
 }

 FUNC_6(VAR_0, VAR_2, VAR_4);
}

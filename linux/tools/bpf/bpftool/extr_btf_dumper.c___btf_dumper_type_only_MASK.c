
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_var {int linkage; } ;
struct btf_type {int name_off; int type; int info; } ;
struct btf_array {int nelems; int type; } ;
struct btf {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct btf const*,int ) ;
 struct btf_type* FUNC_5 (struct btf const*,int ) ;
 int FUNC_6 (struct btf const*,char*,struct btf_type const*,struct btf_type const*,int,int) ;

__attribute__((used)) static int FUNC_7(const struct btf *VAR_1, __u32 VAR_2,
      char *VAR_3, int VAR_4, int VAR_5)
{
 const struct btf_type *VAR_6;
 const struct btf_array *VAR_7;
 const struct btf_var *VAR_8;
 const struct btf_type *VAR_9;

 if (!VAR_2) {
  FUNC_2("void ");
  return VAR_4;
 }

 VAR_9 = FUNC_5(VAR_1, VAR_2);

 switch (FUNC_1(VAR_9->info)) {
 case 136:
 case 132:
  FUNC_2("%s ", FUNC_4(VAR_1, VAR_9->name_off));
  break;
 case 133:
  FUNC_2("struct %s ",
         FUNC_4(VAR_1, VAR_9->name_off));
  break;
 case 131:
  FUNC_2("union %s ",
         FUNC_4(VAR_1, VAR_9->name_off));
  break;
 case 140:
  FUNC_2("enum %s ",
         FUNC_4(VAR_1, VAR_9->name_off));
  break;
 case 143:
  VAR_7 = (struct btf_array *)(VAR_9 + 1);
  FUNC_3(VAR_7->type);
  FUNC_2("[%d]", VAR_7->nelems);
  break;
 case 135:
  FUNC_3(VAR_9->type);
  FUNC_2("* ");
  break;
 case 137:
  FUNC_2("%s %s ",
         FUNC_0(VAR_9->info) ? "union" : "struct",
         FUNC_4(VAR_1, VAR_9->name_off));
  break;
 case 128:
  FUNC_2("volatile ");
  FUNC_3(VAR_9->type);
  break;
 case 142:
  FUNC_2("const ");
  FUNC_3(VAR_9->type);
  break;
 case 134:
  FUNC_2("restrict ");
  FUNC_3(VAR_9->type);
  break;
 case 138:
  VAR_4 = FUNC_6(VAR_1, VAR_3, VAR_9, ((void*)0), VAR_4, VAR_5);
  if (VAR_4 == -1)
   return -1;
  break;
 case 139:
  VAR_6 = FUNC_5(VAR_1, VAR_9->type);
  VAR_4 = FUNC_6(VAR_1, VAR_3, VAR_6, VAR_9, VAR_4, VAR_5);
  if (VAR_4 == -1)
   return -1;
  break;
 case 129:
  VAR_8 = (struct btf_var *)(VAR_9 + 1);
  if (VAR_8->linkage == VAR_0)
   FUNC_2("static ");
  FUNC_3(VAR_9->type);
  FUNC_2(" %s",
         FUNC_4(VAR_1, VAR_9->name_off));
  break;
 case 141:
  FUNC_2("section (\"%s\") ",
         FUNC_4(VAR_1, VAR_9->name_off));
  break;
 case 130:
 default:
  return -1;
 }

 return VAR_4;
}

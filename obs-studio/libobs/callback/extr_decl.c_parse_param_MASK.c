
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int dummy; } ;
struct decl_param {scalar_t__ flags; int name; int type; int member_0; } ;
struct decl_info {int params; } ;
struct cf_parser {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cf_parser*,char*) ;
 int FUNC_1 (struct cf_parser*,char*,char*) ;
 int FUNC_2 (struct cf_parser*,int *,char*,char*) ;
 int FUNC_3 (struct cf_parser*,struct strref*,int ,char*) ;
 int FUNC_4 (int ,struct decl_param*) ;
 int FUNC_5 (struct cf_parser*,int ) ;
 int FUNC_6 (struct cf_parser*,int ) ;
 int FUNC_7 (struct strref*,int *,int) ;
 scalar_t__ FUNC_8 (struct cf_parser*,struct strref*,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct decl_info*,int ) ;

__attribute__((used)) static int FUNC_11(struct cf_parser *VAR_4, struct decl_info *VAR_5)
{
 struct strref VAR_6;
 int VAR_7;
 struct decl_param VAR_8 = {0};


 VAR_7 = FUNC_3(VAR_4, &VAR_6, VAR_3, ",");
 if (VAR_7 != VAR_2)
  return VAR_7;

 while (FUNC_8(VAR_4, &VAR_6, &VAR_8.flags)) {
  VAR_7 = FUNC_3(VAR_4, &VAR_6, VAR_3, ",");
  if (VAR_7 != VAR_2)
   return VAR_7;
 }


 if (VAR_8.flags == 0)
  VAR_8.flags = VAR_0;

 if (!FUNC_7(&VAR_6, &VAR_8.type, 0)) {
  FUNC_0(VAR_4, "type");
  FUNC_1(VAR_4, ",", ")");
  return VAR_1;
 }


 VAR_7 = FUNC_2(VAR_4, &VAR_8.name, "parameter name", ",");
 if (VAR_7 != VAR_2)
  return VAR_7;

 if (FUNC_10(VAR_5, VAR_8.name))
  FUNC_5(VAR_4, VAR_8.name);

 if (FUNC_9(VAR_8.name))
  FUNC_6(VAR_4, VAR_8.name);

 FUNC_4(VAR_5->params, &VAR_8);
 return VAR_2;
}

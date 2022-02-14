
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int type; char* help; int flags; int short_name; char* long_name; char* argh; char* build_opt; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(const struct option *VAR_8, int VAR_9)
{
 size_t VAR_10;
 int VAR_11;

 if (VAR_8->type == 137) {
  FUNC_1('\n', VAR_7);
  if (*VAR_8->help)
   FUNC_0(VAR_7, "%s\n", VAR_8->help);
  return;
 }
 if (!VAR_9 && (VAR_8->flags & VAR_1))
  return;
 if (VAR_8->flags & VAR_0)
  return;

 VAR_10 = FUNC_0(VAR_7, "    ");
 if (VAR_8->short_name)
  VAR_10 += FUNC_0(VAR_7, "-%c", VAR_8->short_name);
 else
  VAR_10 += FUNC_0(VAR_7, "    ");

 if (VAR_8->long_name && VAR_8->short_name)
  VAR_10 += FUNC_0(VAR_7, ", ");
 if (VAR_8->long_name)
  VAR_10 += FUNC_0(VAR_7, "--%s", VAR_8->long_name);

 switch (VAR_8->type) {
 case 142:
  break;
 case 134:
 case 128:
 case 130:
 case 135:
 case 129:
  if (VAR_8->flags & VAR_4)
   if (VAR_8->long_name)
    VAR_10 += FUNC_0(VAR_7, "[=<n>]");
   else
    VAR_10 += FUNC_0(VAR_7, "[<n>]");
  else
   VAR_10 += FUNC_0(VAR_7, " <n>");
  break;
 case 139:
  if (VAR_8->flags & VAR_2)
   break;

 case 131:
  if (VAR_8->argh) {
   if (VAR_8->flags & VAR_4)
    if (VAR_8->long_name)
     VAR_10 += FUNC_0(VAR_7, "[=<%s>]", VAR_8->argh);
    else
     VAR_10 += FUNC_0(VAR_7, "[<%s>]", VAR_8->argh);
   else
    VAR_10 += FUNC_0(VAR_7, " <%s>", VAR_8->argh);
  } else {
   if (VAR_8->flags & VAR_4)
    if (VAR_8->long_name)
     VAR_10 += FUNC_0(VAR_7, "[=...]");
    else
     VAR_10 += FUNC_0(VAR_7, "[...]");
   else
    VAR_10 += FUNC_0(VAR_7, " ...");
  }
  break;
 default:
 case 138:
 case 137:
 case 141:
 case 140:
 case 136:
 case 132:
 case 133:
  break;
 }

 if (VAR_10 <= VAR_6)
  VAR_11 = VAR_6 - VAR_10;
 else {
  FUNC_1('\n', VAR_7);
  VAR_11 = VAR_6;
 }
 FUNC_0(VAR_7, "%*s%s\n", VAR_11 + VAR_5, "", VAR_8->help);
 if (VAR_8->flags & VAR_3)
  FUNC_0(VAR_7, "%*s(not built-in because %s)\n",
   VAR_6 + VAR_5, "",
   VAR_8->build_opt);
}

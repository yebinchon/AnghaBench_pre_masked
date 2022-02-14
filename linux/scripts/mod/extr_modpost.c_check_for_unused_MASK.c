
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum export { ____Placeholder_export } export ;




 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(enum export VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_0(VAR_1) ?"":".ko";

 switch (VAR_0) {
 case 129:
 case 128:
  FUNC_1("modpost: module %s%s "
        "uses symbol '%s' marked UNUSED\n", VAR_1, VAR_3, VAR_2);
  break;
 default:

  break;
 }
}

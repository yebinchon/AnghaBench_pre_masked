
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char const) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(StringInfo VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 FUNC_1(VAR_0, '"');
 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
 {
  switch (*VAR_2)
  {
   case '\b':
    FUNC_2(VAR_0, "\\b");
    break;
   case '\f':
    FUNC_2(VAR_0, "\\f");
    break;
   case '\n':
    FUNC_2(VAR_0, "\\n");
    break;
   case '\r':
    FUNC_2(VAR_0, "\\r");
    break;
   case '\t':
    FUNC_2(VAR_0, "\\t");
    break;
   case '"':
    FUNC_2(VAR_0, "\\\"");
    break;
   case '\\':
    FUNC_2(VAR_0, "\\\\");
    break;
   default:
    if ((unsigned char) *VAR_2 < ' ')
     FUNC_0(VAR_0, "\\u%04x", (int) *VAR_2);
    else
     FUNC_1(VAR_0, *VAR_2);
    break;
  }
 }
 FUNC_1(VAR_0, '"');
}

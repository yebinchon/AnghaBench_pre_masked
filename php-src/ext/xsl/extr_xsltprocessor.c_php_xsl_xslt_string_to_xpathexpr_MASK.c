
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_1)
{
 const xmlChar *VAR_2 = (const xmlChar *)VAR_1;

 xmlChar *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2) + 3;

 if (FUNC_3(VAR_2, '"')) {
  if (FUNC_3(VAR_2, '\'')) {
   FUNC_0(((void*)0), VAR_0, "Cannot create XPath expression (string contains both quote and double-quotes)");
   return ((void*)0);
  }
  VAR_3 = (xmlChar*) FUNC_1 (VAR_4, sizeof(xmlChar), 0);
  FUNC_2((char*)VAR_3, VAR_4, "'%s'", VAR_2);
 } else {
  VAR_3 = (xmlChar*) FUNC_1 (VAR_4, sizeof(xmlChar), 0);
  FUNC_2((char *)VAR_3, VAR_4, "\"%s\"", VAR_2);
 }
 return (char *) VAR_3;
}

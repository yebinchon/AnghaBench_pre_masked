
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XMLRPC_VALUE_TYPE ;


 int VAR_0 ;
 char** FUNC_0 () ;
 int FUNC_1 (char const*,char const*) ;
 int VAR_1 ;

XMLRPC_VALUE_TYPE FUNC_2(const char* VAR_2)
{
 const char** VAR_3 = FUNC_0();
 int VAR_4;

 if (VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (!FUNC_1(VAR_3[VAR_4], VAR_2)) {
    return (XMLRPC_VALUE_TYPE) VAR_4;
   }
  }
 }
 return VAR_1;
}

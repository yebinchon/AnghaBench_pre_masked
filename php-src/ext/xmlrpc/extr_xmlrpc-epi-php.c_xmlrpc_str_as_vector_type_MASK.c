
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XMLRPC_VECTOR_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 char** FUNC_0 () ;
 int FUNC_1 (char const*,char const*) ;
 int VAR_2 ;

XMLRPC_VECTOR_TYPE FUNC_2(const char* VAR_3)
{
 const char** VAR_4 = FUNC_0();
 int VAR_5;

 if (VAR_3) {
  for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++) {
   if (!FUNC_1(VAR_4[VAR_5], VAR_3)) {
    return (XMLRPC_VECTOR_TYPE) (VAR_5 - VAR_1);
   }
  }
 }
 return VAR_2;
}

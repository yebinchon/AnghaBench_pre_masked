
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XMLRPC_VECTOR_TYPE ;
typedef int * XMLRPC_VALUE ;


 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,char const*,int ) ;

XMLRPC_VALUE FUNC_3(const char* VAR_0, XMLRPC_VECTOR_TYPE VAR_1) {
   XMLRPC_VALUE VAR_2 = ((void*)0);

   VAR_2 = FUNC_0();
   if(VAR_2) {
      if(FUNC_1(VAR_2, VAR_1)) {
         if(VAR_0) {
            const char *VAR_3 = ((void*)0);

            VAR_3 = FUNC_2(VAR_2, VAR_0, 0);
            if(((void*)0) == VAR_3) {
               VAR_2 = ((void*)0);
            }
         }
      }
      else {
         VAR_2 = ((void*)0);
      }
   }
   return VAR_2;
}

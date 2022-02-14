
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * XMLRPC_VALUE ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,char const*,int) ;

XMLRPC_VALUE FUNC_3(const char* VAR_0, const char* VAR_1, int VAR_2) {
   XMLRPC_VALUE VAR_3 = ((void*)0);
   if(VAR_1) {
      VAR_3 = FUNC_0();
      if(VAR_3) {
         FUNC_2(VAR_3, VAR_1, VAR_2);
         if(VAR_0) {
            FUNC_1(VAR_3, VAR_0, 0);
         }
      }
   }
   return VAR_3;
}

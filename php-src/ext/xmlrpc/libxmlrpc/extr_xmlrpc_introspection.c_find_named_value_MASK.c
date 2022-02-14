
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * XMLRPC_VALUE ;


 char* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char const*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static inline XMLRPC_VALUE FUNC_4(XMLRPC_VALUE VAR_1, const char* VAR_2) {
   XMLRPC_VALUE VAR_3 = FUNC_2(VAR_1);
   while(VAR_3) {
      const char* VAR_4 = FUNC_0(VAR_3, VAR_0);
      if(VAR_4 && !FUNC_3(VAR_4, VAR_2)) {
         return VAR_3;
      }
      VAR_3 = FUNC_1(VAR_1);
   }
   return ((void*)0);
}

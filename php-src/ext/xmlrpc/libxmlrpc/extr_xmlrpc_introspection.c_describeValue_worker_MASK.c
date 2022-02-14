
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * XMLRPC_VALUE ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static XMLRPC_VALUE FUNC_4(const char* VAR_6, const char* VAR_7, const char* VAR_8, int VAR_9, const char* VAR_10, XMLRPC_VALUE VAR_11) {
   XMLRPC_VALUE VAR_12 = ((void*)0);
   if(VAR_7 || VAR_8) {
      VAR_12 = FUNC_1(((void*)0), VAR_5);
      FUNC_3(VAR_12, VAR_2, VAR_7, 0);
      FUNC_3(VAR_12, VAR_4, VAR_6, 0);
      FUNC_3(VAR_12, VAR_1, VAR_8, 0);
      if(VAR_9 != 2) {
         FUNC_2(VAR_12, VAR_3, VAR_9);
      }
      if(VAR_9 == 1 && VAR_10) {
         FUNC_3(VAR_12, VAR_0, VAR_10, 0);
      }
      FUNC_0(VAR_12, VAR_11);
   }
   return VAR_12;
}

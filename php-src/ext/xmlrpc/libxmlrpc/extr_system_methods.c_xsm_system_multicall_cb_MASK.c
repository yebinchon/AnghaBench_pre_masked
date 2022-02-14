
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XMLRPC_VALUE ;
typedef int XMLRPC_SERVER ;
typedef scalar_t__ XMLRPC_REQUEST ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,char const*) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,void*) ;
 char* FUNC_9 (scalar_t__,char*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

XMLRPC_VALUE FUNC_13(XMLRPC_SERVER VAR_2, XMLRPC_REQUEST VAR_3, void* VAR_4) {
   XMLRPC_VALUE VAR_5 = FUNC_12(FUNC_3(VAR_3));
   XMLRPC_VALUE VAR_6 = FUNC_1(0, VAR_1);

   if (VAR_5) {
      XMLRPC_VALUE VAR_7 = FUNC_12(VAR_5);

      while (VAR_7) {
         XMLRPC_REQUEST VAR_8 = FUNC_4();
         if(VAR_8) {
            const char* VAR_9 = FUNC_9(VAR_7, "methodName");
            XMLRPC_VALUE VAR_10 = FUNC_10(VAR_7, "params");

            if(VAR_9 && VAR_10) {
               XMLRPC_VALUE VAR_11 = FUNC_1(0, VAR_1);
               FUNC_6(VAR_8, VAR_9);
               FUNC_5(VAR_8, VAR_10);
               FUNC_7(VAR_8, VAR_0);

               FUNC_0(VAR_11,
                                       FUNC_8(VAR_2, VAR_8, VAR_4));

               FUNC_0(VAR_6, VAR_11);
            }
            FUNC_2(VAR_8, 1);
         }
         VAR_7 = FUNC_11(VAR_5);
      }
   }
   return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ desc; } ;
typedef TYPE_1__ server_method ;
typedef scalar_t__ XMLRPC_VALUE ;
typedef TYPE_2__* XMLRPC_SERVER ;
struct TYPE_7__ {scalar_t__ xIntrospection; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_11(XMLRPC_SERVER VAR_2, XMLRPC_VALUE VAR_3) {
   int VAR_4 = 0;
   if(VAR_2 && VAR_3) {
      XMLRPC_VALUE VAR_5 = FUNC_5(VAR_3, "typeList");
      XMLRPC_VALUE VAR_6 = FUNC_5(VAR_3, "methodList");
      XMLRPC_VALUE VAR_7 = FUNC_5(VAR_2->xIntrospection, "typeList");

      if(VAR_6) {
         XMLRPC_VALUE VAR_8 = FUNC_8(VAR_6);

         while(VAR_8) {
            const char* VAR_9 = FUNC_4(VAR_8, VAR_0);
            server_method* VAR_10 = FUNC_9(VAR_2, VAR_9);

            if(VAR_10) {
               if(VAR_10->desc) {
                  FUNC_1(VAR_10->desc);
               }
               VAR_10->desc = FUNC_2(VAR_8);
               VAR_4 = 1;
            }

            VAR_8 = FUNC_6(VAR_6);
         }
      }
      if(VAR_5) {
         if(!VAR_7) {
            if(!VAR_2->xIntrospection) {
               VAR_2->xIntrospection = FUNC_3(((void*)0), VAR_1);
            }

            FUNC_0(VAR_2->xIntrospection, VAR_5);
            VAR_4 = 1;
         }
         else {
            XMLRPC_VALUE VAR_11 = FUNC_8(VAR_5);
            while(VAR_11) {

               XMLRPC_VALUE VAR_12 = FUNC_10(VAR_7, FUNC_4(VAR_11, VAR_0));
               if(VAR_12) {
                  FUNC_7(VAR_7, VAR_12);
               }
               FUNC_0(VAR_7, VAR_11);
               VAR_4 = 1;
               VAR_11 = FUNC_6(VAR_5);
            }
         }
      }
   }
   return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * desc; } ;
typedef TYPE_1__ server_method ;
typedef scalar_t__ q_iter ;
typedef scalar_t__ XMLRPC_VALUE_TYPE ;
typedef int * XMLRPC_VALUE ;
typedef TYPE_2__* XMLRPC_SERVER ;
typedef int XMLRPC_REQUEST ;
struct TYPE_8__ {int methodlist; int xIntrospection; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int ,char*) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,void*) ;
 int FUNC_12 (TYPE_2__*,int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static XMLRPC_VALUE FUNC_13(XMLRPC_SERVER VAR_4, XMLRPC_REQUEST VAR_5, void* VAR_6) {
   XMLRPC_VALUE VAR_7 = FUNC_10(FUNC_7(VAR_5));
   XMLRPC_VALUE VAR_8 = FUNC_4(((void*)0), VAR_3);
   XMLRPC_VALUE VAR_9 = FUNC_4("methodList", VAR_2);
   XMLRPC_VALUE VAR_10 = ((void*)0);
   int VAR_11 = 1;


   FUNC_11(VAR_4, VAR_6);

   VAR_10 = FUNC_8(VAR_4->xIntrospection, "typeList");

   FUNC_3(VAR_8, VAR_10);
   FUNC_3(VAR_8, VAR_9);


   if(VAR_7) {

      XMLRPC_VALUE_TYPE VAR_12 = FUNC_6(VAR_7);
      if(VAR_12 == VAR_0) {

         FUNC_12(VAR_4, VAR_9, FUNC_5(VAR_7));
         VAR_11 = 0;
      }
      else if(VAR_12 == VAR_1) {

         XMLRPC_VALUE VAR_13 = FUNC_10(VAR_7);
         while(VAR_13) {
            FUNC_12(VAR_4, VAR_9, FUNC_5(VAR_13));
            VAR_13 = FUNC_9(VAR_7);
         }
         VAR_11 = 0;
      }
   }


   if(VAR_11) {
      q_iter VAR_14 = FUNC_1(&VAR_4->methodlist);
      while( VAR_14 ) {
         server_method* VAR_15 = FUNC_0(VAR_14);
         if(VAR_15) {
            FUNC_3(VAR_9, VAR_15->desc);
         }
         VAR_14 = FUNC_2(VAR_14);
      }
   }

   return VAR_8;
}

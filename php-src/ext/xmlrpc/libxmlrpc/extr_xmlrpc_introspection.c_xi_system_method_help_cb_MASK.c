
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ desc; } ;
typedef TYPE_1__ server_method ;
typedef int * XMLRPC_VALUE ;
typedef int XMLRPC_SERVER ;
typedef int XMLRPC_REQUEST ;


 int * FUNC_0 (int *,char const*,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;
 TYPE_1__* FUNC_6 (int ,char const*) ;
 char const* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static XMLRPC_VALUE FUNC_7(XMLRPC_SERVER VAR_2, XMLRPC_REQUEST VAR_3, void* VAR_4) {
   const char* VAR_5 = FUNC_1(FUNC_4(FUNC_2(VAR_3)));
   XMLRPC_VALUE VAR_6 = ((void*)0);


   FUNC_5(VAR_2, VAR_4);

   if(VAR_5) {
      server_method* VAR_7 = FUNC_6(VAR_2, VAR_5);
      if(VAR_7 && VAR_7->desc) {
         const char* VAR_8 = FUNC_3(VAR_7->desc, VAR_1);


         VAR_6 = FUNC_0(((void*)0), VAR_8 ? VAR_8 : VAR_0, 0);
      }
   }

   return VAR_6;
}

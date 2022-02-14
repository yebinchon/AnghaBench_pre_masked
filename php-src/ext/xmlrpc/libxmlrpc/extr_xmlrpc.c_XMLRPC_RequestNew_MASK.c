
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_REQUEST ;
struct TYPE_4__ {int methodName; } ;
typedef int STRUCT_XMLRPC_REQUEST ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

XMLRPC_REQUEST FUNC_2() {
   XMLRPC_REQUEST VAR_0 = FUNC_0(1, sizeof(STRUCT_XMLRPC_REQUEST));
   if(VAR_0) {
      FUNC_1(&VAR_0->methodName);
   }
   return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XMLRPC_REQUEST_TYPE ;
typedef TYPE_1__* XMLRPC_REQUEST ;
struct TYPE_3__ {int request_type; } ;


 int VAR_0 ;

XMLRPC_REQUEST_TYPE FUNC_0 (XMLRPC_REQUEST VAR_1,
                  XMLRPC_REQUEST_TYPE VAR_2) {
   if(VAR_1) {
      VAR_1->request_type = VAR_2;
      return VAR_1->request_type;
   }
   return VAR_0;
}

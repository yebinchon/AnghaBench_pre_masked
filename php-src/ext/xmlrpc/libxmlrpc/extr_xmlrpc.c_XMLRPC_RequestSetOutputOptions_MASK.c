
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * XMLRPC_REQUEST_OUTPUT_OPTIONS ;
typedef TYPE_1__* XMLRPC_REQUEST ;
struct TYPE_3__ {int output; } ;
typedef int STRUCT_XMLRPC_REQUEST_OUTPUT_OPTIONS ;


 int FUNC_0 (int *,int *,int) ;

XMLRPC_REQUEST_OUTPUT_OPTIONS FUNC_1(XMLRPC_REQUEST VAR_0, XMLRPC_REQUEST_OUTPUT_OPTIONS VAR_1) {
   if(VAR_0 && VAR_1) {
  FUNC_0 (&VAR_0->output, VAR_1,
      sizeof (STRUCT_XMLRPC_REQUEST_OUTPUT_OPTIONS));
      return &VAR_0->output;
   }
   return ((void*)0);
}

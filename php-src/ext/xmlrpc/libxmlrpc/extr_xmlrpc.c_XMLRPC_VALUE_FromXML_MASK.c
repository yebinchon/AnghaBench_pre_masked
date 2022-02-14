
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * XMLRPC_VALUE ;
typedef int XMLRPC_REQUEST_INPUT_OPTIONS ;
typedef TYPE_1__* XMLRPC_REQUEST ;
struct TYPE_4__ {int * io; } ;


 TYPE_1__* FUNC_0 (char const*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

XMLRPC_VALUE FUNC_2 (const char *VAR_0, int VAR_1, XMLRPC_REQUEST_INPUT_OPTIONS VAR_2) {
   XMLRPC_VALUE VAR_3 = ((void*)0);
   XMLRPC_REQUEST VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

   if(VAR_4) {
      VAR_3 = VAR_4->io;
      FUNC_1(VAR_4, 0);
   }
   return VAR_3;
}

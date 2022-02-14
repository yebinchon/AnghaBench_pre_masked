
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * XMLRPC_VALUE ;
typedef TYPE_1__* XMLRPC_REQUEST ;
struct TYPE_3__ {int * io; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

XMLRPC_VALUE FUNC_2(XMLRPC_REQUEST VAR_0, XMLRPC_VALUE VAR_1) {
   if(VAR_0 && VAR_1) {
  if (VAR_0->io) {
   FUNC_0 (VAR_0->io);
  }
      VAR_0->io = FUNC_1(VAR_1);
      return VAR_0->io;
   }
   return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_REQUEST ;
struct TYPE_4__ {scalar_t__ error; scalar_t__ io; int methodName; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(XMLRPC_REQUEST VAR_0, int VAR_1) {
   if(VAR_0) {
      FUNC_2(&VAR_0->methodName);

      if(VAR_0->io && VAR_1) {
         FUNC_0(VAR_0->io);
      }
      if(VAR_0->error) {
         FUNC_0(VAR_0->error);
      }
      FUNC_1(VAR_0);
   }
}

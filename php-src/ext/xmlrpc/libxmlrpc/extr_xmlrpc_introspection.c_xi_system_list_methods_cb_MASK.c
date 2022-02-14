
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
typedef TYPE_1__ server_method ;
typedef scalar_t__ q_iter ;
typedef int XMLRPC_VALUE ;
typedef TYPE_2__* XMLRPC_SERVER ;
typedef int XMLRPC_REQUEST ;
struct TYPE_6__ {int methodlist; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static XMLRPC_VALUE FUNC_5(XMLRPC_SERVER VAR_1, XMLRPC_REQUEST VAR_2, void* VAR_3) {
   XMLRPC_VALUE VAR_4 = FUNC_3(((void*)0), VAR_0);

   q_iter VAR_5 = FUNC_1(&VAR_1->methodlist);
   while( VAR_5 ) {
      server_method* VAR_6 = FUNC_0(VAR_5);
      if(VAR_6) {
         FUNC_4(VAR_4, 0, VAR_6->name, 0);
      }
      VAR_5 = FUNC_2(VAR_5);
   }
   return VAR_4;
}

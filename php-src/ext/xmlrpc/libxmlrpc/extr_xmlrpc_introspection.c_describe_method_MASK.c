
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int desc; } ;
typedef TYPE_1__ server_method ;
typedef int XMLRPC_VALUE ;
typedef int XMLRPC_SERVER ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,char const*) ;

__attribute__((used)) static inline void FUNC_2(XMLRPC_SERVER VAR_0, XMLRPC_VALUE VAR_1, const char* VAR_2) {
   if(VAR_2) {
      server_method* VAR_3 = FUNC_1(VAR_0, VAR_2);
      if(VAR_3) {
         FUNC_0(VAR_1, VAR_3->desc);
      }
   }
}

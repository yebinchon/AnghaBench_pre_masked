
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XMLRPC_VALUE ;


 scalar_t__ FUNC_0 (int ,char*) ;

int FUNC_1 (XMLRPC_VALUE VAR_0) {
   if( FUNC_0(VAR_0, "faultCode") &&
       FUNC_0(VAR_0, "faultString") ) {
      return 1;
   }
   return 0;
}

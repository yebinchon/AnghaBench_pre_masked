
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_REQUEST ;
struct TYPE_6__ {char const* str; } ;
struct TYPE_5__ {TYPE_2__ methodName; } ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*) ;

const char* FUNC_2(XMLRPC_REQUEST VAR_0, const char* VAR_1) {
   if(VAR_0) {
      FUNC_1(&VAR_0->methodName);
      FUNC_0(&VAR_0->methodName, VAR_1);
      return VAR_0->methodName.str;
   }
   return ((void*)0);
}

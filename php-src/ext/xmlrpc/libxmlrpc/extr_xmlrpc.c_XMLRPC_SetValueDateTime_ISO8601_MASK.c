
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
typedef TYPE_1__* XMLRPC_VALUE ;
struct TYPE_3__ {int str; int i; int type; } ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(XMLRPC_VALUE VAR_1, const char* VAR_2) {
   if(VAR_1) {
      time_t VAR_3 = 0;
      if(VAR_2) {
         VAR_1->type = VAR_0;
         FUNC_0(VAR_2, &VAR_3);
         VAR_1->i = VAR_3;
         FUNC_2(&VAR_1->str);
         FUNC_1(&VAR_1->str, VAR_2);
      }
   }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef int timeBuf ;
typedef TYPE_1__* XMLRPC_VALUE ;
struct TYPE_4__ {int i; int type; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;

void FUNC_2(XMLRPC_VALUE VAR_1, time_t VAR_2) {
   if(VAR_1) {
      char VAR_3[30];
      VAR_1->type = VAR_0;
      VAR_1->i = VAR_2;

      VAR_3[0] = 0;

      FUNC_1(VAR_2, VAR_3, sizeof(VAR_3));

      if(VAR_3[0]) {
         FUNC_0 (VAR_1, VAR_3);
      }
   }
}

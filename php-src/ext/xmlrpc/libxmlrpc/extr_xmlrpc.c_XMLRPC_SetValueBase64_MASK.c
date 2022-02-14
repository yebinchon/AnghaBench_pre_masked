
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_VALUE ;
struct TYPE_3__ {int type; int str; } ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(XMLRPC_VALUE VAR_1, const char* VAR_2, int VAR_3) {
   if(VAR_1 && VAR_2) {
      FUNC_2(&VAR_1->str);
      (VAR_3 > 0) ? FUNC_1(&VAR_1->str, VAR_2, VAR_3) :
                  FUNC_0(&VAR_1->str, VAR_2);
      VAR_1->type = VAR_0;
   }
}

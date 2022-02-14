
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_VALUE ;
struct TYPE_7__ {scalar_t__ str; } ;
struct TYPE_6__ {TYPE_2__ str; int type; } ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*,char const*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

const char *FUNC_3(XMLRPC_VALUE VAR_1, const char* VAR_2, int VAR_3) {
   char *VAR_4 = ((void*)0);
   if(VAR_1 && VAR_2) {
      FUNC_2(&VAR_1->str);
      (VAR_3 > 0) ? FUNC_1(&VAR_1->str, VAR_2, VAR_3) :
                  FUNC_0(&VAR_1->str, VAR_2);
      VAR_1->type = VAR_0;
      VAR_4 = (char *)VAR_1->str.str;
   }

   return VAR_4;
}

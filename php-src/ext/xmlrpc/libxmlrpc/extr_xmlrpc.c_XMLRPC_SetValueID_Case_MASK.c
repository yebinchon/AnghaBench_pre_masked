
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_VALUE ;
typedef scalar_t__ XMLRPC_CASE ;
struct TYPE_7__ {int len; char* str; } ;
struct TYPE_6__ {TYPE_2__ id; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 char FUNC_4 (char) ;
 char FUNC_5 (char) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

const char *FUNC_6(XMLRPC_VALUE VAR_2, const char* VAR_3, int VAR_4, XMLRPC_CASE VAR_5) {
   const char* VAR_6 = ((void*)0);
   if(VAR_2) {
      if(VAR_3) {
         FUNC_3(&VAR_2->id);
         (VAR_4 > 0) ? FUNC_2(&VAR_2->id, VAR_3, VAR_4) :
                     FUNC_1(&VAR_2->id, VAR_3);


         if(VAR_5 == VAR_0 || VAR_5 == VAR_1) {
            int VAR_7;
            for(VAR_7 = 0; VAR_7 < VAR_2->id.len; VAR_7++) {
     VAR_2->id.str[VAR_7] =
     (VAR_5 ==
      VAR_0) ? FUNC_4 (VAR_2->id.
                str[VAR_7]) : FUNC_5 (VAR_2->
                       id.
                       str[VAR_7]);
            }
         }

         VAR_6 = VAR_2->id.str;




      }
   }

   return VAR_6;
}

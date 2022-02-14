
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; char* str; size_t len; } ;
typedef TYPE_1__ simplestring ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(simplestring* VAR_1, const char* VAR_2, size_t VAR_3) {
   size_t VAR_4 = VAR_1->size, VAR_5 = 0;
   if(VAR_1 && VAR_2) {
      if(!VAR_1->str) {
         FUNC_2(VAR_1);
      }

      if((VAR_0 - VAR_3) < VAR_1->len || (VAR_0 - VAR_3 - 1) < VAR_1->len) {

       return;
      }

      if(VAR_1->len + VAR_3 + 1 > VAR_1->size) {

         VAR_4 = VAR_1->len + VAR_3 + 1;
         VAR_5 = VAR_1->size * 2;


         if (VAR_5) {
            VAR_4 = VAR_4 - (VAR_4 % VAR_5) + VAR_5;
         }
         if(VAR_4 < (VAR_1->len + VAR_3 + 1)) {

          return;
         }
         VAR_1->str = (char*)FUNC_0(VAR_1->str, VAR_4);

         VAR_1->size = VAR_1->str ? VAR_4 : 0;
      }

      if(VAR_1->str) {
         if(VAR_3) {
            FUNC_1(VAR_1->str + VAR_1->len, VAR_2, VAR_3);
         }
         VAR_1->len += VAR_3;
         VAR_1->str[VAR_1->len] = 0;
      }
   }
}

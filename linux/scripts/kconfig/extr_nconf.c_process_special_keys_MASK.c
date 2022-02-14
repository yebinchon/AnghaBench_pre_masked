
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct menu {int dummy; } ;
struct TYPE_2__ {int key; int (* handler ) (int*,struct menu*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int*,struct menu*) ;

__attribute__((used)) static int FUNC_3(int *VAR_3, struct menu *VAR_4)
{
 int VAR_5;

 if (*VAR_3 == VAR_0) {
  FUNC_1();
  return 1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (*VAR_3 == FUNC_0(VAR_1[VAR_5].key) ||
      *VAR_3 == '0' + VAR_1[VAR_5].key){
   VAR_1[VAR_5].handler(VAR_3, VAR_4);
   return 1;
  }
 }

 return 0;
}

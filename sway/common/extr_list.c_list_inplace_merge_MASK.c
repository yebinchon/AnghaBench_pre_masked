
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_1(list_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4(const void *VAR_5, const void *VAR_6)) {
 int VAR_7 = VAR_3 + 1;

 if (VAR_4(&VAR_0->items[VAR_3], &VAR_0->items[VAR_7]) <= 0) {
  return;
 }

 while (VAR_1 <= VAR_3 && VAR_7 <= VAR_2) {
  if (VAR_4(&VAR_0->items[VAR_1], &VAR_0->items[VAR_7]) <= 0) {
   VAR_1++;
  } else {
   FUNC_0(VAR_0, VAR_1, VAR_7);
   VAR_1++;
   VAR_3++;
   VAR_7++;
  }
 }
}

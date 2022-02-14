
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*,int,int,int,int (*) (void const*,void const*)) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_2(list_t *VAR_0, int VAR_1, int VAR_2, int VAR_3(const void *VAR_4, const void *VAR_5)) {
 if (VAR_1 >= VAR_2) {
  return;
 } else if ((VAR_2 - VAR_1) == 1) {
  if (VAR_3(&VAR_0->items[VAR_1], &VAR_0->items[VAR_2]) > 0) {
   FUNC_1(VAR_0, VAR_1, VAR_2);
  }
 } else {
  int VAR_6 = (int)((VAR_2 + VAR_1) / 2);
  FUNC_2(VAR_0, VAR_1, VAR_6, VAR_3);
  FUNC_2(VAR_0, VAR_6 + 1, VAR_2, VAR_3);
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6, VAR_3);
 }
}

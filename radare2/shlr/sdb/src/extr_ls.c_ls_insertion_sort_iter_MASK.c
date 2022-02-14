
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; struct TYPE_3__* n; } ;
typedef TYPE_1__ SdbListIter ;
typedef scalar_t__ (* SdbListComparator ) (void*,void*) ;



__attribute__((used)) static void FUNC_0(SdbListIter *VAR_0, SdbListComparator VAR_1) {
 SdbListIter *VAR_2, *VAR_3;
 for (VAR_2 = VAR_0; VAR_2 && VAR_2->data; VAR_2 = VAR_2->n) {
  for (VAR_3 = VAR_2->n; VAR_3 && VAR_3->data; VAR_3 = VAR_3->n) {
   if (VAR_1 (VAR_2->data, VAR_3->data) > 0) {
    void *VAR_4 = VAR_2->data;
    VAR_2->data = VAR_3->data;
    VAR_3->data = VAR_4;
   }
  }
 }
}

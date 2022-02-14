
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* n; struct TYPE_5__* p; int data; } ;
typedef TYPE_1__ SdbListIter ;
typedef scalar_t__ (* SdbListComparator ) (int ,int ) ;



__attribute__((used)) static SdbListIter *FUNC_0(SdbListIter *VAR_0, SdbListIter *VAR_1, SdbListComparator VAR_2) {
 SdbListIter *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 while (VAR_0 || VAR_1) {
  if (!VAR_1) {
   VAR_3 = VAR_0;
   VAR_0 = VAR_0->n;
  } else if (!VAR_0) {
   VAR_3 = VAR_1;
   VAR_1 = VAR_1->n;
  } else if (VAR_2 (VAR_0->data, VAR_1->data) < 0) {
   VAR_3 = VAR_0;
   VAR_0 = VAR_0->n;
  } else {
   VAR_3 = VAR_1;
   VAR_1 = VAR_1->n;
  }
  if (!VAR_5) {
   VAR_4 = VAR_3;
   VAR_5 = VAR_4;
   VAR_5->p = ((void*)0);
  } else {
   VAR_4->n = VAR_3;
   VAR_3->p = VAR_4;
   VAR_4 = VAR_4->n;
  }
 }
 VAR_5->p = ((void*)0);
 VAR_3->n = ((void*)0);
 return VAR_5;
}

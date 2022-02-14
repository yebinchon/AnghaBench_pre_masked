
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* n; } ;
typedef TYPE_1__ SdbListIter ;



__attribute__((used)) static SdbListIter * FUNC_0(SdbListIter *VAR_0) {
 SdbListIter *VAR_1;
 SdbListIter *VAR_2;
 SdbListIter *VAR_3;
 if (!VAR_0 || !VAR_0->n) {
  return VAR_0;
 }
 VAR_3 = VAR_0;
 VAR_2 = VAR_0;
 while (VAR_2 && VAR_2->n && VAR_2->n->n) {
  VAR_2 = VAR_2->n->n;
  VAR_3 = VAR_3->n;
 }
 VAR_1 = VAR_3->n;
 VAR_3->n = ((void*)0);
 return VAR_1;
}

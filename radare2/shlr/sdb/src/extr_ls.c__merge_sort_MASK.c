
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int n; } ;
typedef TYPE_1__ SdbListIter ;
typedef int SdbListComparator ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static SdbListIter * FUNC_2(SdbListIter *VAR_0, SdbListComparator VAR_1) {
 SdbListIter *VAR_2;
 if (!VAR_0 || !VAR_0->n) {
  return VAR_0;
 }
 VAR_2 = FUNC_1 (VAR_0);
 VAR_0 = FUNC_2 (VAR_0, VAR_1);
 VAR_2 = FUNC_2 (VAR_2, VAR_1);
 return FUNC_0 (VAR_0, VAR_2, VAR_1);
}

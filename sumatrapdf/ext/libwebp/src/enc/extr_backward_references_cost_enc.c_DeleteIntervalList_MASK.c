
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_; } ;
typedef int CostManager ;
typedef TYPE_1__ CostInterval ;


 int FUNC_0 (int * const,TYPE_1__ const*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(CostManager* const VAR_0,
                               const CostInterval* VAR_1) {
  while (VAR_1 != ((void*)0)) {
    const CostInterval* const VAR_2 = VAR_1->next_;
    if (!FUNC_0(VAR_0, VAR_1)) {
      FUNC_1((void*)VAR_1);
    }
    VAR_1 = VAR_2;
  }
}

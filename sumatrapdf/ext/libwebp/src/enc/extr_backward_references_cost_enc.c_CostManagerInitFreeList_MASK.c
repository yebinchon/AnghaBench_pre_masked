
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * intervals_; int * free_intervals_; } ;
typedef TYPE_1__ CostManager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__* const,int *) ;

__attribute__((used)) static void FUNC_1(CostManager* const VAR_1) {
  int VAR_2;
  VAR_1->free_intervals_ = ((void*)0);
  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
    FUNC_0(VAR_1, &VAR_1->intervals_[VAR_2]);
  }
}

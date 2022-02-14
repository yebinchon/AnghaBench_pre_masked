
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next_; } ;
struct TYPE_5__ {TYPE_2__* free_intervals_; } ;
typedef TYPE_1__ CostManager ;
typedef TYPE_2__ CostInterval ;



__attribute__((used)) static void FUNC_0(CostManager* const VAR_0,
                                      CostInterval* const VAR_1) {
  VAR_1->next_ = VAR_0->free_intervals_;
  VAR_0->free_intervals_ = VAR_1;
}

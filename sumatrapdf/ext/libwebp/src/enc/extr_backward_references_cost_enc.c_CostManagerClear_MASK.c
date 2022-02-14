
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * recycled_intervals_; int * head_; int cache_intervals_; int costs_; } ;
typedef TYPE_1__ CostManager ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const,int ,int) ;

__attribute__((used)) static void FUNC_4(CostManager* const VAR_0) {
  if (VAR_0 == ((void*)0)) return;

  FUNC_2(VAR_0->costs_);
  FUNC_2(VAR_0->cache_intervals_);


  FUNC_1(VAR_0, VAR_0->head_);
  VAR_0->head_ = ((void*)0);
  FUNC_1(VAR_0, VAR_0->recycled_intervals_);
  VAR_0->recycled_intervals_ = ((void*)0);


  FUNC_3(VAR_0, 0, sizeof(*VAR_0));
  FUNC_0(VAR_0);
}

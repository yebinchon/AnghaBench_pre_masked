
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ magic; int is_complete; TYPE_1__* gplan; int context; scalar_t__ is_oneshot; scalar_t__ is_saved; } ;
struct TYPE_4__ {scalar_t__ magic; int context; } ;
typedef int MemoryContext ;
typedef TYPE_2__ CachedPlanSource ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(CachedPlanSource *VAR_3,
         MemoryContext VAR_4)
{

 FUNC_0(VAR_3->magic == VAR_0);
 FUNC_0(VAR_3->is_complete);


 if (VAR_3->is_saved)
  FUNC_2(VAR_2, "cannot move a saved cached plan to another context");
 if (VAR_3->is_oneshot)
  FUNC_2(VAR_2, "cannot move a one-shot cached plan to another context");


 FUNC_1(VAR_3->context, VAR_4);






 if (VAR_3->gplan)
 {
  FUNC_0(VAR_3->gplan->magic == VAR_1);
  FUNC_1(VAR_3->gplan->context, VAR_4);
 }
}

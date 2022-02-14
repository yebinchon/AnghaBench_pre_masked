
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int is_saved; int context; int is_oneshot; int node; } ;
typedef TYPE_1__ CachedPlanSource ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(CachedPlanSource *VAR_1)
{
 FUNC_0(VAR_1->magic == VAR_0);


 if (VAR_1->is_saved)
 {
  FUNC_3(&VAR_1->node);
  VAR_1->is_saved = 0;
 }


 FUNC_2(VAR_1);


 VAR_1->magic = 0;





 if (!VAR_1->is_oneshot)
  FUNC_1(VAR_1->context);
}

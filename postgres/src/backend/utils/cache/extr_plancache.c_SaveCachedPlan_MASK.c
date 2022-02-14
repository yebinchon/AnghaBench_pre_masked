
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int is_complete; int is_saved; int node; int context; scalar_t__ is_oneshot; } ;
typedef TYPE_1__ CachedPlanSource ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;

void
FUNC_5(CachedPlanSource *VAR_4)
{

 FUNC_0(VAR_4->magic == VAR_0);
 FUNC_0(VAR_4->is_complete);
 FUNC_0(!VAR_4->is_saved);


 if (VAR_4->is_oneshot)
  FUNC_4(VAR_2, "cannot save one-shot cached plan");
 FUNC_2(VAR_4);






 FUNC_1(VAR_4->context, VAR_1);




 FUNC_3(&VAR_3, &VAR_4->node);

 VAR_4->is_saved = 1;
}

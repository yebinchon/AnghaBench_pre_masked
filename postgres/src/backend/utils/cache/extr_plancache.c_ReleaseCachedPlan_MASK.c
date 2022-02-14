
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int is_saved; scalar_t__ refcount; int context; int is_oneshot; } ;
typedef TYPE_1__ CachedPlan ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(CachedPlan *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_2->magic == VAR_0);
 if (VAR_3)
 {
  FUNC_0(VAR_2->is_saved);
  FUNC_2(VAR_1, VAR_2);
 }
 FUNC_0(VAR_2->refcount > 0);
 VAR_2->refcount--;
 if (VAR_2->refcount == 0)
 {

  VAR_2->magic = 0;


  if (!VAR_2->is_oneshot)
   FUNC_1(VAR_2->context);
 }
}

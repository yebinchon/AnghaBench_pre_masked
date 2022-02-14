
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ magic; int is_valid; scalar_t__ planRoleId; scalar_t__ refcount; int stmt_list; int saved_xmin; scalar_t__ dependsOnRole; int is_oneshot; } ;
struct TYPE_5__ {int is_valid; TYPE_2__* gplan; } ;
typedef TYPE_1__ CachedPlanSource ;
typedef TYPE_2__ CachedPlan ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_6(CachedPlanSource *VAR_2)
{
 CachedPlan *VAR_3 = VAR_2->gplan;


 FUNC_1(VAR_2->is_valid);


 if (!VAR_3)
  return 0;

 FUNC_1(VAR_3->magic == VAR_0);

 FUNC_1(!VAR_3->is_oneshot);




 if (VAR_3->is_valid && VAR_3->dependsOnRole &&
  VAR_3->planRoleId != FUNC_2())
  VAR_3->is_valid = 0;





 if (VAR_3->is_valid)
 {




  FUNC_1(VAR_3->refcount > 0);

  FUNC_0(VAR_3->stmt_list, 1);





  if (VAR_3->is_valid &&
   FUNC_5(VAR_3->saved_xmin) &&
   !FUNC_4(VAR_3->saved_xmin, VAR_1))
   VAR_3->is_valid = 0;





  if (VAR_3->is_valid)
  {

   return 1;
  }


  FUNC_0(VAR_3->stmt_list, 0);
 }




 FUNC_3(VAR_2);

 return 0;
}

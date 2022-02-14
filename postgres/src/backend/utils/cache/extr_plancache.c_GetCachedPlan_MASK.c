
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ magic; int is_saved; int context; int refcount; } ;
struct TYPE_13__ {scalar_t__ magic; int is_complete; scalar_t__ num_custom_plans; scalar_t__ is_saved; int total_custom_cost; scalar_t__ generic_cost; int context; TYPE_2__* gplan; } ;
typedef int QueryEnvironment ;
typedef int * ParamListInfo ;
typedef int List ;
typedef TYPE_1__ CachedPlanSource ;
typedef TYPE_2__ CachedPlan ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int * VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int * FUNC_8 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (int ,char*) ;

CachedPlan *
FUNC_12(CachedPlanSource *VAR_7, ParamListInfo VAR_8,
     bool VAR_9, QueryEnvironment *VAR_10)
{
 CachedPlan *VAR_11 = ((void*)0);
 List *VAR_12;
 bool VAR_13;


 FUNC_0(VAR_7->magic == VAR_0);
 FUNC_0(VAR_7->is_complete);

 if (VAR_9 && !VAR_7->is_saved)
  FUNC_11(VAR_4, "cannot apply ResourceOwner to non-saved cached plan");


 VAR_12 = FUNC_8(VAR_7, VAR_10);


 VAR_13 = FUNC_10(VAR_7, VAR_8);

 if (!VAR_13)
 {
  if (FUNC_2(VAR_7))
  {

   VAR_11 = VAR_7->gplan;
   FUNC_0(VAR_11->magic == VAR_1);
  }
  else
  {

   VAR_11 = FUNC_1(VAR_7, VAR_12, ((void*)0), VAR_10);

   FUNC_5(VAR_7);

   VAR_7->gplan = VAR_11;
   VAR_11->refcount++;

   if (VAR_7->is_saved)
   {

    FUNC_4(VAR_11->context, VAR_2);
    VAR_11->is_saved = 1;
   }
   else
   {

    FUNC_4(VAR_11->context,
            FUNC_3(VAR_7->context));
   }

   VAR_7->generic_cost = FUNC_9(VAR_11, 0);
   VAR_13 = FUNC_10(VAR_7, VAR_8);






   VAR_12 = VAR_6;
  }
 }

 if (VAR_13)
 {

  VAR_11 = FUNC_1(VAR_7, VAR_12, VAR_8, VAR_10);

  if (VAR_7->num_custom_plans < VAR_5)
  {
   VAR_7->total_custom_cost += FUNC_9(VAR_11, 1);
   VAR_7->num_custom_plans++;
  }
 }

 FUNC_0(VAR_11 != ((void*)0));


 if (VAR_9)
  FUNC_6(VAR_3);
 VAR_11->refcount++;
 if (VAR_9)
  FUNC_7(VAR_3, VAR_11);







 if (VAR_13 && VAR_7->is_saved)
 {
  FUNC_4(VAR_11->context, VAR_2);
  VAR_11->is_saved = 1;
 }

 return VAR_11;
}

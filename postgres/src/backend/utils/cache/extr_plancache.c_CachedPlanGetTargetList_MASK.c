
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int is_complete; int query_list; int * resultDesc; } ;
typedef int QueryEnvironment ;
typedef int Query ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ CachedPlanSource ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *) ;
 int * VAR_1 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;

List *
FUNC_4(CachedPlanSource *VAR_2,
      QueryEnvironment *VAR_3)
{
 Query *VAR_4;


 FUNC_0(VAR_2->magic == VAR_0);
 FUNC_0(VAR_2->is_complete);





 if (VAR_2->resultDesc == ((void*)0))
  return VAR_1;


 FUNC_3(VAR_2, VAR_3);


 VAR_4 = FUNC_2(VAR_2->query_list);

 return FUNC_1((Node *) VAR_4);
}

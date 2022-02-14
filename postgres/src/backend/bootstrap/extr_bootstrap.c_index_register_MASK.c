
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * ii_ExclusionStrats; int * ii_ExclusionProcs; int * ii_ExclusionOps; int * ii_PredicateState; void* ii_Predicate; int ii_ExpressionsState; void* ii_Expressions; } ;
struct TYPE_7__ {struct TYPE_7__* il_next; TYPE_2__* il_info; void* il_ind; void* il_heap; } ;
typedef void* Oid ;
typedef int * MemoryContext ;
typedef TYPE_1__ IndexList ;
typedef TYPE_2__ IndexInfo ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_2 (int *) ;
 int VAR_2 ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6(Oid VAR_4,
      Oid VAR_5,
      IndexInfo *VAR_6)
{
 IndexList *VAR_7;
 MemoryContext VAR_8;







 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_0(((void*)0),
          "BootstrapNoGC",
          VAR_0);

 VAR_8 = FUNC_2(VAR_3);

 VAR_7 = (IndexList *) FUNC_5(sizeof(IndexList));
 VAR_7->il_heap = VAR_4;
 VAR_7->il_ind = VAR_5;
 VAR_7->il_info = (IndexInfo *) FUNC_5(sizeof(IndexInfo));

 FUNC_4(VAR_7->il_info, VAR_6, sizeof(IndexInfo));

 VAR_7->il_info->ii_Expressions =
  FUNC_3(VAR_6->ii_Expressions);
 VAR_7->il_info->ii_ExpressionsState = VAR_2;

 VAR_7->il_info->ii_Predicate =
  FUNC_3(VAR_6->ii_Predicate);
 VAR_7->il_info->ii_PredicateState = ((void*)0);

 FUNC_1(VAR_6->ii_ExclusionOps == ((void*)0));
 FUNC_1(VAR_6->ii_ExclusionProcs == ((void*)0));
 FUNC_1(VAR_6->ii_ExclusionStrats == ((void*)0));

 VAR_7->il_next = VAR_1;
 VAR_1 = VAR_7;

 FUNC_2(VAR_8);
}

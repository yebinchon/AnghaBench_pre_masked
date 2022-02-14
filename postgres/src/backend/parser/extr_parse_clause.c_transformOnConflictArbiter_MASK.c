
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ conname; scalar_t__ whereClause; scalar_t__ indexElems; } ;
struct TYPE_15__ {scalar_t__ action; TYPE_4__* infer; } ;
struct TYPE_14__ {TYPE_1__* p_target_rangetblentry; int p_target_relation; int * p_namespace; } ;
struct TYPE_13__ {int selectedCols; int requiredPerms; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ ParseState ;
typedef TYPE_3__ OnConflictClause ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef TYPE_4__ InferClause ;
typedef int Bitmapset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int,int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,scalar_t__,int,int *) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int * FUNC_13 (TYPE_2__*,TYPE_4__*,int ) ;
 int * FUNC_14 (TYPE_2__*,scalar_t__,int ) ;

void
FUNC_15(ParseState *VAR_8,
         OnConflictClause *VAR_9,
         List **VAR_10, Node **VAR_11,
         Oid *VAR_12)
{
 InferClause *VAR_13 = VAR_9->infer;

 *VAR_10 = VAR_6;
 *VAR_11 = ((void*)0);
 *VAR_12 = VAR_5;

 if (VAR_9->action == VAR_7 && !VAR_13)
  FUNC_6(VAR_3,
    (FUNC_7(VAR_2),
     FUNC_9("ON CONFLICT DO UPDATE requires inference specification or constraint name"),
     FUNC_8("For example, ON CONFLICT (column_name)."),
     FUNC_12(VAR_8,
         FUNC_10((Node *) VAR_9))));





 if (FUNC_0(VAR_8->p_target_relation))
  FUNC_6(VAR_3,
    (FUNC_7(VAR_1),
     FUNC_9("ON CONFLICT is not supported with system catalog tables"),
     FUNC_12(VAR_8,
         FUNC_10((Node *) VAR_9))));


 if (FUNC_3(VAR_8->p_target_relation))
  FUNC_6(VAR_3,
    (FUNC_7(VAR_1),
     FUNC_9("ON CONFLICT is not supported on table \"%s\" used as a catalog table",
      FUNC_1(VAR_8->p_target_relation)),
     FUNC_12(VAR_8,
         FUNC_10((Node *) VAR_9))));


 if (VAR_13)
 {
  List *VAR_14;





  VAR_14 = VAR_8->p_namespace;
  VAR_8->p_namespace = VAR_6;
  FUNC_4(VAR_8, VAR_8->p_target_rangetblentry,
       0, 0, 1);

  if (VAR_13->indexElems)
   *VAR_10 = FUNC_13(VAR_8, VAR_13,
              VAR_8->p_target_relation);





  if (VAR_13->whereClause)
   *VAR_11 = FUNC_14(VAR_8, VAR_13->whereClause,
            VAR_4);

  VAR_8->p_namespace = VAR_14;







  if (VAR_13->conname)
  {
   Oid VAR_15 = FUNC_2(VAR_8->p_target_relation);
   RangeTblEntry *VAR_16 = VAR_8->p_target_rangetblentry;
   Bitmapset *VAR_17;

   VAR_17 = FUNC_11(VAR_15, VAR_13->conname,
                0, VAR_12);


   VAR_16->requiredPerms |= VAR_0;

   VAR_16->selectedCols = FUNC_5(VAR_16->selectedCols, VAR_17);
  }
 }
}

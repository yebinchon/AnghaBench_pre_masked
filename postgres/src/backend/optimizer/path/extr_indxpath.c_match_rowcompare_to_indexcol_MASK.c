
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ relam; scalar_t__* opfamily; scalar_t__* indexcollations; TYPE_1__* rel; } ;
struct TYPE_12__ {scalar_t__ clause; } ;
struct TYPE_11__ {int inputcollids; int opnos; int rargs; int largs; } ;
struct TYPE_10__ {int relid; } ;
typedef TYPE_2__ RowCompareExpr ;
typedef TYPE_3__ RestrictInfo ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef TYPE_4__ IndexOptInfo ;
typedef int IndexClause ;
typedef int Index ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*,int,TYPE_4__*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int,TYPE_4__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static IndexClause *
FUNC_10(RestrictInfo *VAR_2,
        int VAR_3,
        IndexOptInfo *VAR_4)
{
 RowCompareExpr *VAR_5 = (RowCompareExpr *) VAR_2->clause;
 Index VAR_6;
 Oid VAR_7;
 Oid VAR_8;
 Node *VAR_9,
      *VAR_10;
 bool VAR_11;
 Oid VAR_12;
 Oid VAR_13;


 if (VAR_4->relam != VAR_0)
  return ((void*)0);

 VAR_6 = VAR_4->rel->relid;
 VAR_7 = VAR_4->opfamily[VAR_3];
 VAR_8 = VAR_4->indexcollations[VAR_3];
 VAR_9 = (Node *) FUNC_6(VAR_5->largs);
 VAR_10 = (Node *) FUNC_6(VAR_5->rargs);
 VAR_12 = FUNC_7(VAR_5->opnos);
 VAR_13 = FUNC_7(VAR_5->inputcollids);


 if (!FUNC_0(VAR_8, VAR_13))
  return ((void*)0);




 if (FUNC_8(VAR_9, VAR_3, VAR_4) &&
  !FUNC_1(VAR_6, FUNC_9(VAR_10)) &&
  !FUNC_2(VAR_10))
 {

  VAR_11 = 1;
 }
 else if (FUNC_8(VAR_10, VAR_3, VAR_4) &&
    !FUNC_1(VAR_6, FUNC_9(VAR_9)) &&
    !FUNC_2(VAR_9))
 {

  VAR_12 = FUNC_4(VAR_12);
  if (VAR_12 == VAR_1)
   return ((void*)0);
  VAR_11 = 0;
 }
 else
  return ((void*)0);


 switch (FUNC_5(VAR_12, VAR_7))
 {
  case 128:
  case 129:
  case 131:
  case 130:
   return FUNC_3(VAR_2,
              VAR_3,
              VAR_4,
              VAR_12,
              VAR_11);
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_31__ {int self_reference; int * tablesample; int relkind; scalar_t__ inh; } ;
struct TYPE_30__ {scalar_t__ reloptkind; int rtekind; scalar_t__ rows; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef int Index ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int *,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_17(PlannerInfo *VAR_4, RelOptInfo *VAR_5,
    Index VAR_6, RangeTblEntry *VAR_7)
{
 if (VAR_5->reloptkind == VAR_3 &&
  FUNC_3(VAR_4, VAR_5, VAR_7))
 {
  FUNC_6(VAR_5);
 }
 else if (VAR_7->inh)
 {

  FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 }
 else
 {
  switch (VAR_5->rtekind)
  {
   case 132:
    if (VAR_7->relkind == VAR_1)
    {

     FUNC_7(VAR_4, VAR_5, VAR_7);
    }
    else if (VAR_7->relkind == VAR_2)
    {





     FUNC_6(VAR_5);
    }
    else if (VAR_7->tablesample != ((void*)0))
    {

     FUNC_14(VAR_4, VAR_5, VAR_7);
    }
    else
    {

     FUNC_10(VAR_4, VAR_5, VAR_7);
    }
    break;
   case 130:






    FUNC_12(VAR_4, VAR_5, VAR_6, VAR_7);
    break;
   case 134:
    FUNC_8(VAR_4, VAR_5);
    break;
   case 129:
    FUNC_13(VAR_4, VAR_5);
    break;
   case 128:
    FUNC_15(VAR_4, VAR_5);
    break;
   case 135:






    if (VAR_7->self_reference)
     FUNC_16(VAR_4, VAR_5, VAR_7);
    else
     FUNC_5(VAR_4, VAR_5, VAR_7);
    break;
   case 133:

    FUNC_9(VAR_4, VAR_5, VAR_7);
    break;
   case 131:

    FUNC_11(VAR_4, VAR_5, VAR_7);
    break;
   default:
    FUNC_2(VAR_0, "unexpected rtekind: %d", (int) VAR_5->rtekind);
    break;
  }
 }




 FUNC_0(VAR_5->rows > 0 || FUNC_1(VAR_5));
}

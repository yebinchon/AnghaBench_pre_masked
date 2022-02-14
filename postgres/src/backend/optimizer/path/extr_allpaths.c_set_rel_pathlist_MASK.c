
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


struct TYPE_42__ {int all_baserels; } ;
struct TYPE_41__ {int * tablesample; int relkind; scalar_t__ inh; } ;
struct TYPE_40__ {int rtekind; scalar_t__ reloptkind; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;
typedef int Index ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_15(PlannerInfo *VAR_4, RelOptInfo *VAR_5,
     Index VAR_6, RangeTblEntry *VAR_7)
{
 if (FUNC_0(VAR_5))
 {

 }
 else if (VAR_7->inh)
 {

  FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
 }
 else
 {
  switch (VAR_5->rtekind)
  {
   case 132:
    if (VAR_7->relkind == VAR_2)
    {

     FUNC_7(VAR_4, VAR_5, VAR_7);
    }
    else if (VAR_7->tablesample != ((void*)0))
    {

     FUNC_12(VAR_4, VAR_5, VAR_7);
    }
    else
    {

     FUNC_9(VAR_4, VAR_5, VAR_7);
    }
    break;
   case 130:

    break;
   case 134:

    FUNC_8(VAR_4, VAR_5, VAR_7);
    break;
   case 129:

    FUNC_11(VAR_4, VAR_5, VAR_7);
    break;
   case 128:

    FUNC_13(VAR_4, VAR_5, VAR_7);
    break;
   case 135:

    break;
   case 133:

    break;
   case 131:

    break;
   default:
    FUNC_3(VAR_1, "unexpected rtekind: %d", (int) VAR_5->rtekind);
    break;
  }
 }







 if (&FUNC_10)
  FUNC_10) (VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_5->reloptkind == VAR_3 &&
  FUNC_1(VAR_4->all_baserels) != VAR_0)
  FUNC_4(VAR_4, VAR_5, 0);


 FUNC_6(VAR_5);




}

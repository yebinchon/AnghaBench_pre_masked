
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int attcollation; int atttypmod; int atttypid; } ;
struct TYPE_11__ {int ncolumns; int* indexkeys; int indexprs; TYPE_1__* rel; } ;
struct TYPE_10__ {int rd_att; } ;
struct TYPE_9__ {int relid; } ;
typedef TYPE_2__* Relation ;
typedef int PlannerInfo ;
typedef int ListCell ;
typedef int List ;
typedef TYPE_3__ IndexOptInfo ;
typedef int Index ;
typedef TYPE_4__ FormData_pg_attribute ;
typedef int Expr ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_4__* FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int,int *,int) ;
 scalar_t__ FUNC_8 (int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static List *
FUNC_9(PlannerInfo *VAR_2, IndexOptInfo *VAR_3,
      Relation VAR_4)
{
 List *VAR_5 = VAR_1;
 Index VAR_6 = VAR_3->rel->relid;
 ListCell *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_3->indexprs);
 for (VAR_8 = 0; VAR_8 < VAR_3->ncolumns; VAR_8++)
 {
  int VAR_9 = VAR_3->indexkeys[VAR_8];
  Expr *VAR_10;

  if (VAR_9 != 0)
  {

   const FormData_pg_attribute *VAR_11;

   if (VAR_9 < 0)
    VAR_11 = FUNC_0(VAR_9);
   else
    VAR_11 = FUNC_1(VAR_4->rd_att, VAR_9 - 1);

   VAR_10 = (Expr *) FUNC_8(VAR_6,
          VAR_9,
          VAR_11->atttypid,
          VAR_11->atttypmod,
          VAR_11->attcollation,
          0);
  }
  else
  {

   if (VAR_7 == ((void*)0))
    FUNC_2(VAR_0, "wrong number of index expressions");
   VAR_10 = (Expr *) FUNC_4(VAR_7);
   VAR_7 = FUNC_6(VAR_3->indexprs, VAR_7);
  }

  VAR_5 = FUNC_3(VAR_5,
      FUNC_7(VAR_10,
          VAR_8 + 1,
          ((void*)0),
          0));
 }
 if (VAR_7 != ((void*)0))
  FUNC_2(VAR_0, "wrong number of index expressions");

 return VAR_5;
}

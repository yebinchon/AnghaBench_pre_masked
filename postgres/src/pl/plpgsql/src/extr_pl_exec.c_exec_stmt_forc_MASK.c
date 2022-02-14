
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int set_args ;
struct TYPE_32__ {int readonly_func; scalar_t__* datums; } ;
struct TYPE_31__ {int * plan; } ;
struct TYPE_30__ {int into; int * target; int * sqlstmt; int lineno; int cmd_type; } ;
struct TYPE_29__ {size_t curvar; int * argquery; int lineno; } ;
struct TYPE_28__ {size_t cursor_explicit_argrow; int cursor_options; TYPE_5__* cursor_explicit_expr; int value; int isnull; } ;
struct TYPE_27__ {int name; } ;
typedef TYPE_1__* Portal ;
typedef int ParamListInfo ;
typedef int PLpgSQL_variable ;
typedef TYPE_2__ PLpgSQL_var ;
typedef int PLpgSQL_stmt_forq ;
typedef TYPE_3__ PLpgSQL_stmt_forc ;
typedef TYPE_4__ PLpgSQL_stmt_execsql ;
typedef TYPE_5__ PLpgSQL_expr ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef int * MemoryContext ;
typedef int Datum ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (char*,int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,TYPE_2__*,int ,int,int) ;
 int FUNC_9 (TYPE_6__*,TYPE_2__*,int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*,int *,TYPE_1__*,int) ;
 int FUNC_16 (TYPE_6__*,TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_17 (TYPE_6__*,TYPE_4__*) ;
 int * FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (TYPE_4__*,int ,int) ;
 int FUNC_20 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_21(PLpgSQL_execstate *VAR_6, PLpgSQL_stmt_forc *VAR_7)
{
 PLpgSQL_var *VAR_8;
 MemoryContext VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 PLpgSQL_expr *VAR_11;
 ParamListInfo VAR_12;
 Portal VAR_13;
 int VAR_14;






 VAR_8 = (PLpgSQL_var *) (VAR_6->datums[VAR_7->curvar]);
 if (!VAR_8->isnull)
 {
  MemoryContext VAR_15;


  VAR_9 = FUNC_18(VAR_6);
  VAR_15 = FUNC_2(VAR_9);
  VAR_10 = FUNC_7(VAR_8->value);
  FUNC_2(VAR_15);

  if (FUNC_4(VAR_10) != ((void*)0))
   FUNC_11(VAR_2,
     (FUNC_12(VAR_0),
      FUNC_13("cursor \"%s\" already in use", VAR_10)));
 }
 if (VAR_7->argquery != ((void*)0))
 {






  PLpgSQL_stmt_execsql VAR_16;

  if (VAR_8->cursor_explicit_argrow < 0)
   FUNC_11(VAR_2,
     (FUNC_12(VAR_1),
      FUNC_13("arguments given for cursor without arguments")));

  FUNC_19(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.cmd_type = VAR_4;
  VAR_16.lineno = VAR_7->lineno;
  VAR_16.sqlstmt = VAR_7->argquery;
  VAR_16.into = 1;

  VAR_16.target = (PLpgSQL_variable *)
   (VAR_6->datums[VAR_8->cursor_explicit_argrow]);

  if (FUNC_17(VAR_6, &VAR_16) != VAR_3)
   FUNC_10(VAR_2, "open cursor failed during argument processing");
 }
 else
 {
  if (VAR_8->cursor_explicit_argrow >= 0)
   FUNC_11(VAR_2,
     (FUNC_12(VAR_1),
      FUNC_13("arguments required for cursor")));
 }

 VAR_11 = VAR_8->cursor_explicit_expr;
 FUNC_0(VAR_11);

 if (VAR_11->plan == ((void*)0))
  FUNC_16(VAR_6, VAR_11, VAR_8->cursor_options, 1);




 VAR_12 = FUNC_20(VAR_6, VAR_11);




 VAR_13 = FUNC_5(VAR_10, VAR_11->plan,
           VAR_12,
           VAR_6->readonly_func);
 if (VAR_13 == ((void*)0))
  FUNC_10(VAR_2, "could not open cursor: %s",
    FUNC_6(VAR_5));




 if (VAR_10 == ((void*)0))
  FUNC_9(VAR_6, VAR_8, VAR_13->name);




 FUNC_14(VAR_6);
 if (VAR_9)
  FUNC_1(VAR_9);





 VAR_14 = FUNC_15(VAR_6, (PLpgSQL_stmt_forq *) VAR_7, VAR_13, 0);





 FUNC_3(VAR_13);

 if (VAR_10 == ((void*)0))
  FUNC_8(VAR_6, VAR_8, (Datum) 0, 1, 0);

 return VAR_14;
}

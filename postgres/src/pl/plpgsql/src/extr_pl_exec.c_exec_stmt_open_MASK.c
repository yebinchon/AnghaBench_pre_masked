
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int set_args ;
struct TYPE_28__ {int readonly_func; scalar_t__* datums; } ;
struct TYPE_27__ {int * plan; } ;
struct TYPE_26__ {int into; int * target; int * sqlstmt; int lineno; int cmd_type; } ;
struct TYPE_25__ {size_t curvar; int * argquery; int lineno; int cursor_options; int params; int * dynquery; TYPE_5__* query; } ;
struct TYPE_24__ {size_t cursor_explicit_argrow; int cursor_options; TYPE_5__* cursor_explicit_expr; int value; int isnull; } ;
struct TYPE_23__ {int name; } ;
typedef TYPE_1__* Portal ;
typedef int ParamListInfo ;
typedef int PLpgSQL_variable ;
typedef TYPE_2__ PLpgSQL_var ;
typedef TYPE_3__ PLpgSQL_stmt_open ;
typedef TYPE_4__ PLpgSQL_stmt_execsql ;
typedef TYPE_5__ PLpgSQL_expr ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef int * MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (char*,int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*,TYPE_2__*,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 TYPE_1__* FUNC_11 (TYPE_6__*,int *,int ,char*,int ) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,TYPE_5__*,int ,int) ;
 int FUNC_14 (TYPE_6__*,TYPE_4__*) ;
 int * FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_4__*,int ,int) ;
 int FUNC_17 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_18(PLpgSQL_execstate *VAR_6, PLpgSQL_stmt_open *VAR_7)
{
 PLpgSQL_var *VAR_8;
 MemoryContext VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 PLpgSQL_expr *VAR_11;
 Portal VAR_12;
 ParamListInfo VAR_13;






 VAR_8 = (PLpgSQL_var *) (VAR_6->datums[VAR_7->curvar]);
 if (!VAR_8->isnull)
 {
  MemoryContext VAR_14;


  VAR_9 = FUNC_15(VAR_6);
  VAR_14 = FUNC_1(VAR_9);
  VAR_10 = FUNC_5(VAR_8->value);
  FUNC_1(VAR_14);

  if (FUNC_2(VAR_10) != ((void*)0))
   FUNC_8(VAR_2,
     (FUNC_9(VAR_0),
      FUNC_10("cursor \"%s\" already in use", VAR_10)));
 }





 if (VAR_7->query != ((void*)0))
 {







  VAR_11 = VAR_7->query;
  if (VAR_11->plan == ((void*)0))
   FUNC_13(VAR_6, VAR_11, VAR_7->cursor_options, 1);
 }
 else if (VAR_7->dynquery != ((void*)0))
 {




  VAR_12 = FUNC_11(VAR_6,
             VAR_7->dynquery,
             VAR_7->params,
             VAR_10,
             VAR_7->cursor_options);







  if (VAR_10 == ((void*)0))
   FUNC_6(VAR_6, VAR_8, VAR_12->name);

  return VAR_3;
 }
 else
 {







  if (VAR_7->argquery != ((void*)0))
  {






   PLpgSQL_stmt_execsql VAR_15;

   if (VAR_8->cursor_explicit_argrow < 0)
    FUNC_8(VAR_2,
      (FUNC_9(VAR_1),
       FUNC_10("arguments given for cursor without arguments")));

   FUNC_16(&VAR_15, 0, sizeof(VAR_15));
   VAR_15.cmd_type = VAR_4;
   VAR_15.lineno = VAR_7->lineno;
   VAR_15.sqlstmt = VAR_7->argquery;
   VAR_15.into = 1;

   VAR_15.target = (PLpgSQL_variable *)
    (VAR_6->datums[VAR_8->cursor_explicit_argrow]);

   if (FUNC_14(VAR_6, &VAR_15) != VAR_3)
    FUNC_7(VAR_2, "open cursor failed during argument processing");
  }
  else
  {
   if (VAR_8->cursor_explicit_argrow >= 0)
    FUNC_8(VAR_2,
      (FUNC_9(VAR_1),
       FUNC_10("arguments required for cursor")));
  }

  VAR_11 = VAR_8->cursor_explicit_expr;
  if (VAR_11->plan == ((void*)0))
   FUNC_13(VAR_6, VAR_11, VAR_8->cursor_options, 1);
 }




 VAR_13 = FUNC_17(VAR_6, VAR_11);




 VAR_12 = FUNC_3(VAR_10, VAR_11->plan,
           VAR_13,
           VAR_6->readonly_func);
 if (VAR_12 == ((void*)0))
  FUNC_7(VAR_2, "could not open cursor: %s",
    FUNC_4(VAR_5));




 if (VAR_10 == ((void*)0))
  FUNC_6(VAR_6, VAR_8, VAR_12->name);


 FUNC_12(VAR_6);
 if (VAR_9)
  FUNC_0(VAR_9);

 return VAR_3;
}

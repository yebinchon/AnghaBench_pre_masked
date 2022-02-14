
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int location; int fields; } ;
struct TYPE_9__ {int p_last_srf; int p_ref_hook_state; } ;
struct TYPE_8__ {int fname; } ;
typedef TYPE_1__* SQLFunctionParseInfoPtr ;
typedef TYPE_2__ ParseState ;
typedef int Node ;
typedef TYPE_3__ ColumnRef ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (TYPE_2__*,int ,int ,int ,int *,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (TYPE_1__*,char const*,int ) ;
 char* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char const*,int ) ;

__attribute__((used)) static Node *
FUNC_12(ParseState *VAR_2, ColumnRef *VAR_3, Node *VAR_4)
{
 SQLFunctionParseInfoPtr VAR_5 = (SQLFunctionParseInfoPtr) VAR_2->p_ref_hook_state;
 int VAR_6;
 Node *VAR_7;
 Node *VAR_8 = ((void*)0);
 const char *VAR_9;
 const char *VAR_10 = ((void*)0);
 Node *VAR_11;






 if (VAR_4 != ((void*)0))
  return ((void*)0);
 VAR_6 = FUNC_4(VAR_3->fields);

 if (VAR_6 > 3)
  return ((void*)0);

 if (FUNC_1(FUNC_6(VAR_3->fields), VAR_0))
  VAR_6--;

 VAR_7 = (Node *) FUNC_3(VAR_3->fields);
 FUNC_0(FUNC_1(VAR_7, VAR_1));
 VAR_9 = FUNC_10(VAR_7);
 if (VAR_6 > 1)
 {
  VAR_8 = (Node *) FUNC_7(VAR_3->fields);
  FUNC_0(FUNC_1(VAR_8, VAR_1));
  VAR_10 = FUNC_10(VAR_8);
 }

 if (VAR_6 == 3)
 {





  if (FUNC_11(VAR_9, VAR_5->fname) != 0)
   return ((void*)0);

  VAR_11 = FUNC_9(VAR_5, VAR_10, VAR_3->location);

  VAR_8 = (Node *) FUNC_8(VAR_3->fields);
  FUNC_0(FUNC_1(VAR_8, VAR_1));
 }
 else if (VAR_6 == 2 && FUNC_11(VAR_9, VAR_5->fname) == 0)
 {




  VAR_11 = FUNC_9(VAR_5, VAR_10, VAR_3->location);

  if (VAR_11)
  {

   VAR_8 = ((void*)0);
  }
  else
  {

   VAR_11 = FUNC_9(VAR_5, VAR_9, VAR_3->location);
  }
 }
 else
 {

  VAR_11 = FUNC_9(VAR_5, VAR_9, VAR_3->location);
 }

 if (!VAR_11)
  return ((void*)0);

 if (VAR_8)
 {





  VAR_11 = FUNC_2(VAR_2,
          FUNC_5(VAR_8),
          FUNC_5(VAR_11),
          VAR_2->p_last_srf,
          ((void*)0),
          0,
          VAR_3->location);
 }

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int buf; } ;
typedef TYPE_1__ deparse_context ;
struct TYPE_10__ {int oprkind; } ;
struct TYPE_9__ {int opno; int * args; } ;
typedef int StringInfo ;
typedef TYPE_2__ OpExpr ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_operator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int *,TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(OpExpr *VAR_3, deparse_context *VAR_4)
{
 StringInfo VAR_5 = VAR_4->buf;
 Oid VAR_6 = VAR_3->opno;
 List *VAR_7 = VAR_3->args;

 if (!FUNC_3(VAR_4))
  FUNC_7(VAR_5, '(');
 if (FUNC_13(VAR_7) == 2)
 {

  Node *VAR_8 = (Node *) FUNC_12(VAR_7);
  Node *VAR_9 = (Node *) FUNC_14(VAR_7);

  FUNC_11(VAR_8, VAR_4, 1, (Node *) VAR_3);
  FUNC_6(VAR_5, " %s ",
       FUNC_10(VAR_6,
            FUNC_9(VAR_8),
            FUNC_9(VAR_9)));
  FUNC_11(VAR_9, VAR_4, 1, (Node *) VAR_3);
 }
 else
 {

  Node *VAR_10 = (Node *) FUNC_12(VAR_7);
  HeapTuple VAR_11;
  Form_pg_operator VAR_12;

  VAR_11 = FUNC_5(VAR_2, FUNC_2(VAR_6));
  if (!FUNC_1(VAR_11))
   FUNC_8(VAR_0, "cache lookup failed for operator %u", VAR_6);
  VAR_12 = (Form_pg_operator) FUNC_0(VAR_11);
  switch (VAR_12->oprkind)
  {
   case 'l':
    FUNC_6(VAR_5, "%s ",
         FUNC_10(VAR_6,
              VAR_1,
              FUNC_9(VAR_10)));
    FUNC_11(VAR_10, VAR_4, 1, (Node *) VAR_3);
    break;
   case 'r':
    FUNC_11(VAR_10, VAR_4, 1, (Node *) VAR_3);
    FUNC_6(VAR_5, " %s",
         FUNC_10(VAR_6,
              FUNC_9(VAR_10),
              VAR_1));
    break;
   default:
    FUNC_8(VAR_0, "bogus oprkind: %d", VAR_12->oprkind);
  }
  FUNC_4(VAR_11);
 }
 if (!FUNC_3(VAR_4))
  FUNC_7(VAR_5, ')');
}

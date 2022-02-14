
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_7__ {scalar_t__ nulltesttype; scalar_t__ arg; scalar_t__ argisrow; } ;
typedef int StringInfo ;
typedef TYPE_2__ NullTest ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(NullTest *VAR_1, deparse_expr_cxt *VAR_2)
{
 StringInfo VAR_3 = VAR_2->buf;

 FUNC_0(VAR_3, '(');
 FUNC_2(VAR_1->arg, VAR_2);







 if (VAR_1->argisrow || !FUNC_4(FUNC_3((Node *) VAR_1->arg)))
 {
  if (VAR_1->nulltesttype == VAR_0)
   FUNC_1(VAR_3, " IS NULL)");
  else
   FUNC_1(VAR_3, " IS NOT NULL)");
 }
 else
 {
  if (VAR_1->nulltesttype == VAR_0)
   FUNC_1(VAR_3, " IS NOT DISTINCT FROM NULL)");
  else
   FUNC_1(VAR_3, " IS DISTINCT FROM NULL)");
 }
}

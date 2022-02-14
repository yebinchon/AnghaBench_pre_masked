
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ deparse_context ;
typedef int StringInfo ;
typedef int Node ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(Node *VAR_0, deparse_context *VAR_1,
        bool VAR_2)
{
 if (FUNC_6(VAR_0))
  FUNC_5(VAR_0, VAR_1, VAR_2);
 else
 {
  StringInfo VAR_3 = VAR_1->buf;

  FUNC_1(VAR_3, "CAST(");

  FUNC_5(VAR_0, VAR_1, 0);
  FUNC_0(VAR_3, " AS %s)",
       FUNC_4(FUNC_2(VAR_0),
              FUNC_3(VAR_0)));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statement {int * results; int compat; TYPE_1__* connection; int lineno; } ;
struct TYPE_2__ {int connection; int autocommit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (struct statement*,int) ;

bool
FUNC_5(struct statement *VAR_1)
{
 if (FUNC_2(VAR_1->connection->connection) == VAR_0 && !VAR_1->connection->autocommit)
 {
  VAR_1->results = FUNC_1(VAR_1->connection->connection, "begin transaction");
  if (!FUNC_3(VAR_1->results, VAR_1->lineno, VAR_1->connection->connection, VAR_1->compat))
  {
   FUNC_4(VAR_1, 0);
   return 0;
  }
  FUNC_0(VAR_1->results);
  VAR_1->results = ((void*)0);
 }
 return 1;
}

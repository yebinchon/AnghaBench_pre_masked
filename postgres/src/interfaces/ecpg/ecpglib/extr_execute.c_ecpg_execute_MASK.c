
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statement {scalar_t__ nparams; scalar_t__ statement_type; int compat; TYPE_1__* connection; int lineno; int results; scalar_t__ paramformats; scalar_t__ paramlengths; scalar_t__ paramvalues; int command; int name; } ;
struct TYPE_2__ {int connection; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *,char const* const*,int const*,int const*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,char const* const*,int const*,int const*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct statement*,int) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (struct statement*) ;

bool
FUNC_7(struct statement *VAR_2)
{
 FUNC_5("ecpg_execute on line %d: query: %s; with %d parameter(s) on connection %s\n", VAR_2->lineno, VAR_2->command, VAR_2->nparams, VAR_2->connection->name);
 if (VAR_2->statement_type == VAR_0)
 {
  VAR_2->results = FUNC_2(VAR_2->connection->connection,
            VAR_2->name,
            VAR_2->nparams,
            (const char *const *) VAR_2->paramvalues,
            (const int *) VAR_2->paramlengths,
            (const int *) VAR_2->paramformats,
            0);
  FUNC_5("ecpg_execute on line %d: using PQexecPrepared for \"%s\"\n", VAR_2->lineno, VAR_2->command);
 }
 else
 {
  if (VAR_2->nparams == 0)
  {
   VAR_2->results = FUNC_0(VAR_2->connection->connection, VAR_2->command);
   FUNC_5("ecpg_execute on line %d: using PQexec\n", VAR_2->lineno);
  }
  else
  {
   VAR_2->results = FUNC_1(VAR_2->connection->connection,
           VAR_2->command, VAR_2->nparams, ((void*)0),
           (const char *const *) VAR_2->paramvalues,
           (const int *) VAR_2->paramlengths,
           (const int *) VAR_2->paramformats,
           0);

   FUNC_5("ecpg_execute on line %d: using PQexecParams\n", VAR_2->lineno);
  }

  if (VAR_2->statement_type == VAR_1)
  {
   if (!FUNC_6(VAR_2))
   {
    FUNC_4(VAR_2, 1);
    return 0;
   }
  }
 }

 FUNC_4(VAR_2, 1);

 if (!FUNC_3(VAR_2->results, VAR_2->lineno, VAR_2->connection->connection, VAR_2->compat))
  return 0;

 return 1;
}

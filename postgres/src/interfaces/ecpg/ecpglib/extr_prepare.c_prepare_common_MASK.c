
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statement {int lineno; int prepared; struct statement* next; struct statement* command; struct statement* name; int compat; struct connection* connection; struct statement* stmt; int * outlist; int inlist; } ;
struct prepared_statement {int lineno; int prepared; struct prepared_statement* next; struct prepared_statement* command; struct prepared_statement* name; int compat; struct connection* connection; struct prepared_statement* stmt; int * outlist; int inlist; } ;
struct connection {struct statement* prep_stmts; int connection; } ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*,struct statement*,int ,int *) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (struct statement*) ;
 int FUNC_5 (char*,int,char const*,struct statement*) ;
 void* FUNC_6 (char const*,int) ;
 int FUNC_7 (struct statement**,int) ;

__attribute__((used)) static bool
FUNC_8(int VAR_0, struct connection *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct statement *VAR_4;
 struct prepared_statement *VAR_5;
 PGresult *VAR_6;


 VAR_5 = (struct prepared_statement *) FUNC_2(sizeof(struct prepared_statement), VAR_0);
 if (!VAR_5)
  return 0;

 VAR_4 = (struct statement *) FUNC_2(sizeof(struct statement), VAR_0);
 if (!VAR_4)
 {
  FUNC_4(VAR_5);
  return 0;
 }


 VAR_4->lineno = VAR_0;
 VAR_4->connection = VAR_1;
 VAR_4->command = FUNC_6(VAR_3, VAR_0);
 VAR_4->inlist = *(VAR_4->outlist = ((void*)0));


 FUNC_7(&(VAR_4->command), VAR_0);


 VAR_5->name = FUNC_6(VAR_2, VAR_0);
 VAR_5->stmt = VAR_4;


 VAR_6 = FUNC_1(VAR_4->connection->connection, VAR_2, VAR_4->command, 0, ((void*)0));
 if (!FUNC_3(VAR_6, VAR_4->lineno, VAR_4->connection->connection, VAR_4->compat))
 {
  FUNC_4(VAR_4->command);
  FUNC_4(VAR_5->name);
  FUNC_4(VAR_5);
  FUNC_4(VAR_4);
  return 0;
 }

 FUNC_5("prepare_common on line %d: name %s; query: \"%s\"\n", VAR_4->lineno, VAR_2, VAR_4->command);
 FUNC_0(VAR_6);
 VAR_5->prepared = 1;

 if (VAR_1->prep_stmts == ((void*)0))
  VAR_5->next = ((void*)0);
 else
  VAR_5->next = VAR_1->prep_stmts;

 VAR_1->prep_stmts = VAR_5;
 return 1;
}

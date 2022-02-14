
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statement {int lineno; void* name; int * outlist; int inlist; void* command; struct connection* connection; } ;
struct prepared_statement {int prepared; struct prepared_statement* next; struct statement* stmt; void* name; } ;
struct connection {struct prepared_statement* prep_stmts; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct connection*,struct prepared_statement*,struct prepared_statement*) ;
 scalar_t__ FUNC_1 (int,int) ;
 struct prepared_statement* FUNC_2 (void*,struct connection*,struct prepared_statement**) ;
 int FUNC_3 (struct prepared_statement*) ;
 void* FUNC_4 (void*,int) ;
 int FUNC_5 (struct statement*,int ,int) ;

bool
FUNC_6(struct statement *VAR_1)
{
 struct statement *VAR_2;
 struct prepared_statement *VAR_3;
 struct connection *VAR_4 = VAR_1->connection;
 struct prepared_statement *VAR_5 = ((void*)0);
 int VAR_6 = VAR_1->lineno;


 VAR_3 = FUNC_2(VAR_1->name, VAR_4, &VAR_5);
 if (VAR_3 && !FUNC_0(VAR_6, VAR_0, VAR_4, VAR_5, VAR_3))
  return 0;


 VAR_3 = (struct prepared_statement *) FUNC_1(sizeof(struct prepared_statement), VAR_6);
 if (!VAR_3)
  return 0;

 VAR_2 = (struct statement *) FUNC_1(sizeof(struct statement), VAR_6);
 if (!VAR_2)
 {
  FUNC_3(VAR_3);
  return 0;
 }
 FUNC_5(VAR_2, 0, sizeof(struct statement));


 VAR_2->lineno = VAR_6;
 VAR_2->connection = VAR_4;
 VAR_2->command = FUNC_4(VAR_1->command, VAR_6);
 VAR_2->inlist = *(VAR_2->outlist = ((void*)0));
 VAR_3->name = FUNC_4(VAR_1->name, VAR_6);
 VAR_3->stmt = VAR_2;
 VAR_3->prepared = 1;

 if (VAR_4->prep_stmts == ((void*)0))
  VAR_3->next = ((void*)0);
 else
  VAR_3->next = VAR_4->prep_stmts;

 VAR_4->prep_stmts = VAR_3;
 return 1;
}

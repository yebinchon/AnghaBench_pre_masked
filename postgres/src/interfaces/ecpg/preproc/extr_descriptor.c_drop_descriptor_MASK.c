
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor {struct descriptor* name; struct descriptor* connection; struct descriptor* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct descriptor* VAR_2 ;
 int FUNC_0 (struct descriptor*) ;
 int FUNC_1 (int ,int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*,struct descriptor*) ;

void
FUNC_3(char *VAR_3, char *VAR_4)
{
 struct descriptor *VAR_5;
 struct descriptor **VAR_6 = &VAR_2;

 if (VAR_3[0] != '"')
  return;

 for (VAR_5 = VAR_2; VAR_5; VAR_6 = &VAR_5->next, VAR_5 = VAR_5->next)
 {
  if (FUNC_2(VAR_3, VAR_5->name) == 0)
  {
   if ((!VAR_4 && !VAR_5->connection)
    || (VAR_4 && VAR_5->connection
     && FUNC_2(VAR_4, VAR_5->connection) == 0))
   {
    *VAR_6 = VAR_5->next;
    if (VAR_5->connection)
     FUNC_0(VAR_5->connection);
    FUNC_0(VAR_5->name);
    FUNC_0(VAR_5);
    return;
   }
  }
 }
 FUNC_1(VAR_1, VAR_0, "descriptor \"%s\" does not exist", VAR_3);
}

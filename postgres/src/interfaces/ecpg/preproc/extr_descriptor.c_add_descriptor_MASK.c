
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor {char* name; char* connection; struct descriptor* next; } ;


 struct descriptor* VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(char *VAR_1, char *VAR_2)
{
 struct descriptor *VAR_3;

 if (VAR_1[0] != '"')
  return;

 VAR_3 = (struct descriptor *) FUNC_0(sizeof(struct descriptor));

 VAR_3->next = VAR_0;
 VAR_3->name = FUNC_0(FUNC_2(VAR_1) + 1);
 FUNC_1(VAR_3->name, VAR_1);
 if (VAR_2)
 {
  VAR_3->connection = FUNC_0(FUNC_2(VAR_2) + 1);
  FUNC_1(VAR_3->connection, VAR_2);
 }
 else
  VAR_3->connection = VAR_2;
 VAR_0 = VAR_3;
}

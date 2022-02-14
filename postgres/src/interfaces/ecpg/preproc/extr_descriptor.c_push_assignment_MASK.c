
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assignment {int value; scalar_t__ variable; struct assignment* next; } ;
typedef enum ECPGdtype { ____Placeholder_ECPGdtype } ECPGdtype ;


 struct assignment* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(char *VAR_1, enum ECPGdtype VAR_2)
{
 struct assignment *VAR_3 = (struct assignment *) FUNC_0(sizeof(struct assignment));

 VAR_3->next = VAR_0;
 VAR_3->variable = FUNC_0(FUNC_2(VAR_1) + 1);
 FUNC_1(VAR_3->variable, VAR_1);
 VAR_3->value = VAR_2;
 VAR_0 = VAR_3;
}

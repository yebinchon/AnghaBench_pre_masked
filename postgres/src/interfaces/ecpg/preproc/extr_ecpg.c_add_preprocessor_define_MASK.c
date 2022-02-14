
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _defines {char* olddef; char* newdef; int pertinent; struct _defines* next; int * used; } ;


 struct _defines* VAR_0 ;
 struct _defines* FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1)
{
 struct _defines *VAR_2 = VAR_0;
 char *VAR_3,
      *VAR_4 = FUNC_1(VAR_1);

 VAR_0 = FUNC_0(sizeof(struct _defines));


 VAR_3 = FUNC_2(VAR_4, '=');
 if (VAR_3 != ((void*)0))
 {
  char *VAR_5;


  for (VAR_5 = VAR_3 - 1; *VAR_5 == ' '; VAR_5--);
  VAR_5[1] = '\0';
  VAR_0->olddef = VAR_4;
  VAR_0->newdef = VAR_3 + 1;
 }
 else
 {
  VAR_0->olddef = VAR_4;
  VAR_0->newdef = FUNC_1("1");
 }
 VAR_0->pertinent = 1;
 VAR_0->used = ((void*)0);
 VAR_0->next = VAR_2;
}

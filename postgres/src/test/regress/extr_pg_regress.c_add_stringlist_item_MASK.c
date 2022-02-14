
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int str; } ;
typedef TYPE_1__ _stringlist ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

void
FUNC_2(_stringlist **VAR_0, const char *VAR_1)
{
 _stringlist *VAR_2 = FUNC_0(sizeof(_stringlist));
 _stringlist *VAR_3;

 VAR_2->str = FUNC_1(VAR_1);
 VAR_2->next = ((void*)0);
 if (*VAR_0 == ((void*)0))
  *VAR_0 = VAR_2;
 else
 {
  for (VAR_3 = *VAR_0; VAR_3->next; VAR_3 = VAR_3->next)
               ;
  VAR_3->next = VAR_2;
 }
}

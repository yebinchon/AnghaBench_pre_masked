
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* val; int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(PQconninfoOption *VAR_0)
{
 PQconninfoOption *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = VAR_0; VAR_1->keyword != ((void*)0); VAR_1++)
 {
  if (VAR_1->val != ((void*)0))
   FUNC_0(VAR_1->val);
 }
 FUNC_0(VAR_0);
}

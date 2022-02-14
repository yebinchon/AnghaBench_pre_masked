
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* str; struct TYPE_4__* next; } ;
typedef TYPE_1__ _stringlist ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(_stringlist **VAR_0)
{
 if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
  return;
 if ((*VAR_0)->next != ((void*)0))
  FUNC_1(&((*VAR_0)->next));
 FUNC_0((*VAR_0)->str);
 FUNC_0(*VAR_0);
 *VAR_0 = ((void*)0);
}

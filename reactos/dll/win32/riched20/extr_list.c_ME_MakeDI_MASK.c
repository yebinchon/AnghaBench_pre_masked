
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next; int prev; int type; } ;
typedef TYPE_1__ ME_DisplayItem ;
typedef int ME_DIType ;


 TYPE_1__* FUNC_0 (int) ;

ME_DisplayItem *FUNC_1(ME_DIType VAR_0)
{
  ME_DisplayItem *VAR_1 = FUNC_0(sizeof(*VAR_1));

  VAR_1->type = VAR_0;
  VAR_1->prev = *(VAR_1->next = ((void*)0));
  return VAR_1;
}

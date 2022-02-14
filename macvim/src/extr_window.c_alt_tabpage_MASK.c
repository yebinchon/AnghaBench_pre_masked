
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* tp_next; } ;
typedef TYPE_1__ tabpage_T ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static tabpage_T *
FUNC_0()
{
    tabpage_T *VAR_2;


    if (VAR_0->tp_next != ((void*)0))
 return VAR_0->tp_next;


    for (VAR_2 = VAR_1; VAR_2->tp_next != VAR_0; VAR_2 = VAR_2->tp_next)
 ;
    return VAR_2;
}

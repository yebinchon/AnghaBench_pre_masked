
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* sb_prev; } ;
typedef TYPE_1__ msgchunk_T ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1()
{
    msgchunk_T *VAR_1;

    while (VAR_0 != ((void*)0))
    {
 VAR_1 = VAR_0->sb_prev;
 FUNC_0(VAR_0);
 VAR_0 = VAR_1;
    }
}

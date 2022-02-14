
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ident; } ;
typedef TYPE_1__ pp_entry_t ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__** defines; } ;
typedef TYPE_2__ pp_def_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ) ;

void FUNC_2(void)
{
    int VAR_2;
    pp_entry_t *VAR_3;
    pp_def_state_t *VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        while ((VAR_3 = VAR_1->defines[VAR_2]) != ((void*)0)) FUNC_1( VAR_3->ident );
    }
    VAR_4 = VAR_1;
    VAR_1 = VAR_4->next;
    FUNC_0( VAR_4 );
}

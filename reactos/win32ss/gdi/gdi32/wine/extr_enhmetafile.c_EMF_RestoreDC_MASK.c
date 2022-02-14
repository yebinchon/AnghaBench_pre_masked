
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {scalar_t__ save_level; TYPE_2__ state; TYPE_2__* saved_state; } ;
typedef TYPE_1__ enum_emh_data ;
typedef scalar_t__ INT ;
typedef TYPE_2__ EMF_dc_state ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3( enum_emh_data *VAR_0, INT VAR_1 )
{
    if (FUNC_2(VAR_1) > VAR_0->save_level || VAR_1 == 0) return;

    if (VAR_1 < 0) VAR_1 = VAR_0->save_level + VAR_1 + 1;

    while (VAR_0->save_level >= VAR_1)
    {
        EMF_dc_state *VAR_2 = VAR_0->saved_state;
        VAR_0->saved_state = VAR_2->next;
        VAR_2->next = ((void*)0);
        if (--VAR_0->save_level < VAR_1)
            VAR_0->state = *VAR_2;
        FUNC_1( FUNC_0(), 0, VAR_2 );
    }
}

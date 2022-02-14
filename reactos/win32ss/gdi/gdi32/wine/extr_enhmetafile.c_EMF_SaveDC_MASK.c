
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {int save_level; TYPE_2__* saved_state; TYPE_2__ state; } ;
typedef TYPE_1__ enum_emh_data ;
typedef TYPE_2__ EMF_dc_state ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3( enum_emh_data *VAR_0 )
{
    EMF_dc_state *VAR_1 = FUNC_1( FUNC_0(), 0, sizeof(*VAR_1));
    if (VAR_1)
    {
        *VAR_1 = VAR_0->state;
        VAR_1->next = VAR_0->saved_state;
        VAR_0->saved_state = VAR_1;
        VAR_0->save_level++;
        FUNC_2("save_level %d\n", VAR_0->save_level);
    }
}

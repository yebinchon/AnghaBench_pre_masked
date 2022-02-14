
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int defines; } ;
typedef TYPE_1__ pp_def_state_t ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

int FUNC_2(void)
{
    pp_def_state_t *VAR_1 = FUNC_1( sizeof(*VAR_1) );
    if(!VAR_1)
        return 1;

    FUNC_0( VAR_1->defines, 0, sizeof(VAR_1->defines) );
    VAR_1->next = VAR_0;
    VAR_0 = VAR_1;
    return 0;
}

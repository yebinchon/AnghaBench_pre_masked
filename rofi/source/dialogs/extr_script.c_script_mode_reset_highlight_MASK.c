
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ private_data; } ;
struct TYPE_4__ {int * active_list; scalar_t__ num_active_list; int * urgent_list; scalar_t__ num_urgent_list; } ;
typedef TYPE_1__ ScriptModePrivateData ;
typedef TYPE_2__ Mode ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 ( Mode *VAR_0 )
{
    ScriptModePrivateData *VAR_1 = (ScriptModePrivateData *) VAR_0->private_data;

    VAR_1->num_urgent_list = 0;
    FUNC_0 ( VAR_1->urgent_list );
    VAR_1->urgent_list = ((void*)0);
    VAR_1->num_active_list = 0;
    FUNC_0 ( VAR_1->active_list );
    VAR_1->active_list = ((void*)0);
}

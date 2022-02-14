
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int app_name; struct TYPE_4__* link_source_name; struct TYPE_4__* link_type_name; struct TYPE_4__* source_name; struct TYPE_4__* type_name; } ;
typedef TYPE_1__ ps_struct_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(ps_struct_t *VAR_0)
{
    FUNC_2(FUNC_1(), 0, VAR_0->type_name);
    FUNC_2(FUNC_1(), 0, VAR_0->source_name);
    FUNC_2(FUNC_1(), 0, VAR_0->link_type_name);
    FUNC_2(FUNC_1(), 0, VAR_0->link_source_name);
    FUNC_0(VAR_0->app_name);
    FUNC_2(FUNC_1(), 0, VAR_0);
}

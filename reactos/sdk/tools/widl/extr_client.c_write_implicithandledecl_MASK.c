
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; int type; } ;
typedef TYPE_1__ var_t ;
struct TYPE_6__ {int attrs; } ;
typedef TYPE_2__ type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(type_t *VAR_2)
{
    const var_t *VAR_3 = FUNC_1(VAR_2->attrs, VAR_0);

    if (VAR_3)
    {
        FUNC_2( VAR_1, VAR_3->type, VAR_3->name );
        FUNC_0(VAR_1, ";\n\n");
    }
}

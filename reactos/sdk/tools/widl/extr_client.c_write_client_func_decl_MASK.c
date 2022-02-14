
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* type; } ;
typedef TYPE_1__ var_t ;
typedef int var_list_t ;
struct TYPE_11__ {int name; } ;
typedef TYPE_2__ type_t ;
struct TYPE_12__ {int attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (TYPE_6__*) ;
 int * FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,int const*,int ,int ,int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_8( const type_t *VAR_5, const var_t *VAR_6 )
{
    const char *VAR_7 = FUNC_1(VAR_6->type->attrs, VAR_0);
    const var_list_t *VAR_8 = FUNC_5(VAR_6->type);
    type_t *VAR_9 = FUNC_4(VAR_6->type);

    if (!VAR_7) VAR_7 = "__cdecl";
    FUNC_7(VAR_2, VAR_9);
    FUNC_0(VAR_2, " %s ", VAR_7);
    FUNC_0(VAR_2, "%s%d(\n", VAR_4, FUNC_2(VAR_6));
    VAR_3++;
    if (VAR_8)
        FUNC_6(VAR_2, VAR_8, VAR_5->name, 0, VAR_1);
    else
        FUNC_3("void");
    FUNC_0(VAR_2, ")\n");
    VAR_3--;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ stgclass; int attrs; int name; int type; scalar_t__ eval; } ;
typedef TYPE_2__ var_t ;
struct TYPE_9__ {TYPE_2__* var; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_3__ statement_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static statement_t *FUNC_7(var_t *VAR_5)
{
    statement_t *VAR_6 = FUNC_3(VAR_3);
    VAR_6->u.var = VAR_5;
    if (VAR_5->stgclass == VAR_0 && VAR_5->eval)
        FUNC_6("'%s' initialised and declared extern\n", VAR_5->name);
    if (FUNC_2(VAR_5))
    {
        if (VAR_5->eval)
            FUNC_4(VAR_5);
    }
    else if (FUNC_5(VAR_5->type) == VAR_4)
        FUNC_0(VAR_5->name, VAR_5->attrs);
    else if (VAR_5->stgclass == VAR_1 || VAR_5->stgclass == VAR_2)
        FUNC_1("instantiation of data is illegal\n");
    return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* property_list; } ;
typedef TYPE_1__ property_value_expression_t ;
struct TYPE_5__ {int type; int value; int name; struct TYPE_5__* next; } ;
typedef TYPE_2__ property_definition_t ;
typedef int jsstr_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_5(compiler_ctx_t *VAR_5, property_value_expression_t *VAR_6)
{
    property_definition_t *VAR_7;
    jsstr_t *VAR_8;
    HRESULT VAR_9;

    if(!FUNC_3(VAR_5, VAR_1))
        return VAR_0;

    for(VAR_7 = VAR_6->property_list; VAR_7; VAR_7 = VAR_7->next) {
        VAR_9 = FUNC_2(VAR_5, VAR_7->name, &VAR_8);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_1(VAR_5, VAR_7->value, VAR_4);
        if(FUNC_0(VAR_9))
            return VAR_9;

        VAR_9 = FUNC_4(VAR_5, VAR_2, VAR_8, VAR_7->type);
        if(FUNC_0(VAR_9))
            return VAR_9;
    }

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t vbdisp_invoke_type_t ;
struct TYPE_9__ {int * entries; int is_public; int name; } ;
typedef TYPE_1__ vbdisp_funcprop_desc_t ;
struct TYPE_10__ {int type; scalar_t__ is_public; struct TYPE_10__* next_prop_func; int name; } ;
typedef TYPE_2__ function_decl_t ;
struct TYPE_11__ {int code; } ;
typedef TYPE_3__ compile_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;






 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static HRESULT FUNC_4(compile_ctx_t *VAR_7, function_decl_t *VAR_8, vbdisp_funcprop_desc_t *VAR_9)
{
    vbdisp_invoke_type_t VAR_10;
    function_decl_t *VAR_11;
    HRESULT VAR_12;

    VAR_9->name = FUNC_2(VAR_7->code, VAR_8->name);
    if(!VAR_9->name)
        return VAR_1;

    for(VAR_11 = VAR_8; VAR_11; VAR_11 = VAR_11->next_prop_func) {
        switch(VAR_11->type) {
        case 132:
        case 128:
        case 131:
        case 133:
            VAR_10 = VAR_4;
            break;
        case 130:
            VAR_10 = VAR_5;
            break;
        case 129:
            VAR_10 = VAR_6;
            break;
        VAR_0;
        }

        FUNC_1(!VAR_9->entries[VAR_10]);

        if(VAR_11->is_public)
            VAR_9->is_public = VAR_3;

        VAR_12 = FUNC_3(VAR_7, VAR_11, VAR_9->entries+VAR_10);
        if(FUNC_0(VAR_12))
            return VAR_12;
    }

    return VAR_2;
}

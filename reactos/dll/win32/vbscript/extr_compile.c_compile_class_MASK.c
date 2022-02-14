
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ type; int name; struct TYPE_20__* next_prop_func; struct TYPE_20__* next; } ;
typedef TYPE_2__ function_decl_t ;
struct TYPE_21__ {scalar_t__ is_array; struct TYPE_21__* next; int is_public; int name; } ;
typedef TYPE_3__ dim_decl_t ;
struct TYPE_22__ {TYPE_5__* classes; int code; } ;
typedef TYPE_4__ compile_ctx_t ;
struct TYPE_23__ {int func_cnt; unsigned int class_initialize_id; unsigned int class_terminate_id; int prop_cnt; int array_cnt; struct TYPE_23__* next; void* array_descs; TYPE_1__* props; void* funcs; void* name; } ;
typedef TYPE_5__ class_desc_t ;
struct TYPE_24__ {TYPE_3__* props; TYPE_2__* funcs; int name; } ;
typedef TYPE_6__ class_decl_t ;
typedef char WCHAR ;
struct TYPE_19__ {scalar_t__ is_array; int is_public; void* name; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ,int) ;
 void* FUNC_3 (int ,int ) ;
 TYPE_5__* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*,void*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (void*,int ,int) ;
 int FUNC_14 (char const*,int ) ;

__attribute__((used)) static HRESULT FUNC_15(compile_ctx_t *VAR_6, class_decl_t *VAR_7)
{
    function_decl_t *VAR_8, *VAR_9;
    class_desc_t *VAR_10;
    dim_decl_t *VAR_11;
    unsigned VAR_12;
    HRESULT VAR_13;

    static const WCHAR VAR_14[] = {'c','l','a','s','s','_','i','n','i','t','i','a','l','i','z','e',0};
    static const WCHAR VAR_15[] = {'c','l','a','s','s','_','t','e','r','m','i','n','a','t','e',0};

    if(FUNC_11(VAR_6, VAR_7->name) || FUNC_12(VAR_6, VAR_7->name)
            || FUNC_10(VAR_6, VAR_7->name, VAR_2) || FUNC_9(VAR_6, VAR_7->name)) {
        FUNC_1("%s: redefinition\n", FUNC_6(VAR_7->name));
        return VAR_0;
    }

    VAR_10 = FUNC_4(VAR_6->code, sizeof(*VAR_10));
    if(!VAR_10)
        return VAR_1;

    VAR_10->name = FUNC_3(VAR_6->code, VAR_7->name);
    if(!VAR_10->name)
        return VAR_1;

    VAR_10->func_cnt = 1;

    for(VAR_8 = VAR_7->funcs; VAR_8; VAR_8 = VAR_8->next) {
        for(VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->next_prop_func) {
            if(VAR_9->type == VAR_3)
                break;
        }
        if(!VAR_9)
            VAR_10->func_cnt++;
    }

    VAR_10->funcs = FUNC_2(VAR_6->code, VAR_10->func_cnt*sizeof(*VAR_10->funcs));
    if(!VAR_10->funcs)
        return VAR_1;
    FUNC_13(VAR_10->funcs, 0, VAR_10->func_cnt*sizeof(*VAR_10->funcs));

    for(VAR_8 = VAR_7->funcs, VAR_12=1; VAR_8; VAR_8 = VAR_8->next, VAR_12++) {
        for(VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->next_prop_func) {
            if(VAR_9->type == VAR_3) {
                VAR_12--;
                break;
            }
        }

        if(!FUNC_14(VAR_14, VAR_8->name)) {
            if(VAR_8->type != VAR_4) {
                FUNC_1("class initializer is not sub\n");
                return VAR_0;
            }

            VAR_10->class_initialize_id = VAR_12;
        }else if(!FUNC_14(VAR_15, VAR_8->name)) {
            if(VAR_8->type != VAR_4) {
                FUNC_1("class terminator is not sub\n");
                return VAR_0;
            }

            VAR_10->class_terminate_id = VAR_12;
        }

        VAR_13 = FUNC_5(VAR_6, VAR_8, VAR_10->funcs + (VAR_9 ? 0 : VAR_12));
        if(FUNC_0(VAR_13))
            return VAR_13;
    }

    for(VAR_11 = VAR_7->props; VAR_11; VAR_11 = VAR_11->next)
        VAR_10->prop_cnt++;

    VAR_10->props = FUNC_2(VAR_6->code, VAR_10->prop_cnt*sizeof(*VAR_10->props));
    if(!VAR_10->props)
        return VAR_1;

    for(VAR_11 = VAR_7->props, VAR_12=0; VAR_11; VAR_11 = VAR_11->next, VAR_12++) {
        if(FUNC_8(VAR_10, VAR_11->name)) {
            FUNC_1("Property %s redefined\n", FUNC_6(VAR_11->name));
            return VAR_0;
        }

        VAR_10->props[VAR_12].name = FUNC_3(VAR_6->code, VAR_11->name);
        if(!VAR_10->props[VAR_12].name)
            return VAR_1;

        VAR_10->props[VAR_12].is_public = VAR_11->is_public;
        VAR_10->props[VAR_12].is_array = VAR_11->is_array;

        if(VAR_11->is_array)
            VAR_10->array_cnt++;
    }

    if(VAR_10->array_cnt) {
        VAR_10->array_descs = FUNC_2(VAR_6->code, VAR_10->array_cnt*sizeof(*VAR_10->array_descs));
        if(!VAR_10->array_descs)
            return VAR_1;

        for(VAR_11 = VAR_7->props, VAR_12=0; VAR_11; VAR_11 = VAR_11->next) {
            if(VAR_11->is_array) {
                VAR_13 = FUNC_7(VAR_6, VAR_11, VAR_10->array_descs + VAR_12++);
                if(FUNC_0(VAR_13))
                    return VAR_13;
            }
        }
    }

    VAR_10->next = VAR_6->classes;
    VAR_6->classes = VAR_10;
    return VAR_5;
}

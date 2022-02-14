
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int statement_t ;
struct TYPE_7__ {int hres; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef scalar_t__ function_type_t ;
struct TYPE_8__ {int is_public; int * next_prop_func; int * next; int * body; int * args; scalar_t__ type; int const* name; } ;
typedef TYPE_2__ function_decl_t ;
typedef int arg_decl_t ;
typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static function_decl_t *FUNC_2(parser_ctx_t *VAR_5, const WCHAR *VAR_6, function_type_t VAR_7,
        unsigned VAR_8, arg_decl_t *VAR_9, statement_t *VAR_10)
{
    function_decl_t *VAR_11;

    if(VAR_8 & VAR_3) {
        if(VAR_7 == VAR_2) {
            VAR_7 = VAR_1;
        }else {
            FUNC_0("Invalid default property\n");
            VAR_5->hres = VAR_0;
            return ((void*)0);
        }
    }

    VAR_11 = FUNC_1(VAR_5, sizeof(*VAR_11));
    if(!VAR_11)
        return ((void*)0);

    VAR_11->name = VAR_6;
    VAR_11->type = VAR_7;
    VAR_11->is_public = !(VAR_8 & VAR_4);
    VAR_11->args = VAR_9;
    VAR_11->body = VAR_10;
    VAR_11->next = ((void*)0);
    VAR_11->next_prop_func = ((void*)0);
    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* code; char const* ptr; char const* end; void* parse_complete; int hres; int is_html; void* option_explicit; int * class_decls; int * stats_tail; int stats; scalar_t__ last_nl; int last_token; int heap; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*) ;
 int VAR_3 ;

HRESULT FUNC_7(parser_ctx_t *VAR_4, const WCHAR *VAR_5, const WCHAR *VAR_6)
{
    static const WCHAR VAR_7[] = {'<','/','s','c','r','i','p','t','>',0};

    VAR_4->code = VAR_4->ptr = VAR_5;
    VAR_4->end = VAR_4->code + FUNC_6(VAR_4->code);

    FUNC_3(&VAR_4->heap);

    VAR_4->parse_complete = VAR_1;
    VAR_4->hres = VAR_2;

    VAR_4->last_token = VAR_3;
    VAR_4->last_nl = 0;
    VAR_4->stats = *(VAR_4->stats_tail = ((void*)0));
    VAR_4->class_decls = ((void*)0);
    VAR_4->option_explicit = VAR_1;
    VAR_4->is_html = VAR_6 && !FUNC_5(VAR_6, VAR_7);

    FUNC_4(VAR_4);

    if(FUNC_0(VAR_4->hres))
        return VAR_4->hres;
    if(!VAR_4->parse_complete) {
        FUNC_1("parser failed around %s\n", FUNC_2(VAR_4->code+20 > VAR_4->ptr ? VAR_4->code : VAR_4->ptr-20));
        return VAR_0;
    }

    return VAR_2;
}

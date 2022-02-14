
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int source_elements_t ;
struct TYPE_3__ {int hres; int lexer_error; int * source; } ;
typedef TYPE_1__ parser_ctx_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(parser_ctx_t *VAR_1, source_elements_t *VAR_2)
{
    VAR_1->source = VAR_2;
    if(!VAR_1->lexer_error)
        VAR_1->hres = VAR_0;
}

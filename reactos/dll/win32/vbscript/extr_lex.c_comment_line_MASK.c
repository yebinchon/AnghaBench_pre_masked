
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end; int ptr; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char WCHAR ;


 int FUNC_0 (int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(parser_ctx_t *VAR_1)
{
    static const WCHAR VAR_2[] = {'\n','\r',0};
    VAR_1->ptr = FUNC_0(VAR_1->ptr, VAR_2);
    if(VAR_1->ptr)
        VAR_1->ptr++;
    else
        VAR_1->ptr = VAR_1->end;
    return VAR_0;
}

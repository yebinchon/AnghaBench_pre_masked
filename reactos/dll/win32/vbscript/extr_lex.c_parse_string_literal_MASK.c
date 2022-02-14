
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; char* end; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char WCHAR ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(parser_ctx_t *VAR_1, const WCHAR **VAR_2)
{
    const WCHAR *VAR_3 = ++VAR_1->ptr;
    WCHAR *VAR_4;
    int VAR_5 = 0;

    while(VAR_1->ptr < VAR_1->end) {
        if(*VAR_1->ptr == '\n') {
            FUNC_0("newline inside string literal\n");
            return 0;
        }

       if(*VAR_1->ptr == '"') {
            if(VAR_1->ptr[1] != '"')
                break;
            VAR_5--;
            VAR_1->ptr++;
        }
        VAR_1->ptr++;
    }

    if(VAR_1->ptr == VAR_1->end) {
        FUNC_0("unterminated string literal\n");
        return 0;
    }

    VAR_5 += VAR_1->ptr-VAR_3;

    *VAR_2 = VAR_4 = FUNC_1(VAR_1, (VAR_5+1)*sizeof(WCHAR));
    if(!VAR_4)
        return 0;

    while(VAR_3 < VAR_1->ptr) {
        if(*VAR_3 == '"')
            VAR_3++;
        *VAR_4++ = *VAR_3++;
    }

    *VAR_4 = 0;
    VAR_1->ptr++;
    return VAR_0;
}

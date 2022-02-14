
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* ptr; char* end; scalar_t__ last_token; int is_html; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char WCHAR ;


 int FUNC_0 (char*,char,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 int FUNC_6 (TYPE_1__*,void*) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 int FUNC_8 (TYPE_1__*,void*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(void *VAR_7, parser_ctx_t *VAR_8)
{
    WCHAR VAR_9;

    FUNC_9(VAR_8);
    if(VAR_8->ptr == VAR_8->end)
        return VAR_8->last_token == VAR_5 ? VAR_1 : VAR_5;

    VAR_9 = *VAR_8->ptr;

    if('0' <= VAR_9 && VAR_9 <= '9')
        return FUNC_7(VAR_8, VAR_7);

    if(FUNC_4(VAR_9)) {
        int VAR_10 = FUNC_1(VAR_8);
        if(!VAR_10)
            return FUNC_6(VAR_8, VAR_7);
        if(VAR_10 != VAR_6)
            return VAR_10;
        VAR_9 = '\'';
    }

    switch(VAR_9) {
    case '\n':
    case '\r':
        VAR_8->ptr++;
        return VAR_5;
    case '\'':
        return FUNC_2(VAR_8);
    case ':':
    case ')':
    case ',':
    case '=':
    case '+':
    case '*':
    case '/':
    case '^':
    case '\\':
    case '.':
    case '_':
        return *VAR_8->ptr++;
    case '-':
        if(VAR_8->is_html && VAR_8->ptr[1] == '-' && VAR_8->ptr[2] == '>')
            return FUNC_2(VAR_8);
        VAR_8->ptr++;
        return '-';
    case '(':




        VAR_8->ptr++;
        FUNC_9(VAR_8);
        if(*VAR_8->ptr == ')') {
            VAR_8->ptr++;
            return VAR_0;
        }
        return '(';
    case '"':
        return FUNC_8(VAR_8, VAR_7);
    case '&':
        if(*++VAR_8->ptr == 'h' || *VAR_8->ptr == 'H')
            return FUNC_5(VAR_8, VAR_7);
        return '&';
    case '<':
        switch(*++VAR_8->ptr) {
        case '>':
            VAR_8->ptr++;
            return VAR_4;
        case '=':
            VAR_8->ptr++;
            return VAR_3;
        case '!':
            if(VAR_8->is_html && VAR_8->ptr[1] == '-' && VAR_8->ptr[2] == '-')
                return FUNC_2(VAR_8);
        }
        return '<';
    case '>':
        if(*++VAR_8->ptr == '=') {
            VAR_8->ptr++;
            return VAR_2;
        }
        return '>';
    default:
        FUNC_0("Unhandled char %c in %s\n", *VAR_8->ptr, FUNC_3(VAR_8->ptr));
    }

    return 0;
}

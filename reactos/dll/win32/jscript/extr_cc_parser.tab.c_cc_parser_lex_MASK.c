
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* ptr; } ;
typedef TYPE_1__ parser_ctx_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*,void*) ;

__attribute__((used)) static int FUNC_3(void *VAR_12, parser_ctx_t *VAR_13)
{
    int VAR_14;

    VAR_14 = FUNC_2(VAR_13, VAR_12);
    if(VAR_14)
        return VAR_14 > 0 ? VAR_1 : -1;

    switch(*VAR_13->ptr) {
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '~':
    case '%':
    case '^':
        return *VAR_13->ptr++;
    case '=':
         if(*++VAR_13->ptr == '=') {
             if(*++VAR_13->ptr == '=') {
                 VAR_13->ptr++;
                 return VAR_3;
             }
             return VAR_2;
         }
         break;
    case '!':
        if(*++VAR_13->ptr == '=') {
            if(*++VAR_13->ptr == '=') {
                VAR_13->ptr++;
                return VAR_8;
            }
            return VAR_7;
        }
        return '!';
    case '<':
        switch(*++VAR_13->ptr) {
        case '<':
            VAR_13->ptr++;
            return VAR_6;
        case '=':
            VAR_13->ptr++;
            return VAR_5;
        default:
            return '<';
        }
    case '>':
        switch(*++VAR_13->ptr) {
        case '>':
            if(*++VAR_13->ptr == '>') {
                VAR_13->ptr++;
                return VAR_10;
            }
            return VAR_11;
        case '=':
            VAR_13->ptr++;
            return VAR_4;
        default:
            return '>';
        }
    case '|':
        if(*++VAR_13->ptr == '|') {
            VAR_13->ptr++;
            return VAR_9;
        }
        return '|';
    case '&':
        if(*++VAR_13->ptr == '&') {
            VAR_13->ptr++;
            return VAR_0;
        }
        return '&';
    }

    FUNC_0("Failed to interpret %s\n", FUNC_1(VAR_13->ptr));
    return -1;
}

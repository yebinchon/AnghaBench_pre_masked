
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int* ptr; int* end; scalar_t__ nl; int is_html; scalar_t__ implicit_nl_semicolon; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef int literal_t ;
typedef int WCHAR ;
typedef int HRESULT ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (char*,char,char) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int * FUNC_6 (TYPE_1__*,double) ;
 int FUNC_7 (int**,int*,double*) ;
 int FUNC_8 (TYPE_1__*,void*) ;
 int FUNC_9 (TYPE_1__*,double*) ;
 int FUNC_10 (TYPE_1__*,void*,char) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static int FUNC_14(parser_ctx_t *VAR_36, void *VAR_37)
{
    do {
        if(!FUNC_13(VAR_36))
            return VAR_28;
    }while(FUNC_11(VAR_36) || FUNC_12(VAR_36));

    if(VAR_36->implicit_nl_semicolon) {
        if(VAR_36->nl)
            return ';';
        VAR_36->implicit_nl_semicolon = VAR_22;
    }

    if(FUNC_3(*VAR_36->ptr)) {
        int VAR_38 = FUNC_2(VAR_36, VAR_37);
        if(VAR_38)
            return VAR_38;

        return FUNC_8(VAR_36, VAR_37);
    }

    if(FUNC_4(*VAR_36->ptr)) {
        double VAR_39;

        if(!FUNC_9(VAR_36, &VAR_39))
            return -1;

        *(literal_t**)VAR_37 = FUNC_6(VAR_36, VAR_39);
        return VAR_32;
    }

    switch(*VAR_36->ptr) {
    case '{':
    case '(':
    case ')':
    case '[':
    case ']':
    case ';':
    case ',':
    case '~':
    case '?':
        return *VAR_36->ptr++;

    case '}':
        *(const WCHAR**)VAR_37 = VAR_36->ptr++;
        return '}';

    case '.':
        if(VAR_36->ptr+1 < VAR_36->end && FUNC_4(VAR_36->ptr[1])) {
            double VAR_40;
            HRESULT VAR_41;
            VAR_41 = FUNC_7(&VAR_36->ptr, VAR_36->end, &VAR_40);
            if(FUNC_0(VAR_41)) {
                FUNC_5(VAR_36, VAR_41);
                return -1;
            }
            *(literal_t**)VAR_37 = FUNC_6(VAR_36, VAR_40);
            return VAR_32;
        }
        VAR_36->ptr++;
        return '.';

    case '<':
        if(++VAR_36->ptr == VAR_36->end) {
            *(int*)VAR_37 = VAR_15;
            return VAR_34;
        }

        switch(*VAR_36->ptr) {
        case '=':
            VAR_36->ptr++;
            *(int*)VAR_37 = VAR_16;
            return VAR_34;
        case '<':
            if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_3;
                return VAR_26;
            }
            *(int*)VAR_37 = VAR_17;
            return VAR_35;
        default:
            *(int*)VAR_37 = VAR_15;
            return VAR_34;
        }

    case '>':
        if(++VAR_36->ptr == VAR_36->end) {
            *(int*)VAR_37 = VAR_13;
            return VAR_34;
        }

        switch(*VAR_36->ptr) {
        case '=':
            VAR_36->ptr++;
            *(int*)VAR_37 = VAR_14;
            return VAR_34;
        case '>':
            if(++VAR_36->ptr < VAR_36->end) {
                if(*VAR_36->ptr == '=') {
                    VAR_36->ptr++;
                    *(int*)VAR_37 = VAR_8;
                    return VAR_26;
                }
                if(*VAR_36->ptr == '>') {
                    if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
                        VAR_36->ptr++;
                        *(int*)VAR_37 = VAR_7;
                        return VAR_26;
                    }
                    *(int*)VAR_37 = VAR_20;
                    return VAR_34;
                }
            }
            *(int*)VAR_37 = VAR_21;
            return VAR_35;
        default:
            *(int*)VAR_37 = VAR_13;
            return VAR_34;
        }

    case '+':
        VAR_36->ptr++;
        if(VAR_36->ptr < VAR_36->end) {
            switch(*VAR_36->ptr) {
            case '+':
                VAR_36->ptr++;
                return VAR_31;
            case '=':
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_0;
                return VAR_26;
            }
        }
        return '+';

    case '-':
        VAR_36->ptr++;
        if(VAR_36->ptr < VAR_36->end) {
            switch(*VAR_36->ptr) {
            case '-':
                VAR_36->ptr++;
                if(VAR_36->is_html && VAR_36->nl && VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '>') {
                    VAR_36->ptr++;
                    return VAR_30;
                }
                return VAR_27;
            case '=':
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_9;
                return VAR_26;
            }
        }
        return '-';

    case '*':
        if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
            VAR_36->ptr++;
            *(int*)VAR_37 = VAR_5;
            return VAR_26;
        }
        return '*';

    case '%':
        if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
            VAR_36->ptr++;
            *(int*)VAR_37 = VAR_4;
            return VAR_26;
        }
        return '%';

    case '&':
        if(++VAR_36->ptr < VAR_36->end) {
            switch(*VAR_36->ptr) {
            case '=':
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_1;
                return VAR_26;
            case '&':
                VAR_36->ptr++;
                return VAR_25;
            }
        }
        return '&';

    case '|':
        if(++VAR_36->ptr < VAR_36->end) {
            switch(*VAR_36->ptr) {
            case '=':
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_6;
                return VAR_26;
            case '|':
                VAR_36->ptr++;
                return VAR_33;
            }
        }
        return '|';

    case '^':
        if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
            VAR_36->ptr++;
            *(int*)VAR_37 = VAR_10;
            return VAR_26;
        }
        return '^';

    case '!':
        if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
            if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_19;
                return VAR_29;
            }
            *(int*)VAR_37 = VAR_18;
            return VAR_29;
        }
        return '!';

    case '=':
        if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
            if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == '=') {
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_12;
                return VAR_29;
            }
            *(int*)VAR_37 = VAR_11;
            return VAR_29;
        }
        return '=';

    case '/':
        if(++VAR_36->ptr < VAR_36->end) {
            if(*VAR_36->ptr == '=') {
                VAR_36->ptr++;
                *(int*)VAR_37 = VAR_2;
                return VAR_24;
            }
        }
        return '/';

    case ':':
        if(++VAR_36->ptr < VAR_36->end && *VAR_36->ptr == ':') {
            VAR_36->ptr++;
            return VAR_23;
        }
        return ':';

    case '\"':
    case '\'':
        return FUNC_10(VAR_36, VAR_37, *VAR_36->ptr);

    case '_':
    case '$':
        return FUNC_8(VAR_36, VAR_37);

    case '@':
        return '@';
    }

    FUNC_1("unexpected char '%c' %d\n", *VAR_36->ptr, *VAR_36->ptr);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; char const* end; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (char const**,char const*,double*) ;

__attribute__((used)) static BOOL FUNC_8(parser_ctx_t *VAR_3, double *VAR_4)
{
    HRESULT VAR_5;

    if(*VAR_3->ptr == '0') {
        VAR_3->ptr++;

        if(*VAR_3->ptr == 'x' || *VAR_3->ptr == 'X') {
            double VAR_6 = 0;
            int VAR_7;
            if(++VAR_3->ptr == VAR_3->end) {
                FUNC_0("unexpected end of file\n");
                return VAR_0;
            }

            while(VAR_3->ptr < VAR_3->end && (VAR_7 = FUNC_3(*VAR_3->ptr)) != -1) {
                VAR_6 = VAR_6*16 + VAR_7;
                VAR_3->ptr++;
            }

            if(VAR_3->ptr < VAR_3->end && FUNC_4(*VAR_3->ptr)) {
                FUNC_2("unexpected identifier char\n");
                FUNC_6(VAR_3, VAR_1);
                return VAR_0;
            }

            *VAR_4 = VAR_6;
            return VAR_2;
        }

        if(FUNC_5(*VAR_3->ptr)) {
            unsigned VAR_8 = 8;
            const WCHAR *VAR_9;
            double VAR_10 = 0;

            for(VAR_9 = VAR_3->ptr; VAR_9 < VAR_3->end && FUNC_5(*VAR_9); VAR_9++) {
                if(*VAR_9 > '7') {
                    VAR_8 = 10;
                    break;
                }
            }

            do {
                VAR_10 = VAR_10*VAR_8 + *VAR_3->ptr-'0';
            }while(++VAR_3->ptr < VAR_3->end && FUNC_5(*VAR_3->ptr));


            if(VAR_3->ptr < VAR_3->end && (FUNC_4(*VAR_3->ptr) || *VAR_3->ptr == '.')) {
                FUNC_2("wrong char after octal literal: '%c'\n", *VAR_3->ptr);
                FUNC_6(VAR_3, VAR_1);
                return VAR_0;
            }

            *VAR_4 = VAR_10;
            return VAR_2;
        }

        if(FUNC_4(*VAR_3->ptr)) {
            FUNC_2("wrong char after zero\n");
            FUNC_6(VAR_3, VAR_1);
            return VAR_0;
        }
    }

    VAR_5 = FUNC_7(&VAR_3->ptr, VAR_3->end, VAR_4);
    if(FUNC_1(VAR_5)) {
        FUNC_6(VAR_3, VAR_5);
        return VAR_0;
    }

    return VAR_2;
}

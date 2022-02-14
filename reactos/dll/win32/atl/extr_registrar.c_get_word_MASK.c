
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* str; scalar_t__ len; } ;
typedef TYPE_1__ strbuf ;
typedef char* LPCOLESTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,TYPE_1__*,int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static HRESULT FUNC_4(LPCOLESTR *VAR_2, strbuf *VAR_3)
{
    LPCOLESTR VAR_4, VAR_5 = *VAR_2;

    VAR_3->len = 0;
    VAR_3->str[0] = '\0';

    while(FUNC_1(*VAR_5))
        VAR_5++;
    VAR_4 = VAR_5;
    if(!*VAR_4) {
        *VAR_2 = VAR_4;
        return VAR_1;
    }

    if(*VAR_4 == '}' || *VAR_4 == '=') {
        FUNC_2(VAR_4++, VAR_3, 1);
    }else if(*VAR_4 == '\'') {
        VAR_5 = ++VAR_4;
        VAR_4 = FUNC_3(VAR_4, '\'');
        if(!VAR_4) {
            FUNC_0("Unexpected end of script\n");
            *VAR_2 = VAR_4;
            return VAR_0;
        }
        FUNC_2(VAR_5, VAR_3, VAR_4-VAR_5);
        VAR_4++;
    }else {
        while(*VAR_4 && !FUNC_1(*VAR_4))
            VAR_4++;
        FUNC_2(VAR_5, VAR_3, VAR_4-VAR_5);
    }

    while(FUNC_1(*VAR_4))
        VAR_4++;
    *VAR_2 = VAR_4;
    return VAR_1;
}

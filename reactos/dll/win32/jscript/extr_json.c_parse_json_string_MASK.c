
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; } ;
typedef TYPE_1__ json_parse_ctx_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,size_t*) ;

__attribute__((used)) static HRESULT FUNC_5(json_parse_ctx_t *VAR_3, WCHAR **VAR_4)
{
    const WCHAR *VAR_5 = ++VAR_3->ptr;
    size_t VAR_6;
    WCHAR *VAR_7;

    while(*VAR_3->ptr && *VAR_3->ptr != '"') {
        if(*VAR_3->ptr++ == '\\')
            VAR_3->ptr++;
    }
    if(!*VAR_3->ptr) {
        FUNC_0("unterminated string\n");
        return VAR_0;
    }

    VAR_6 = VAR_3->ptr-VAR_5;
    VAR_7 = FUNC_1((VAR_6+1)*sizeof(WCHAR));
    if(!VAR_7)
        return VAR_1;
    if(VAR_6)
        FUNC_3(VAR_7, VAR_5, VAR_6*sizeof(WCHAR));

    if(!FUNC_4(VAR_7, &VAR_6)) {
        FUNC_0("unescape failed\n");
        FUNC_2(VAR_7);
        return VAR_0;
    }

    VAR_7[VAR_6] = 0;
    VAR_3->ptr++;
    *VAR_4 = VAR_7;
    return VAR_2;
}

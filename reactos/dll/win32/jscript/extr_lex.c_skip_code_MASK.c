
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* ptr; int cc_if_depth; int ccval; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char WCHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(parser_ctx_t *VAR_2, BOOL VAR_3)
{
    int VAR_4 = 1;
    const WCHAR *VAR_5;

    while(1) {
        VAR_5 = FUNC_6(VAR_2->ptr, '@');
        if(!VAR_5) {
            FUNC_0("No @end\n");
            return FUNC_3(VAR_2, VAR_0);
        }
        VAR_2->ptr = VAR_5+1;

        if(!FUNC_1(VAR_2, L"end", ((void*)0))) {
            if(--VAR_4)
                continue;
            return 0;
        }

        if(VAR_3 && !FUNC_1(VAR_2, L"elif", ((void*)0))) {
            if(VAR_4 > 1)
                continue;

            if(!FUNC_5(VAR_2) || *VAR_2->ptr != '(')
                return FUNC_3(VAR_2, VAR_1);

            if(!FUNC_4(VAR_2))
                return -1;

            if(!FUNC_2(VAR_2->ccval))
                continue;


            VAR_2->cc_if_depth++;
            return 0;
        }

        if(VAR_3 && !FUNC_1(VAR_2, L"else", ((void*)0))) {
            if(VAR_4 > 1)
                continue;


            VAR_2->cc_if_depth++;
            return 0;
        }

        if(!FUNC_1(VAR_2, L"if", ((void*)0))) {
            VAR_4++;
            continue;
        }

        VAR_2->ptr++;
    }
}

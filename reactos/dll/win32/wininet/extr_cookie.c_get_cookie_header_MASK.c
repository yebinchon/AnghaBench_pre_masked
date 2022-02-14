
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int string_len; int cookies; scalar_t__ cnt; int member_0; } ;
typedef TYPE_1__ cookie_set_t ;
typedef int cookieW ;
typedef char WCHAR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,TYPE_1__*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char const*) ;

DWORD FUNC_8(const WCHAR *VAR_4, const WCHAR *VAR_5, WCHAR **VAR_6)
{
    cookie_set_t VAR_7 = {0};
    DWORD VAR_8;

    static const WCHAR VAR_9[] = {'C','o','o','k','i','e',':',' '};

    FUNC_0(&VAR_3);

    VAR_8 = FUNC_3(FUNC_7(VAR_4), FUNC_7(VAR_5), VAR_2, &VAR_7);
    if(VAR_8 != VAR_1) {
        FUNC_1(&VAR_3);
        return VAR_8;
    }

    if(VAR_7.cnt) {
        WCHAR *VAR_10, *VAR_11;

        VAR_11 = VAR_10 = FUNC_4(sizeof(VAR_9) + (VAR_7.string_len + 3 ) * sizeof(WCHAR));
        if(VAR_10) {
            FUNC_6(VAR_11, VAR_9, sizeof(VAR_9));
            VAR_11 += sizeof(VAR_9)/sizeof(*VAR_9);

            FUNC_2(&VAR_7, VAR_11);
            FUNC_5(VAR_7.cookies);
            VAR_11 += VAR_7.string_len;

            *VAR_11++ = '\r';
            *VAR_11++ = '\n';
            *VAR_11++ = 0;

            *VAR_6 = VAR_10;
        }else {
            VAR_8 = VAR_0;
        }
    }else {
        *VAR_6 = ((void*)0);
    }

    FUNC_1(&VAR_3);
    return VAR_8;
}

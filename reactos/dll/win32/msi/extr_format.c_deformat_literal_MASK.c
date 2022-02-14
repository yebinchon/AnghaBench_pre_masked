
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_18__ {void* propfailed; } ;
struct TYPE_17__ {int len; int n; } ;
typedef char* LPCWSTR ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_2__ FORMAT ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__* FUNC_0 (TYPE_2__*,TYPE_1__*,int*) ;
 scalar_t__* FUNC_1 (TYPE_2__*,TYPE_1__*,int*) ;
 scalar_t__* FUNC_2 (TYPE_2__*,TYPE_1__*,void*,int*) ;
 scalar_t__* FUNC_3 (TYPE_2__*,TYPE_1__*,int*) ;
 scalar_t__* FUNC_4 (TYPE_2__*,TYPE_1__*,int*) ;
 char* FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__* FUNC_6 (int) ;

__attribute__((used)) static WCHAR *FUNC_7( FORMAT *VAR_3, FORMSTR *VAR_4, BOOL *VAR_5,
                                int *VAR_6, int *VAR_7 )
{
    LPCWSTR VAR_8 = FUNC_5(VAR_3, VAR_4);
    WCHAR *VAR_9 = ((void*)0);
    char VAR_10 = VAR_8[0];

    if (VAR_10 == '\\')
    {
        VAR_4->n++;
        if (VAR_4->len == 1)
        {
            VAR_4->len = 0;
            VAR_9 = ((void*)0);
        }
        else
        {
            VAR_4->len = 1;
            VAR_9 = FUNC_4( VAR_3, VAR_4, VAR_7 );
        }
    }
    else if (VAR_10 == '~')
    {
        if (VAR_4->len != 1)
            VAR_9 = ((void*)0);
        else if ((VAR_9 = FUNC_6( sizeof(WCHAR) )))
        {
            *VAR_9 = 0;
            *VAR_7 = 0;
        }
    }
    else if (VAR_10 == '%' || VAR_10 == '#' || VAR_10 == '!' || VAR_10 == '$')
    {
        VAR_4->n++;
        VAR_4->len--;

        switch (VAR_10)
        {
        case '%':
            VAR_9 = FUNC_1( VAR_3, VAR_4, VAR_7 ); break;
        case '#':
            VAR_9 = FUNC_2( VAR_3, VAR_4, VAR_0, VAR_7 ); break;
        case '!':
            VAR_9 = FUNC_2( VAR_3, VAR_4, VAR_2, VAR_7 ); break;
        case '$':
            VAR_9 = FUNC_0( VAR_3, VAR_4, VAR_7 ); break;
        }

        *VAR_6 = VAR_1;
    }
    else
    {
        VAR_9 = FUNC_3( VAR_3, VAR_4, VAR_7 );
        *VAR_6 = VAR_1;

        if (VAR_9)
            *VAR_5 = VAR_2;
        else
            VAR_3->propfailed = VAR_2;
    }

    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nCustHeaders; char* version; char* statusText; int headers_section; TYPE_1__* custHeaders; int status_code; } ;
typedef TYPE_2__ http_request_t ;
typedef char WCHAR ;
struct TYPE_4__ {int wFlags; char* lpszField; char* lpszValue; } ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 char* FUNC_1 (char const**,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 char** FUNC_5 (int) ;
 int FUNC_6 (char const**) ;
 int FUNC_7 (char*,char const*,int ) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static WCHAR* FUNC_9(http_request_t *VAR_2, BOOL VAR_3)
{
    static const WCHAR VAR_4[] = { ':',' ',0 };
    static const WCHAR VAR_5[] = { '\r',0 };
    static const WCHAR VAR_6[] = { '\n',0 };
    static const WCHAR VAR_7[] = { ' ','%','u',' ',0 };
    const WCHAR **VAR_8;
    WCHAR *VAR_9, VAR_10[14];
    DWORD VAR_11, VAR_12 = 0;

    FUNC_0( &VAR_2->headers_section );

    if (!(VAR_8 = FUNC_5( (VAR_2->nCustHeaders * 5 + 8) * sizeof(WCHAR *) )))
    {
        FUNC_2( &VAR_2->headers_section );
        return ((void*)0);
    }

    if (VAR_2->status_code)
    {
        VAR_8[VAR_12++] = VAR_2->version;
        FUNC_7(VAR_10, VAR_7, VAR_2->status_code);
        VAR_8[VAR_12++] = VAR_10;
        VAR_8[VAR_12++] = VAR_2->statusText;
        if (VAR_3)
            VAR_8[VAR_12++] = VAR_5;
        VAR_8[VAR_12++] = VAR_6;
    }

    for(VAR_11 = 0; VAR_11 < VAR_2->nCustHeaders; VAR_11++)
    {
        if(!(VAR_2->custHeaders[VAR_11].wFlags & VAR_0)
                && FUNC_8(VAR_2->custHeaders[VAR_11].lpszField, VAR_1))
        {
            VAR_8[VAR_12++] = VAR_2->custHeaders[VAR_11].lpszField;
            VAR_8[VAR_12++] = VAR_4;
            VAR_8[VAR_12++] = VAR_2->custHeaders[VAR_11].lpszValue;
            if(VAR_3)
                VAR_8[VAR_12++] = VAR_5;
            VAR_8[VAR_12++] = VAR_6;

            FUNC_3("Adding custom header %s (%s)\n",
                    FUNC_4(VAR_2->custHeaders[VAR_11].lpszField),
                    FUNC_4(VAR_2->custHeaders[VAR_11].lpszValue));
        }
    }
    if(VAR_3)
        VAR_8[VAR_12++] = VAR_5;
    VAR_8[VAR_12++] = VAR_6;
    VAR_8[VAR_12] = ((void*)0);

    VAR_9 = FUNC_1(VAR_8, 0);
    FUNC_6(VAR_8);
    FUNC_2( &VAR_2->headers_section );
    return VAR_9;
}

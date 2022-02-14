
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nCustHeaders; int headers_section; TYPE_1__* custHeaders; } ;
typedef TYPE_2__ http_request_t ;
typedef char WCHAR ;
typedef size_t UINT ;
struct TYPE_4__ {int wFlags; char* lpszField; char* lpszValue; } ;
typedef char* LPWSTR ;
typedef char const* LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 char* FUNC_1 (char const**,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 char** FUNC_5 (int) ;
 int FUNC_6 (char const**) ;

__attribute__((used)) static WCHAR* FUNC_7(http_request_t *VAR_1, const WCHAR *VAR_2,
        const WCHAR *VAR_3, const WCHAR *VAR_4, BOOL VAR_5)
{
    static const WCHAR VAR_6[] = {' ',0};
    static const WCHAR VAR_7[] = {':',' ',0};
    static const WCHAR VAR_8[] = {'\r',0};
    static const WCHAR VAR_9[] = {'\n',0};
    LPWSTR VAR_10;
    DWORD VAR_11, VAR_12;
    LPCWSTR *VAR_13;
    UINT VAR_14;

    FUNC_0( &VAR_1->headers_section );


    VAR_11 = VAR_1->nCustHeaders * 5 + 10;
    if (!(VAR_13 = FUNC_5( VAR_11 * sizeof(const WCHAR *) )))
    {
        FUNC_2( &VAR_1->headers_section );
        return ((void*)0);
    }


    VAR_12 = 0;
    VAR_13[VAR_12++] = VAR_2;
    VAR_13[VAR_12++] = VAR_6;
    VAR_13[VAR_12++] = VAR_3;
    VAR_13[VAR_12++] = VAR_6;
    VAR_13[VAR_12++] = VAR_4;
    if (VAR_5)
        VAR_13[VAR_12++] = VAR_8;
    VAR_13[VAR_12++] = VAR_9;


    for (VAR_14 = 0; VAR_14 < VAR_1->nCustHeaders; VAR_14++)
    {
        if (VAR_1->custHeaders[VAR_14].wFlags & VAR_0)
        {
            VAR_13[VAR_12++] = VAR_1->custHeaders[VAR_14].lpszField;
            VAR_13[VAR_12++] = VAR_7;
            VAR_13[VAR_12++] = VAR_1->custHeaders[VAR_14].lpszValue;
            if (VAR_5)
                VAR_13[VAR_12++] = VAR_8;
            VAR_13[VAR_12++] = VAR_9;

            FUNC_3("Adding custom header %s (%s)\n",
                   FUNC_4(VAR_1->custHeaders[VAR_14].lpszField),
                   FUNC_4(VAR_1->custHeaders[VAR_14].lpszValue));
        }
    }
    if (VAR_5)
        VAR_13[VAR_12++] = VAR_8;
    VAR_13[VAR_12++] = VAR_9;
    VAR_13[VAR_12] = ((void*)0);

    VAR_10 = FUNC_1( VAR_13, 4 );
    FUNC_6( VAR_13 );
    FUNC_2( &VAR_1->headers_section );
    return VAR_10;
}

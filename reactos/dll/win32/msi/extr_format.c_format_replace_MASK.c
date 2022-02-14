
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int len; char* deformatted; int n; } ;
struct TYPE_6__ {int len; int type; int n; void* nonprop; void* propfound; } ;
typedef char* LPWSTR ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_2__ FORMAT ;
typedef int DWORD ;
typedef void* BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static FORMSTR *FUNC_5( FORMAT *VAR_0, BOOL VAR_1, BOOL VAR_2,
                                int VAR_3, int VAR_4, WCHAR *VAR_5, int VAR_6 )
{
    FORMSTR *VAR_7;
    LPWSTR VAR_8, VAR_9;
    DWORD VAR_10 = 0;
    int VAR_11;

    if (VAR_5)
    {
        if (!VAR_6)
            VAR_10 = 1;
        else
            VAR_10 = VAR_6;
    }

    VAR_10 -= VAR_3;
    VAR_10 = VAR_0->len + VAR_10 + 1;

    if (VAR_10 <= 1)
    {
        FUNC_4(VAR_0->deformatted);
        VAR_0->deformatted = ((void*)0);
        VAR_0->len = 0;
        return ((void*)0);
    }

    VAR_8 = FUNC_2(VAR_10 * sizeof(WCHAR));
    if (!VAR_8)
        return ((void*)0);

    VAR_8[0] = '\0';
    FUNC_1(VAR_8, VAR_0->deformatted, VAR_0->n * sizeof(WCHAR));
    VAR_11 = VAR_0->n;

    if (VAR_5)
    {
        if (!VAR_6) VAR_8[VAR_11++] = 0;
        else
        {
            FUNC_1( VAR_8 + VAR_11, VAR_5, VAR_6 * sizeof(WCHAR) );
            VAR_11 += VAR_6;
            VAR_8[VAR_11] = 0;
        }
    }

    VAR_9 = &VAR_0->deformatted[VAR_0->n + VAR_3];
    FUNC_1(&VAR_8[VAR_11], VAR_9, (FUNC_0(VAR_9) + 1) * sizeof(WCHAR));

    FUNC_4(VAR_0->deformatted);
    VAR_0->deformatted = VAR_8;
    VAR_0->len = VAR_10 - 1;


    if (VAR_5 && !VAR_6)
        VAR_0->n++;

    if (!VAR_5)
        return ((void*)0);

    VAR_7 = FUNC_3(sizeof(FORMSTR));
    if (!VAR_7)
        return ((void*)0);

    VAR_7->len = VAR_6;
    VAR_7->type = VAR_4;
    VAR_7->n = VAR_0->n;
    VAR_7->propfound = VAR_1;
    VAR_7->nonprop = VAR_2;

    return VAR_7;
}

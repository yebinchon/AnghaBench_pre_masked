
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_6__ {int wCodePage; int wLanguage; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int * LPWSTR ;
typedef int * LPVOID ;
typedef TYPE_2__ LANGANDCODEPAGE ;
typedef int DWORD ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,char const*,int **,int *) ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*,int *,int) ;
 int FUNC_7 (char*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_8(MSIPACKAGE *VAR_1)
{
    UINT VAR_2;
    DWORD VAR_3, VAR_4;
    LPVOID VAR_5 = ((void*)0);
    WCHAR VAR_6[VAR_0];
    LPWSTR VAR_7, VAR_8;
    LANGANDCODEPAGE *VAR_9;

    static const WCHAR VAR_10[] = {
        'M','s','i','N','e','t','A','s','s','e','m','b','l','y','S','u','p','p','o','r','t',0
    };
    static const WCHAR VAR_11[] = {
        '\\','V','a','r','F','i','l','e','I','n','f','o',
        '\\','T','r','a','n','s','l','a','t','i','o','n',0
    };
    static const WCHAR VAR_12[] = {
        '\\','S','t','r','i','n','g','F','i','l','e','I','n','f','o',
        '\\','%','0','4','x','%','0','4','x',
        '\\','P','r','o','d','u','c','t','V','e','r','s','i','o','n',0
    };

    VAR_7 = FUNC_3(VAR_1);
    if (!VAR_7)
        return;

    VAR_3 = FUNC_0(VAR_7, &VAR_4);
    if (!VAR_3)
        goto done;

    VAR_5 = FUNC_4(VAR_3);
    if (!VAR_5)
        goto done;

    if (!FUNC_1(VAR_7, VAR_4, VAR_3, VAR_5))
        goto done;

    if (!FUNC_2(VAR_5, VAR_11, (LPVOID *)&VAR_9, &VAR_2))
        goto done;

    FUNC_7(VAR_6, VAR_12, VAR_9[0].wLanguage, VAR_9[0].wCodePage);

    if (!FUNC_2(VAR_5, VAR_6, (LPVOID *)&VAR_8, &VAR_2))
        goto done;

    if (!VAR_2 || !VAR_8)
        goto done;

    FUNC_6( VAR_1->db, VAR_10, VAR_8, -1 );

done:
    FUNC_5(VAR_7);
    FUNC_5(VAR_5);
}

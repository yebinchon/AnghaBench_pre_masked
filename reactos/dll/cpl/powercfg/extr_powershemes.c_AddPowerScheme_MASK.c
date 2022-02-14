
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {struct TYPE_8__* pszDescription; struct TYPE_8__* pszName; int ListEntry; int PowerPolicy; int uId; } ;
struct TYPE_7__ {int PowerSchemesList; } ;
typedef TYPE_1__* PPOWER_SCHEMES_PAGE_DATA ;
typedef TYPE_2__* PPOWER_SCHEME ;
typedef int PPOWER_POLICY ;
typedef int POWER_SCHEME ;
typedef int POWER_POLICY ;
typedef int LPWSTR ;
typedef int LPTSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static
PPOWER_SCHEME
FUNC_6(
    PPOWER_SCHEMES_PAGE_DATA VAR_3,
    UINT VAR_4,
    DWORD VAR_5,
    LPTSTR VAR_6,
    DWORD VAR_7,
    LPWSTR VAR_8,
    PPOWER_POLICY VAR_9)
{
    PPOWER_SCHEME VAR_10;
    BOOL VAR_11 = VAR_0;

    VAR_10 = FUNC_2(FUNC_1(),
                        VAR_1,
                        sizeof(POWER_SCHEME));
    if (VAR_10 == ((void*)0))
        return ((void*)0);

    VAR_10->uId = VAR_4;
    FUNC_0(&VAR_10->PowerPolicy, VAR_9, sizeof(POWER_POLICY));

    if (VAR_5 != 0)
    {
        VAR_10->pszName = FUNC_2(FUNC_1(),
                                     VAR_1,
                                     VAR_5);
        if (VAR_10->pszName == ((void*)0))
            goto done;

        FUNC_5(VAR_10->pszName, VAR_6);
    }

    if (VAR_7 != 0)
    {
        VAR_10->pszDescription = FUNC_2(FUNC_1(),
                                            VAR_1,
                                            VAR_7);
        if (VAR_10->pszDescription == ((void*)0))
            goto done;

        FUNC_5(VAR_10->pszDescription, VAR_8);
    }

    FUNC_4(&VAR_3->PowerSchemesList, &VAR_10->ListEntry);
    VAR_11 = VAR_2;

done:
    if (VAR_11 == VAR_0)
    {
        if (VAR_10->pszName)
            FUNC_3(FUNC_1(), 0, VAR_10->pszName);

        if (VAR_10->pszDescription)
            FUNC_3(FUNC_1(), 0, VAR_10->pszDescription);

        FUNC_3(FUNC_1(), 0, VAR_10);
        VAR_10 = ((void*)0);
    }

    return VAR_10;
}

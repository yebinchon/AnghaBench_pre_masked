
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ grpi1_comment; scalar_t__ grpi1_name; scalar_t__ grui0_name; } ;
typedef TYPE_1__* PGROUP_USERS_INFO_0 ;
typedef TYPE_1__* PGROUP_INFO_1 ;
typedef scalar_t__ NET_API_STATUS ;
typedef scalar_t__ LPWSTR ;
typedef int LPBYTE ;
typedef int INT ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int,int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ,int *,int ,int*,int*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 scalar_t__* FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,scalar_t__*) ;
 int FUNC_10 () ;
 int VAR_4 ;

__attribute__((used)) static
NET_API_STATUS
FUNC_11(LPWSTR VAR_5)
{
    PGROUP_INFO_1 VAR_6 = ((void*)0);
    PGROUP_USERS_INFO_0 VAR_7 = ((void*)0);
    LPWSTR *VAR_8 = ((void*)0);
    DWORD VAR_9 = 0;
    DWORD VAR_10 = 0;
    DWORD_PTR VAR_11 = 0;
    DWORD VAR_12;
    INT VAR_13 = 15;
    NET_API_STATUS VAR_14;

    VAR_14 = FUNC_3(((void*)0),
                             VAR_5,
                             1,
                             (LPBYTE*)&VAR_6);
    if (VAR_14 != VAR_3)
        return VAR_14;

    VAR_14 = FUNC_4(((void*)0),
                              VAR_5,
                              0,
                              (LPBYTE*)&VAR_7,
                              VAR_2,
                              &VAR_9,
                              &VAR_10,
                              &VAR_11);
    if (VAR_14 != VAR_3)
        goto done;

    VAR_8 = FUNC_8(FUNC_10(),
                             VAR_1,
                             VAR_9 * sizeof(LPWSTR));
    if (VAR_8 == ((void*)0))
    {
        VAR_14 = VAR_0;
        goto done;
    }

    for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
    {
        VAR_8[VAR_12] = VAR_7[VAR_12].grui0_name;
    }

    FUNC_6(4401, VAR_13);
    FUNC_0(VAR_4, L"%s\n", VAR_6->grpi1_name);

    FUNC_6(4402, VAR_13);
    FUNC_0(VAR_4, L"%s\n", VAR_6->grpi1_comment);

    FUNC_1(VAR_4, L"\n");

    FUNC_5(4403);
    FUNC_1(VAR_4, L"\n");

    FUNC_7(L'-', 79);
    FUNC_1(VAR_4, L"\n");

    for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
    {
        if (VAR_8[VAR_12])
            FUNC_0(VAR_4, L"%s\n", VAR_8[VAR_12]);
    }

done:
    if (VAR_8 != ((void*)0))
        FUNC_9(FUNC_10(), 0, VAR_8);

    if (VAR_7 != ((void*)0))
        FUNC_2(VAR_7);

    if (VAR_6 != ((void*)0))
        FUNC_2(VAR_6);

    return VAR_14;
}

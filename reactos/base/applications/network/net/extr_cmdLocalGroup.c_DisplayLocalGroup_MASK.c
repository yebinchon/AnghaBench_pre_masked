
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lgrpi1_comment; int * lgrpi1_name; int * lgrmi3_domainandname; int sv100_name; } ;
typedef TYPE_1__* PSERVER_INFO_100 ;
typedef TYPE_1__* PLOCALGROUP_MEMBERS_INFO_3 ;
typedef TYPE_1__* PLOCALGROUP_INFO_1 ;
typedef scalar_t__ NET_API_STATUS ;
typedef int * LPWSTR ;
typedef int LPBYTE ;
typedef int INT ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int *,int,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int,int *,int ,int*,int*,int *) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int ** FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int **) ;
 int FUNC_11 () ;
 int VAR_4 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int) ;

__attribute__((used)) static
NET_API_STATUS
FUNC_14(LPWSTR VAR_5)
{
    PLOCALGROUP_INFO_1 VAR_6 = ((void*)0);
    PLOCALGROUP_MEMBERS_INFO_3 VAR_7 = ((void*)0);
    PSERVER_INFO_100 VAR_8 = ((void*)0);
    LPWSTR *VAR_9 = ((void*)0);
    DWORD VAR_10 = 0;
    DWORD VAR_11 = 0;
    DWORD_PTR VAR_12 = 0;
    DWORD VAR_13;
    DWORD VAR_14;
    INT VAR_15 = 18;
    NET_API_STATUS VAR_16;

    VAR_16 = FUNC_3(((void*)0),
                                  VAR_5,
                                  1,
                                  (LPBYTE*)&VAR_6);
    if (VAR_16 != VAR_3)
        return VAR_16;

    VAR_16 = FUNC_4(((void*)0),
                                     VAR_5,
                                     3,
                                     (LPBYTE*)&VAR_7,
                                     VAR_2,
                                     &VAR_10,
                                     &VAR_11,
                                     &VAR_12);
    if (VAR_16 != VAR_3)
        goto done;

    VAR_16 = FUNC_5(((void*)0),
                              100,
                              (LPBYTE*)&VAR_8);
    if (VAR_16 != VAR_3)
        goto done;

    VAR_9 = FUNC_9(FUNC_11(),
                             VAR_1,
                             VAR_10 * sizeof(LPWSTR));
    if (VAR_9 == ((void*)0))
    {
        VAR_16 = VAR_0;
        goto done;
    }

    VAR_14 = FUNC_12(VAR_8->sv100_name);
    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
    {
         if (!FUNC_13(VAR_7[VAR_13].lgrmi3_domainandname, VAR_8->sv100_name, VAR_14))
             VAR_9[VAR_13] = &VAR_7[VAR_13].lgrmi3_domainandname[VAR_14 + 1];
         else
             VAR_9[VAR_13] = VAR_7[VAR_13].lgrmi3_domainandname;
    }

    FUNC_7(4406, VAR_15);
    FUNC_0(VAR_4, L"%s\n", VAR_6->lgrpi1_name);

    FUNC_7(4407, VAR_15);
    FUNC_0(VAR_4, L"%s\n", VAR_6->lgrpi1_comment);

    FUNC_1(VAR_4, L"\n");

    FUNC_6(4408);
    FUNC_1(VAR_4, L"\n");

    FUNC_8(L'-', 79);
    FUNC_1(VAR_4, L"\n");

    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
    {
        if (VAR_9[VAR_13])
            FUNC_0(VAR_4, L"%s\n", VAR_9[VAR_13]);
    }

done:
    if (VAR_9 != ((void*)0))
        FUNC_10(FUNC_11(), 0, VAR_9);

    if (VAR_8 != ((void*)0))
        FUNC_2(VAR_8);

    if (VAR_7 != ((void*)0))
        FUNC_2(VAR_7);

    if (VAR_6 != ((void*)0))
        FUNC_2(VAR_6);

    return VAR_16;
}

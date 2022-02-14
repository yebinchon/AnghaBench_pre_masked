
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WhoamiTable ;
typedef int WCHAR ;
struct TYPE_11__ {size_t PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_10__ {int Attributes; int Luid; } ;
typedef TYPE_2__* PWSTR ;
typedef TYPE_2__* PTOKEN_PRIVILEGES ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,TYPE_2__*,size_t*,size_t*) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_2__*,size_t*) ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_4 (size_t,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,size_t,int) ;
 int FUNC_11 (int *,TYPE_2__*,size_t,int) ;

int FUNC_12(void)
{
    PTOKEN_PRIVILEGES VAR_10 = (PTOKEN_PRIVILEGES) FUNC_6(VAR_9);
    DWORD VAR_11 = 0, VAR_12 = 0;
    WhoamiTable *VAR_13 = ((void*)0);

    if (VAR_10 == ((void*)0))
    {
        return 1;
    }

    VAR_13 = FUNC_4(VAR_10->PrivilegeCount + 1, 3);

    FUNC_8(VAR_4);

    FUNC_10(VAR_13, FUNC_7(VAR_2), 0, 0);
    FUNC_10(VAR_13, FUNC_7(VAR_1), 0, 1);
    FUNC_10(VAR_13, FUNC_7(VAR_3), 0, 2);

    for (VAR_12 = 0; VAR_12 < VAR_10->PrivilegeCount; VAR_12++)
    {
        PWSTR VAR_14 = ((void*)0), VAR_15 = ((void*)0);
        DWORD VAR_16 = 0, VAR_17 = 0;
        BOOL VAR_18 = VAR_0;

        VAR_18 = FUNC_3(((void*)0),
                                   &VAR_10->Privileges[VAR_12].Luid,
                                   ((void*)0),
                                   &VAR_16);

        VAR_14 = FUNC_1(FUNC_0(), 0, ++VAR_16*sizeof(WCHAR));

        FUNC_3(((void*)0),
                             &VAR_10->Privileges[VAR_12].Luid,
                             VAR_14,
                             &VAR_16);

        FUNC_11(VAR_13, VAR_14, VAR_12 + 1, 0);





        FUNC_2(((void*)0), VAR_14, ((void*)0), &VAR_17, &VAR_11);

        VAR_15 = FUNC_1(FUNC_0(), 0, ++VAR_17 * sizeof(WCHAR));

        VAR_18 = FUNC_2(((void*)0), VAR_14, VAR_15, &VAR_17, &VAR_11);

        if (VAR_18 && VAR_15)
        {

            FUNC_11(VAR_13, VAR_15, VAR_12 + 1, 1);
        }
        else
        {
            FUNC_10(VAR_13, FUNC_7(VAR_7), VAR_12 + 1, 1);

            if (VAR_15 != ((void*)0))
                FUNC_5(VAR_15);
        }

        if (VAR_10->Privileges[VAR_12].Attributes & VAR_8)
            FUNC_10(VAR_13, FUNC_7(VAR_6), VAR_12 + 1, 2);
        else
            FUNC_10(VAR_13, FUNC_7(VAR_5), VAR_12 + 1, 2);
    }

    FUNC_9(VAR_13);


    FUNC_5(VAR_10);

    return 0;
}
